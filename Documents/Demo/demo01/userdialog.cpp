#include "userdialog.h"
#include "ui_userdialog.h"
#include "global.h"

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    qDebug()<<Account<<"1";
    ui->pushButton_4->setEnabled(false);qDebug()<<Account<<"2";
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    this->type = query.value("type").toInt();
    qDebug()<<this->type;
    qDebug()<<"Account";
    if(this->type)
        ui->lineEdit_4->setText("您是VIP会员可享受八折优惠!");
    else
        ui->lineEdit_4->setText("充值会员可享受八折优惠!");
}

UserDialog::~UserDialog()
{
    delete ui;
}

void UserDialog::closeEvent()
{
    qDebug()<<Account;
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    sql = QString("update userinfo set state = 0 where account = '%1';").arg(Account);
    query.exec(sql);
    if(!ui->pushButton_3->isEnabled()&&ui->pushButton_4->isEnabled())
    {
        timer->stop();
        timer_2->stop();
        QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
        query.exec(sql);
        query.next();
        double balance = query.value("balance").toDouble();
        qDebug()<<balance<<" "<<cost<<" flag";
        sql = QString("update userinfo set balance = '%1' where account = '%2';").arg(balance-cost).arg(Account);
        query.exec(sql);
    }
}

void UserDialog::balanceUpdate()
{
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    double balance = query.value("balance").toDouble();
    sql = QString("update userinfo set balance = '%1' where account = '%2';").arg(balance-cost).arg(Account);
    query.exec(sql);
    sql = QString("update userinfo set state = 0 where account = '%1';").arg(Account);
    query.exec(sql);
}

void UserDialog::timerUpdate(){

    QDateTime endTime=  QDateTime::currentDateTime();
    QString str =QDateTime::fromMSecsSinceEpoch(endTime.toMSecsSinceEpoch() - currentTime.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");
    ui->lineEdit_2->setText(str);

}

void UserDialog::costUpdate()
{
    if(cost != 55&&cost != 150)
    {
        QDateTime endTime=  QDateTime::currentDateTime();
        QString str =QDateTime::fromMSecsSinceEpoch(endTime.toMSecsSinceEpoch() - currentTime.toMSecsSinceEpoch()).toUTC().toString("ss");
        cost = str.toInt()*8;
    }
    if(this->type==1)
        cost*=0.8;
    ui->lineEdit_3->setText(QString::number(cost));
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    double balance = query.value("balance").toDouble();
    if(cost>=balance)
    {
        QSqlQuery query;
        QString sql = QString("update userinfo set balance = '%1' where account = '%2';").arg(balance-cost).arg(Account);
        query.exec(sql);
        timerUpdate();
        timer->stop();
        timer_2->stop();
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
        ui->lineEdit_4->setText("余额不足！请及时充值！");
        int flag = QMessageBox::warning(this,tr("网络已断开！"),tr("余额不足！请及时充值！"),QMessageBox::Yes | QMessageBox::Cancel);
        if(flag == QMessageBox::Cancel)
            this->close();
    }
    QString a = QDateTime::currentDateTime().toString("hh");
    int b = a.toInt();
    qDebug()<<b;
    //qDebug()<<a;
}


void UserDialog::on_pushButton_12_clicked()
{
    Widget* w = new Widget;
    this->close();
    w->show();
}

void UserDialog::on_pushButton_3_clicked()
{
    QMessageBox box(QMessageBox::Information, "消费模式", "请先选择消费模式");
    box.setStandardButtons(QMessageBox::Yes | QMessageBox::Ok|QMessageBox::No);
    box.setButtonText(QMessageBox::Yes, QString("普通消费"));
    box.setButtonText(QMessageBox::No, QString("包夜"));
    box.setButtonText(QMessageBox::Ok, QString("包天"));
    int flag = box.exec();
    if(flag ==QMessageBox::No)
    {
        QString a = QDateTime::currentDateTime().toString("hh");
        int h = a.toInt();
        if(h<=7||h>=22)
        {
            cost =55;
        }
        else {
            QMessageBox::warning(this,"失败","当前不属于包夜时间段",QMessageBox::Ok);
            return;
        }
    }
    else if(flag ==QMessageBox::Ok)
        cost = 150;
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int state = query.value("state").toInt();
    if(state)
    {
        QMessageBox::warning(this,tr("失败"),tr("该账号已在别处使用!"),QMessageBox::Ok);
        return;
    }
    sql = QString("update userinfo set state = 1 where account = '%1';").arg(Account);
    query.exec(sql);
    currentTime =  QDateTime::currentDateTime();
    timer = new QTimer(this);
    timer_2 = new QTimer (this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    connect(timer_2, SIGNAL(timeout()), this, SLOT(costUpdate()));
    timer->start(10);
    timer_2->start(10);
    QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    ui->lineEdit->setText(str);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
}

void UserDialog::on_pushButton_4_clicked()
{
    balanceUpdate();
    timer->stop();
    timer_2->stop();
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(false);
    QMessageBox::information(this,tr("下机提醒"),tr("您已下机<br>您本次共消费%1元").arg(cost),QMessageBox::Ok);
    QSqlQuery query;
    QString sql = QString("update userinfo set state = 0 where account = '%1';").arg(Account);
    query.exec(sql);
    Widget* w=new Widget;
    this->close();
    w->show();
}

void UserDialog::on_pushButton_5_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    double balance = query.value("balance").toDouble();
    QMessageBox::information(this,tr("查询成功！"),tr("您的当前余额为%1元！").arg(balance));
}

void UserDialog::on_pushButton_6_clicked()
{
    if(this->type)
    {
        QMessageBox::information(this,tr("办理失败"),tr("您已是VIP会员<br>无需重复办理"),QMessageBox::Ok);
        return;
    }
    this->norm = 100;
    int flag = QMessageBox::information(this,tr("会员详细"),tr("会员福利多多！<br>"
                                         "上网享受八折优惠！<br>"
                                         "充值享受七点五折优惠!<br>"
                                         "是否花费%1元开通VIP会员？").arg(this->norm),QMessageBox::Yes|QMessageBox::No);
    if(flag==QMessageBox::Yes)
    {
        QSqlQuery query;
        QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
        query.exec(sql);
        query.next();
        double balance = query.value("balance").toDouble();
        if(balance>=this->norm)
        {
            ui->lineEdit_4->setText("您是VIP会员可享受八折优惠!");
            sql = QString("update userinfo set balance = '%1' type = 1 where account = '%2';").arg(balance-this->norm).arg(Account);
            this->type = 1;
            query.exec(sql);
            QMessageBox::warning(this,tr("成功"),tr("开通会员成功！"),QMessageBox::Ok);
        }
        else
            QMessageBox::warning(this,tr("失败"),tr("您的余额不足！请先充值！"),QMessageBox::Ok);
    }
}

void UserDialog::on_pushButton_9_clicked()
{
    LogoutDialog* lo = new LogoutDialog;
    this->close();
    lo->show();
}


void UserDialog::on_pushButton_10_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int state = query.value("state").toInt();
    if(state)
    {
        QMessageBox::warning(this,tr("退费失败"),tr("该账号正在使用!"),QMessageBox::Ok);
        return;
    }
    int flag = QMessageBox::warning(this,tr("申请退款"),tr("确认退款吗?"),QMessageBox::Yes | QMessageBox::No);
    if(flag==QMessageBox::Yes)
    {
        QSqlQuery query;
        QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
        query.exec(sql);
        query.next();
        double balance = query.value("balance").toDouble();
        sql = QString("update userinfo set balance = 0 where account = '%1';").arg(Account);
        query.exec(sql);
        QMessageBox::information(this,tr("退款成功"),tr("已成功为您退款%1元").arg(balance),QMessageBox::Ok);
    }
}

void UserDialog::on_pushButton_8_clicked()
{
    SelectDialog* s = new SelectDialog;
    this->close();
    s->show();
}

void UserDialog::on_pushButton_7_clicked()
{
    RechangeDialog* re =new RechangeDialog;
    this->close();
    re->show();
}

void UserDialog::on_pushButton_clicked()
{
    QMessageBox::information(this,tr("收费标准"),tr("普通收费标准<br>"
                                                "全天每小时8元<br>"
                                                "包夜标准<br>"
                                                "22-7点一共55元<br>"
                                                "包天标准<br>"
                                                "24小时一共150元<br><br>"
                                                "温馨提示<br>"
                                                "不足一小时按一小时收费<br>"
                                                "VIP会员可享八折优惠！"),QMessageBox::Ok);
}

void UserDialog::on_pushButton_2_clicked()
{
    QMessageBox::information(this,tr("帮助"),tr("上网过程中如果遇到任何问题请直接联系管理人员！"),QMessageBox::Ok);
}



#include "logindialog.h"
#include "ui_logindialog.h"
#include "global.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(10);
    ui->lineEdit_2->setMaxLength(10);
    ui->lineEdit_2->setValidator(new QIntValidator(ui->lineEdit_2));
    ui->lineEdit_3->setMaxLength(10);
    ui->lineEdit_4->setMaxLength(10);
    ui->lineEdit_5->setValidator(new QIntValidator(1,999999,this));
    ui->lineEdit_5->setMaxLength(6);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);


   /* QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("1");
    db.setUserName("root");
    db.setPassword("root230817");
    bool ok = db.open();
    if (ok){
        QMessageBox::information(this, "infor", "success");
    }
        else {
         QMessageBox::information(this, "infor", "open failed");
        }
    QSqlQuery query;
    query.exec("create table students (account varchar(15) primary key, "
                 "name varchar(20),"
               "password int)");
      query.exec("insert into students values('0', 'first',123)");
      query.exec("insert into students values('1', 'second',123)");
      query.exec("insert into students values('2', 'third',123)");
      query.exec("insert into students values('3', 'fourth',123)");
      query.exec("insert into students values('4', 'fifth',123)");
          query.exec("select * from students");
    query.next();


    while(query.next())
        qDebug()<<query.value(2).toInt();*/
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_2_clicked()
{
    Widget* w = new Widget;
    this->close();
    w->show();
}

void LoginDialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("昵称不能为空!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_2->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("账号不能为空!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_3->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("密码不能为空!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_4->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("请再次输入密码!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_5->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("初始余额不能为空!"),QMessageBox::Ok);
        return;
    }
    QString name = ui->lineEdit->text().trimmed();
    QString account = ui->lineEdit_2->text().trimmed();
    QString password_1 = ui->lineEdit_3->text().trimmed();
    QString password_2 = ui->lineEdit_4->text().trimmed();
    if(password_1.compare(password_2)!=0)
    {
         QMessageBox::warning(this,tr("注册失败"),tr("请确保两次输入的密码相同!"),QMessageBox::Ok);
         return;
    }
    QString str = ui->lineEdit_5->text().trimmed();
    double balance = str.toDouble();
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(account);
    QDateTime currentTime = QDateTime::currentDateTime();
    unsigned int joinDate = currentTime.toTime_t();
    int type = 0;
    if(query.exec(sql))
    {
        if(query.next())
            QMessageBox::warning(this,tr("注册失败"),tr("该账号已被注册！"),QMessageBox::Ok);
        else {
            query.prepare("insert into userinfo(account,password,name,balance,joinDate,type,state)"
                          "values (:account,:password,:name,:balance,:joinDate,:type,:state)");
            query.bindValue(":account",account);
            query.bindValue(":password",password_1);
            query.bindValue(":name",name);
            query.bindValue(":balance",balance);
            query.bindValue(":joinDate",joinDate);
            query.bindValue(":type",type);
            query.bindValue(":state",0);
            query.exec();
            if(query.exec(sql)){     //如果插入数据成功
                      QMessageBox::information(this,"成功","注册成功！");
                      Widget* w = new Widget;
                      this->close();
                      w->show();
                  }else{
                      QMessageBox::warning(this,"失败","注册失败！",QMessageBox::Ok);

            }
           // QMessageBox::warning(this,tr("注册成功"),tr("请保管好您的密码！"),QMessageBox::Ok);
        }
    }
}

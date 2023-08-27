#include "logoutdialog.h"
#include "ui_logoutdialog.h"
#include "global.h"
LogoutDialog::LogoutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogoutDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
}

LogoutDialog::~LogoutDialog()
{
    delete ui;
}

void LogoutDialog::on_pushButton_2_clicked()
{
    UserDialog* c =new UserDialog;
    this->close();
    c->show();
}

void LogoutDialog::on_pushButton_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    double balance = query.value("balance").toDouble();
    int status = query.value("status").toInt();
    if(status)
    {
        QMessageBox::warning(this,tr("注销失败"),tr("该账号正在使用!"),QMessageBox::Ok);
        this->close();
        UserDialog* u =new UserDialog;
        u->show();
        return;
    }
    sql = QString("update cardinfo set status = 2,del = 1 where account = '%1';").arg(Account);
    query.exec(sql);
    if(balance<0)
    {
        QMessageBox::warning(this,tr("注销失败"),tr("您的账号目前处于欠费状态<br>请先充值"),QMessageBox::Ok);
        return;
    }
    QMessageBox::information(this,tr("注销成功"),tr("您的账号的退款金额为%1元").arg(balance),QMessageBox::Ok);
    this->close();
}

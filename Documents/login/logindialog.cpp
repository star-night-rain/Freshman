#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text().trimmed()==tr("admin")&&ui->pwdLineEdit->text().trimmed()==tr("123456"))
        accept();
    else {
        QMessageBox::warning(this,tr("信息"),tr("用户名或密码错误"),QMessageBox::Yes);
    }
}



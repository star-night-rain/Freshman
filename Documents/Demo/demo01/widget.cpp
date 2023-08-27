#include "widget.h"
#include "ui_widget.h"
#include "global.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit->setMaxLength(10);
    ui->lineEdit_2->setMaxLength(10);
    ui->radioButton->setChecked(true);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_clicked()
{
    LoginDialog* dlg = new LoginDialog;
    this->close();
    dlg->show();
}



void Widget::on_pushButton_2_clicked()
{
    QString account = ui->lineEdit->text().trimmed();
    QString password = ui->lineEdit_2->text().trimmed();
    if(account==tr(""))
        QMessageBox::warning(this,tr("登录失败"),tr("账号不能为空！"),QMessageBox::Ok);
    else if(password==tr(""))
        QMessageBox::warning(this,tr("登录失败"),tr("密码不能为空！"),QMessageBox::Ok);
    else if(!ui->radioButton->isChecked()&&!ui->radioButton_2->isChecked())
        QMessageBox::warning(this,tr("登录失败"),tr("请选择登录身份！"),QMessageBox::Ok);
    else {
        QSqlQuery query;
        QString sql = QString("select * from userinfo where account = '%1';").arg(account);
        if(query.exec(sql)&&query.next())
        {
            if(password == query.value("password").toString())
            {
                if(ui->radioButton->isChecked()&&account.compare("666666"))
                {
                    Account= QString("%1").arg(account);
                    qDebug()<<Account<<"232323";
                    UserDialog* u = new UserDialog;
                    this->close();
                    u->show();
                }
                else if(account.compare("666666")==0&&ui->radioButton_2->isChecked())
                {
                    AdminDialog* a = new AdminDialog;
                    this->close();
                    a->show();
                }
                else
                    QMessageBox::warning(this,tr("信息"),tr("用户名或密码错误"),QMessageBox::Yes);
            }
            else
                QMessageBox::warning(this,tr("信息"),tr("用户名或密码错误"),QMessageBox::Yes);
        }
        else
            QMessageBox::warning(this,tr("信息"),tr("该用户不存在！"),QMessageBox::Yes);
    }
}

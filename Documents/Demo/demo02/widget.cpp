#include "widget.h"
#include "ui_widget.h"
#include "global.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit->setMaxLength(11);
    ui->lineEdit_2->setMaxLength(16);
    ui->radioButton->setChecked(true);
//    this->setWindowFlags(Qt::FramelessWindowHint);
//    //设置窗体样式，圆角窗体需要修改数字测试测试效果
//    this->setStyleSheet("background-color: rgb(0, 0, 255);border-style:solid;border-width:2px;border-radius:50px;");

////#ChooseUsbCamera{	//类名
////	background-color: rgb(255, 255, 255);	//背景颜色（白色）
////	border-radius: 10px;					//四角圆角的直径
////	border-style:solid;						//边框样式（实线）
////	border-width:2px;						//边框宽度
////	border-color:rgb(213, 213, 213);		//边框颜色
////}

////    ui->pushButton->setStyleSheet("QPushButton{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:50px;padding:2px 4px;border-style: outset;}"
////                                               "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
////                                               "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");
 //    ui->pushButton->setStyleSheet("QPushButton{color:white;background-color:rgb(144,227,255);border-radius:30px;border:10px solid gray}");

    QImage *img_mainicon;//主图标显示在右上角lable中
     img_mainicon =new QImage;//新建一个image对象
     img_mainicon->load("D:/Documents/picture/2.jpg"); //载入图片到img对象中
     img_mainicon->scaled(ui->label->size(),Qt::KeepAspectRatio);//把图片
     ui->label->setScaledContents(true);
     ui->label->setPixmap(QPixmap::fromImage(*img_mainicon));
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
        QString sql = QString("select * from cardinfo where account = '%1';").arg(account);
        if(query.exec(sql)&&query.next())
        {
            int status = query.value("status").toInt();
            if(status==2)
            {
                QMessageBox::warning(this,tr("登录失败"),tr("该账号已注销!"),QMessageBox::Ok);
                return;
            }
            int flag = query.value("id").toInt();
            if(password == query.value("password").toString())
            {
                if(ui->radioButton->isChecked()&&flag>3)
                {
                    Account= account;
                    qDebug()<<Account<<"232323";
                    UserDialog* u = new UserDialog;
                    this->close();
                    u->show();
                }
                else if(flag<=3&&ui->radioButton_2->isChecked())
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

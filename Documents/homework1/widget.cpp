#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->checkBoxTristate->setTristate((true));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::CheckHobbies()
{
    int count = 0;

    if(ui->checkBoxEat->isChecked())
        count++;
    if(ui->checkBoxDaze->isChecked())
        count++;
    if(ui->checkBoxRead->isChecked())
        count++;
    if(ui->checkBoxSwim->isChecked())
        count++;
    if(ui->checkBoxClimb->isChecked())
        count++;
    if(ui->checkBoxShopping->isChecked())
        count++;

    if(count<=0)
    {
        ui->checkBoxTristate->setCheckState((Qt::Unchecked));
        return;
    }
    else if(count<=5)
    {
        ui->checkBoxTristate->setCheckState((Qt::PartiallyChecked));
        return;
    }
    else
    {
        ui->checkBoxTristate->setCheckState((Qt::Checked));
        return;
    }
}

void Widget::on_commandLinkButtonFolder_clicked()
{
    QDesktopServices::openUrl((QUrl("file:///D:/Documents")));
}

void Widget::on_commandLinkButtonWeb_clicked()
{
    QDesktopServices::openUrl((QUrl("https://lug.ustc.edu.cn/sites/qtguide/")));
}

void Widget::on_pushButton_clicked()
{

    QString strResult = tr("兴趣爱好为：\r\n");
    if( ui->checkBoxRead->isChecked() )
    {
        strResult += tr("读书\r\n");
    }
    if( ui->checkBoxClimb->isChecked() )
    {
        strResult += tr("爬山\r\n");
    }
    if( ui->checkBoxSwim->isChecked() )
    {
        strResult += tr("游泳\r\n");
    }
    if( ui->checkBoxDaze->isChecked() )
    {
        strResult += tr("发呆\r\n");
    }
    if( ui->checkBoxShopping->isChecked() )
    {
        strResult += tr("逛街\r\n");
    }
    if( ui->checkBoxEat->isChecked() )
    {
        strResult += tr("吃货\r\n");
    }

    QMessageBox::information(this, tr("兴趣爱好"), strResult);
}

void Widget::on_checkBoxRead_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("读书");
    }
    CheckHobbies();
}

void Widget::on_checkBoxClimb_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("爬山");
    }
    CheckHobbies();
}

void Widget::on_checkBoxSwim_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("游泳");
    }
    CheckHobbies();
}

void Widget::on_checkBoxDaze_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("发呆");
    }
    CheckHobbies();
}

void Widget::on_checkBoxShopping_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("逛街");
    }
    CheckHobbies();
}

void Widget::on_checkBoxEat_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("吃货");
    }
    CheckHobbies();
}

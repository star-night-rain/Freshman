#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //去掉边框
    a = new Dialog();
    b = new Dialog2();
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->scrollArea->setWidget(a);



}

Widget::~Widget()
{
    delete ui;
}

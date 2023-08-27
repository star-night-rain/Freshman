#include "widget.h"
#include "ui_widget.h"
#include <QDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("打开新窗口");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QDialog *dlg = new QDialog(this);
    dlg->show();
}

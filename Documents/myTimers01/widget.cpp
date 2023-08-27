#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include <windows.h>

static QDateTime currentTime;
static QTimer* timer;
static int timer_id;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

 ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerUpdate(){

    QDateTime endTime=  QDateTime::currentDateTime();
    QString str =QDateTime::fromMSecsSinceEpoch(endTime.toMSecsSinceEpoch() - currentTime.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");
    //在标签上显示时间
    ui->lineEdit->setText(str);

}



void Widget::on_pushButton_clicked()
{ currentTime =  QDateTime::currentDateTime();
     timer = new QTimer(this);    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
     timer->start(1);
      QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss dddd");
     ui->lineEdit_2->setText(str);
     ui->pushButton->setEnabled(false);
     ui->pushButton_2->setEnabled(true);
}

void Widget::on_pushButton_2_clicked()
{

    timer->stop();
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
}

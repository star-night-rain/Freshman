#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->progressBar->setRange(0,100);
       ui->progressBar->setValue(0);
       ui->progressBar->setOrientation (Qt::Horizontal);
       timer = new QTimer();
       connect(this->timer, SIGNAL(timeout()), this, SLOT(start()));
          timer->start(25); //
          if (tick < 101)
             {
                 ui->progressBar->setValue(tick++);
             } else
             {
                 tick = 1;
                 disconnect(this->timer, SIGNAL(timeout()), this, SLOT(start())); // 若断开链接，进度条会一直重复
                 //ui->progressBar->reset(); // 进度条归零
             }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    timer = new QTimer();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(start()));
       timer->start(25); //
}

void Widget::start()
{
    if (tick < 101)
       {
           ui->progressBar->setValue(tick++);
       } else
       {
           tick = 1;
           disconnect(this->timer, SIGNAL(timeout()), this, SLOT(start())); // 若断开链接，进度条会一直重复
           //ui->progressBar->reset(); // 进度条归零
       }

}

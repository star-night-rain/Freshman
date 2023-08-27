#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QPainter>
#include <QtDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->sheep->setPixmap(QPixmap("D:/Documents/9.jpg"));
    resize(480,480);
    curIndex=0;
    startTimer(1000);
    initPixmap();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
   int x = ui->sheep->x();
   int y = ui->sheep->y();
   switch (e->key())
   {
   case Qt::Key_W : ui->sheep->move(x, y-10); break;
   case Qt::Key_S : ui->sheep->move(x, y+10); break;
   case Qt::Key_A : ui->sheep->move(x-10, y); break;
   case Qt::Key_D : ui->sheep->move(x+10, y); break;
   case Qt::Key_Up : ui->sheep->move(x, y-10); break;
   case Qt::Key_Down : ui->sheep->move(x, y+10); break;
   case Qt::Key_Left : ui->sheep->move(x-10, y); break;
   case Qt::Key_Right : ui->sheep->move(x+10, y); break;
   }
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,480,480);
    painter.drawPixmap(q,pixmap[curIndex],q);
}

void Widget::timerEvent(QTimerEvent *event)
{
    curIndex++;
    if (curIndex>=6)
        curIndex=0;
    repaint();
}

void Widget::initPixmap()
{
    for(int i=0;i<6;i++)
    {
        QString fileName = QString("D:\\Documents\\eye.jpg");
        qDebug()<<fileName;
        QPixmap map(fileName);
        pixmap[i]=map;
    }
}

void Widget::on_pushButton_clicked()
{
    int x = ui->sheep->x();
    int y = ui->sheep->y();
    ui->sheep->move(x+10, y);
}

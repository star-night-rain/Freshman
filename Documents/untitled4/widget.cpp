#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


        camera = new QCamera(this);
        cameraViewFinder = new QCameraViewfinder(this);
        ui->verticalLayout_camera->addWidget(cameraViewFinder);
        camera->setViewfinder(cameraViewFinder);
       timer = new QTime;

}

void Widget::stop()
{
 camera->stop();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    camera->start();

}

void Widget::on_pushButton_2_clicked()
{

}

void Widget::on_pushButton_3_clicked()
{

}


void Widget::onImageCaptured(int idx,QImage img)
{

}

#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("调用摄像头例程V1.0");


      camera = new QCamera(this);
      cameraViewFinder = new QCameraViewfinder(this);
      ui->verticalLayout_camera->addWidget(cameraViewFinder);
      camera->setViewfinder(cameraViewFinder);
 cameraImageCapture = new QCameraImageCapture(camera);
    timer = new QTimer;
   // connect(timer,SIGNAL(timeout()),this,SLOT(on_pushButton_2_clicked()));

}

Widget::~Widget()
{
    camera->stop();
    delete ui;
}

void Widget::on_pushButton_clicked()
{
     camera->start();
   //  timer->start(5000);

}



void Widget::on_pushButton_2_clicked()
{
     camera->stop();
    // this->close();
}

void Widget::on_pushButton_3_clicked()
{
    QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    qDebug()<<"开始截图";cameraImageCapture->capture(QString("D://Documents//picture//%1.jpg").arg(1));



}

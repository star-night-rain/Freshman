#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QDebug>
#include <QTime>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

     void onImageCaptured(int idx,QImage img);

     void stop();

private:
    Ui::Widget *ui;
    QCamera *camera;
    QCameraViewfinder *cameraViewFinder;
    QCameraImageCapture *cameraImageCapture;
    QTime* timer;
};

#endif // WIDGET_H

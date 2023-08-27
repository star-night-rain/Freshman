#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

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




private:
    Ui::Widget *ui;
    QTimer* timer;
    QCamera *camera;
    QCameraViewfinder *cameraViewFinder;
    QCameraImageCapture *cameraImageCapture;
};

#endif // WIDGET_H

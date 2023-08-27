#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QtNetwork>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTcpSocket *tcpSocket;
private slots:

    void connected_Slot();
    void readyRead_Slot();

    void on_sendBt_clicked();

    //void on_openBt_clicked();

private:
    Ui::Widget *ui;

protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // WIDGET_H


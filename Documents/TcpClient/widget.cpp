#include "widget.h"
#include "ui_widget.h"
#include <QDateTime>
/*构造函数*/
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket =new QTcpSocket(this);
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       //我们使用IPv4地址
       if(address.protocol() == QAbstractSocket::IPv4Protocol)
           tcpSocket->connectToHost(address.toString(),6666);
    }

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot()));
    qDebug() << "client send connect";
}
/*readyRead()信号执行的槽函数*/
void Widget:: connected_Slot()
{
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}
void Widget:: readyRead_Slot()
{
//    QString buf;
 //   buf = tcpSocket->readAll();
    ui->recvEdit->appendPlainText(tcpSocket->readAll());
}
/*析构函数*/
Widget::~Widget()
{
    tcpSocket->close();
    qDebug() << "client close success";
    delete ui;
}
/*按键槽函数*/


void Widget::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
    case Qt::Key_Return:
        on_sendBt_clicked();
        break;
    case Qt::Key_Enter:
        on_sendBt_clicked();
        break;
    }
}


void Widget::on_sendBt_clicked()
{
     QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       //我们使用IPv4地址
       if(address.protocol() == QAbstractSocket::IPv4Protocol)
           tcpSocket->connectToHost(address.toString(),6666);
    }
    if(ui->sendEdit->text().trimmed().isEmpty())
        return;
    QDateTime ct = QDateTime::currentDateTime();
    QString str = ct.toString("yyyy/MM/dd hh:mm:ss");
    ui->recvEdit->appendPlainText(("管理人员 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    tcpSocket->write(("管理人员 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    qDebug() << "client send success";
        ui->sendEdit->clear();
}


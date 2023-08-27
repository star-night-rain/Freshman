#include "widget.h"
#include "ui_widget.h"
#include <QDateTime>
/*构造函数*/
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    QHostAddress address;
//    foreach (QHostAddress address, list)
//    {
//       if(address.protocol() == QAbstractSocket::IPv4Protocol)
//         {  tcpServer->listen(QHostAddress(address.toString()),6666);
//           break;
//       }
//    }


    /*信号与槽的关联，此处信号为newConnection()，槽函数为newConnection_Slot()*/
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));
}
/*建立新连接槽函数*/
void Widget::newConnection_Slot()
{
     tcpSocket = tcpServer->nextPendingConnection();
     /*信号与槽的关联，此处信号为readyRead()，槽函数为readyRead_Slot()*/
     connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}
/*读取数据槽函数*/
void Widget:: readyRead_Slot()
{
    QString buf;
    buf = tcpSocket->readAll();
    ui->recvEdit->appendPlainText(buf);

}
/*析构函数*/
Widget::~Widget()
{
        tcpServer->close();
    delete ui;
}
/*按键槽函数*/

/*打开（监听）服务器*/

/*发送信息到客户端*/
void Widget::on_sendBt_clicked()
{
    tcpServer->listen(QHostAddress::Any,6666);
    if(ui->sendEdit->text().trimmed().isEmpty())
        return;
    QDateTime ct = QDateTime::currentDateTime();
    QString str = ct.toString("yyyy/MM/dd hh:mm:ss");
    ui->recvEdit->appendPlainText(("张三 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    tcpSocket->write(("张三 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    ui->sendEdit->clear();

}

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


void Widget::on_openBt_clicked()
{

}

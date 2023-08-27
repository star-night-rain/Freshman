#include "widget.h"
#include "ui_widget.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
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

void Widget::on_pushButton_clicked()
{
    QSqlQuery q;
    q.prepare("insert into student values (?, ?)");
    QVariantList ints;
    ints << 10 << 11 << 12 << 13;
    q.addBindValue(ints);
    QVariantList names;
    // 最后一个是空字符串，应与前面的格式相同
        names << "xiaoming" << "xiaoliang"
                      << "xiaogang" << QVariant(QVariant::String);
    q.addBindValue(names);
    if (!q.execBatch()) //进行批处理，如果出错就输出错误
       qDebug() << q.lastError();
    //下面输出整张表
    QSqlQuery query;
    query.exec("select * from student");
    while(query.next())
    {
       int id = query.value(0).toInt();
       QString name = query.value(1).toString();
       qDebug() << id << name;
    }


}

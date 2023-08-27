#include "widget.h"
#include "ui_widget.h"
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlRecord>
#include <QModelIndex>
#include <QDebug>
#include <QSqlQuery>
#include <mysqlquerymodel.h>
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
{   QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select * from student");
        model->setHeaderData(0, Qt::Horizontal, tr("id"));
        model->setHeaderData(1, Qt::Horizontal, tr("name"));
        QTableView *view = new QTableView;
        view->setModel(model);
        view->show();

    //创建自己模型的对象
        MySqlQueryModel *myModel = new MySqlQueryModel(this);    myModel->setQuery("select * from student");
        myModel->setHeaderData(0, Qt::Horizontal, tr("id"));
        myModel->setHeaderData(1, Qt::Horizontal, tr("name"));
        QTableView *view1 = new QTableView;
        view1->setWindowTitle("mySqlQueryModel"); //修改窗口标题
        view1->setModel(myModel);
        view1->show();

}

#include "widget.h"
#include "ui_widget.h"
#include <QMenu>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);



    //创建视图控件对应的模型

    //将模型添加到视图控件中


}

Widget::~Widget()
{
    delete ui;
}

void Widget::contextMenuEvent(QContextMenuEvent *event)
{
    Q_UNUSED(event);
    QMenu menu;
    //添加右键菜单的选项
    menu.addAction("方法1：选项1");
    menu.addAction("方法1：选项2");
    menu.addAction("方法1：选项3");
    //显示menu菜单并设置其显示位置为鼠标位置
    menu.exec(QCursor::pos());
}


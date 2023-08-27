#include "admindialog.h"
#include "ui_admindialog.h"
#include <QMessageBox>
#include "global.h"
AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->lineEdit->setMaxLength(11);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    model = new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    this->    setWindowState(Qt::WindowMaximized);

}

AdminDialog::~AdminDialog()
{
    delete ui;
}



void AdminDialog::on_pushButton_3_clicked()
{
    QSqlQuery query;
    query.exec("select * from billings");
    int sum = 0;
    while(query.next())
    {
        sum+=query.value(4).toInt();
    }
    QMessageBox::information(this,tr("查询成功"),tr("网吧目前的营业总额为%1元").arg(sum),QMessageBox::Ok);
}

void AdminDialog::on_pushButton_4_clicked()
{
    Widget* w =new Widget;
    this->close();
    w->show();
}

void AdminDialog::on_pushButton_6_clicked()
{
    account = ui->lineEdit->text().trimmed();
    model->setTable("billings");
    model->select();
    model->removeColumn(6);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 120);
    ui->tableView->setColumnWidth(1, 120);
    ui->tableView->setColumnWidth(2, 295);
    ui->tableView->setColumnWidth(3, 295);
    ui->tableView->setColumnWidth(4, 120);
    ui->tableView->setColumnWidth(5, 120);
    if(account.isEmpty())
        model->setFilter(QString("del = 0"));
    else
        model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void AdminDialog::on_pushButton_clicked()
{
    account = ui->lineEdit->text().trimmed();
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(10);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(5, 300);
    ui->tableView->setColumnWidth(6, 300);
    if(account.isEmpty())
        model->setFilter(QString("del = 0"));
    else
        model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
}

void AdminDialog::on_pushButton_2_clicked()
{
    account = ui->lineEdit->text().trimmed();
    model->setTable("cardrecords");
    model->select();
    model->removeColumn(5);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(2, 295);
    ui->tableView->setColumnWidth(4, 150);
    if(account.isEmpty())
        model->setFilter(QString("del = 0"));
    else
        model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
}

void AdminDialog::on_pushButton_5_clicked()
{
    account = ui->lineEdit->text().trimmed();
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(0);
    model->removeColumn(1);
    model->removeColumn(2);
    model->removeColumn(3);
    model->removeColumn(4);
    model->removeColumn(5);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(6, 300);
    if(account.isEmpty())
        model->setFilter(QString("del = 0 and status =1"));
    else
        model->setFilter(QString("account = '%1' and del = 0 and status = 1").arg(account));
    model->select();
}

void AdminDialog::on_pushButton_7_clicked()
{
    adminChat* ac = new adminChat;
    ac->show();
}

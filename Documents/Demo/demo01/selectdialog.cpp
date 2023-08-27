#include "selectdialog.h"
#include "ui_selectdialog.h"
#include "global.h"

SelectDialog::SelectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
}

SelectDialog::~SelectDialog()
{
    delete ui;
}

void SelectDialog::on_pushButton_3_clicked()
{
    UserDialog* u = new UserDialog;
    this->close();
    u->show();
}

void SelectDialog::on_pushButton_clicked()
{
    ChangePassword* cp = new ChangePassword;
    this->close();
    cp->show();
}

void SelectDialog::on_pushButton_2_clicked()
{
    ChangeName* cn = new ChangeName;
    this->close();
    cn->show();
}

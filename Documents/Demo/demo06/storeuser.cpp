#include "storeuser.h"
#include "ui_storeuser.h"
#include "global.h"
storeUser::storeUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeUser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
}

storeUser::~storeUser()
{
    delete ui;
}

void storeUser::on_pushButton_clicked()
{
    int amount = 0;
    if(ui->spinBox)
        amount += ui->spinBox->value()*10;
    if(ui->spinBox_2)
        amount += ui->spinBox->value()*2;
    if(ui->spinBox_3)
        amount += ui->spinBox->value()*6;
    if(ui->spinBox_4)
        amount += ui->spinBox->value()*6;
    if(ui->spinBox_5)
        amount += ui->spinBox->value()*5;
    if(amount)
    {
        this->close();

    }
}

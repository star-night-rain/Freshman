#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);connect(&thread, SIGNAL(stringChanged(QString)),
                              this, SLOT(changeString(QString)));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::changeString(const QString &str)
{
    ui->label->setText(str);
}

void Dialog::on_startButton_clicked()
{
    thread.start();
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(true);
}

void Dialog::on_endButton_clicked()
{
    thread.start();
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(true);
}

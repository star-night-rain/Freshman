#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <mythread.h>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_startButton_clicked();

    void on_endButton_clicked();
    void changeString(const QString &);

private:
    Ui::Dialog *ui;MyThread thread;
};

#endif // DIALOG_H

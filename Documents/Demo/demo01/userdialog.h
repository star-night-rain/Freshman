#ifndef USERDIALOG_H
#define USERDIALOG_H


#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QCloseEvent>
namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = nullptr);
    ~UserDialog();


private slots:
    void balanceUpdate();

    void timerUpdate();

    void costUpdate();

    void on_pushButton_12_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();


    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void closeEvent();


private:
    Ui::UserDialog *ui;
    QTimer* timer;
    QTimer* timer_2;
    QDateTime currentTime;
    int type;
    double cost;
    double norm;

};

#endif // USERDIALOG_H

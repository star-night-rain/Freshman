#ifndef RECHANGEDIALOG_H
#define RECHANGEDIALOG_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QIntValidator>
namespace Ui {
class RechangeDialog;
}

class RechangeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RechangeDialog(QWidget *parent = nullptr);
    ~RechangeDialog();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void rechange(int x);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::RechangeDialog *ui;
    QPoint p;

protected:
    void mouseMoveEvent(QMouseEvent *e);//鼠标移动
    void mousePressEvent(QMouseEvent *e);//鼠标按下移动
};

#endif // RECHANGEDIALOG_H

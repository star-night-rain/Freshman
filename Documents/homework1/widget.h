#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void CheckHobbies();

private slots:
    void on_commandLinkButtonFolder_clicked();

    void on_commandLinkButtonWeb_clicked();

    void on_pushButton_clicked();

    void on_checkBoxRead_toggled(bool checked);

    void on_checkBoxClimb_toggled(bool checked);

    void on_checkBoxSwim_toggled(bool checked);

    void on_checkBoxDaze_toggled(bool checked);

    void on_checkBoxShopping_toggled(bool checked);

    void on_checkBoxEat_toggled(bool checked);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

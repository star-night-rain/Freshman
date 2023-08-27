#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlRelationalTableModel>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QSqlRelationalTableModel* model;
};

#endif // WIDGET_H

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
    void paintEvent(QPaintEvent * event);
    void timerEvent(QTimerEvent * event);
    void initPixmap();
    int curIndex;

private:
    Ui::Widget *ui;
    QPixmap pixmap[6];

protected:
    void keyPressEvent(QKeyEvent *);
private slots:
    void on_pushButton_clicked();
};

#endif // WIDGET_H

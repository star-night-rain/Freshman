#ifndef QQ_H
#define QQ_H

#include <QDialog>

namespace Ui {
class QQ;
}

class QQ : public QDialog
{
    Q_OBJECT

public:
    explicit QQ(QWidget *parent = nullptr);
    ~QQ();

private:
    Ui::QQ *ui;
};

#endif // QQ_H

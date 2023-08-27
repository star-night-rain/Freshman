#include "widget.h"
#include <QApplication>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Dialog dlg;
    if(dlg.exec()==QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    else {
        return 0;
    }
}

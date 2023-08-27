
#include "global.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 1;
    Widget w;
    AdminDialog c;
    w.show();



    return a.exec();
}


#include "global.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 1;

    storeUser b;
    b.show();



    return a.exec();
}

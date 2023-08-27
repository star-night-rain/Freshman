#include "mythread.h"

#include <QDebug>
MyThread::MyThread()
{
stopped = false;
}

void MyThread::run()
{
    long int i = 0;
    while (!stopped) {
       QString str = QString("in MyThread: %1").arg(i);
       emit stringChanged(str);
       msleep(1000);
       i++;
    }
    stopped = false;
}

void MyThread::stop()
{
    stopped = true;
}

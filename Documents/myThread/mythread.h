#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
class MyThread : public QThread
{
public:
    MyThread();
    void stop();
protected:
    void run();
private:
    volatile bool stopped;
signals:
void stringChanged(const QString &);
};

#endif // MYTHREAD_H

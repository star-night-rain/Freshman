#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("root230817");
    if(!db.open())
    {
        qDebug()<<"打开数据库失败";
        return false;
    }
    QSqlQuery query;
    query.exec(QString("create table cardinfo (id integer primary key auto_increment,"
                       "name varchar(20),account varchar(11),password varchar(16),type int,status int,"
                       "starttime varchar(20),endtime varchar(20),lastuse varchar(20),usecount int,"
                       "balance float,del int)"));
    query.exec(QString("create table billings (id integer primary key auto_increment,"
                       "cardid int,starttime varchar(20),endtime varchar(20),"
                       "amount float,status int, del int)"));
    query.exec(QString("create table cardrecords (id integer primary key auto_increment,"
                        "cardid int,operationtime varchar(20),operation int,"
                        "money float,del int)"));
    query.exec(QString("create table foods (id integer primary key auto_increment,"
                        "name varchar(15),price int,count int)"));
    query.exec(QString("insert into foods(name,price,count) values('%1','%2','%3')").arg("方便面").arg(10).arg(100));
    query.exec(QString("insert into foods(name,price,count) values('%1','%2','%3')").arg("火腿肠").arg(2).arg(100));
    query.exec(QString("insert into foods(name,price,count) values('%1','%2','%3')").arg("啤酒").arg(6).arg(100));
    query.exec(QString("insert into foods(name,price,count) values('%1','%2','%3')").arg("面包").arg(5).arg(100));
    query.exec(QString("insert into foods(name,price,count) values('%1','%2','%3')").arg("汽水").arg(6).arg(100));

//    query.exec("create table a(id integer primary key auto_increment,sex int)");
//    query.exec(QString("insert into a(sex)value(0)"));
    return true;
}
#endif // CONNECTION_H

#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("root230817");
    if(!db.open())
        return false;
    QSqlQuery query;
    query.exec(QString("create table userinfo (account varchar(10) primary key,"
                       "password varchar(10),name varchar(8),balance double,"
                       "joinDate int,type int,state int)"));
    query.exec(QString("create table cardinfo (account varchar(10) primary key,"
                       "usecount int,totaltime int,endtime int)"));
    query.exec(QString("create table costinfo (account varchar(10),starttime int,"
                       "tndtime int,totaltime int,cost int)"));

    query.exec(QString("insert into userinfo values (1233,'123','admin',0.5,0,0,0)"));
    return true;
}
#endif // CONNECTION_H

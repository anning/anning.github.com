#ifndef CONNECTDATABASE_H
#define CONNECTDATABASE_H
#include <QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlRecord>

bool connectdatabase(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("Student");
    db.setUserName("root");
    db.setPassword("123456");

    if(db.open()){
        qDebug()<<"database is established,";
    }else{
        qDebug()<<"build error,";
    }

    QSqlQuery query("select * from student", db);

    while(query.next()){
        qDebug()<<query.value(0).toString()<<"		"<<query.value(1).toString();
    }

    return true;

}

#endif // CONNECTDATABASE_H

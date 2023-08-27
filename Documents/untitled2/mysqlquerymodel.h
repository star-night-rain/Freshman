#ifndef MYSQLQUERYMODEL_H
#define MYSQLQUERYMODEL_H

#include <QObject>
#include <QSqlQueryModel>

class MySqlQueryModel : public QSqlQueryModel
{
public:
    MySqlQueryModel(QObject *parent);
    Qt::ItemFlags flags(const QModelIndex &index) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    QVariant data(const QModelIndex &item, int role=Qt::DisplayRole) const;
private:
    bool setName(int studentId, const QString &name);
    void refresh();
};

#endif // MYSQLQUERYMODEL_H

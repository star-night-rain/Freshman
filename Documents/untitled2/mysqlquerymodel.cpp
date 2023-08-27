#include "mysqlquerymodel.h"
#include <QSqlQuery>
#include <QColor>
MySqlQueryModel::MySqlQueryModel(QObject *parent) :
    QSqlQueryModel(parent)
{
}

Qt::ItemFlags MySqlQueryModel::flags(
       const QModelIndex &index) const //返回表格是否可更改的标志
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (index.column() == 1) //第二个属性可更改
       flags |= Qt::ItemIsEditable;
    return flags;
}

bool MySqlQueryModel::setData(const QModelIndex &index, const QVariant &value, int /* role */)
       //添加数据
{
    if (index.column() < 1 || index.column() > 2)
       return false;
   QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
    int id = data(primaryKeyIndex).toInt(); //获取id号
    clear();
    bool ok;
    if (index.column() == 1) //第二个属性可更改
       ok = setName(id, value.toString());
    refresh();
    return ok;
}

void MySqlQueryModel::refresh() //更新显示
{
    setQuery("select * from student");
    setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
}

//添加name属性的值
bool MySqlQueryModel::setName(int studentId, const QString &name)
{
    QSqlQuery query;
    query.prepare("update student set name = ? where id = ?");
    query.addBindValue(name);
    query.addBindValue(studentId);
    return query.exec();
}

//更改数据显示样式
QVariant MySqlQueryModel::data(const QModelIndex &index, int role) const
{
QVariant value = QSqlQueryModel::data(index, role);

//第一个属性的字体颜色为红色
    if (role == Qt::TextColorRole && index.column() == 0)
       return qVariantFromValue(QColor(Qt::red));
return value;
}



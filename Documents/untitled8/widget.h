#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QTime>
#include <QBarLegendMarker>
#include <QtDebug>
#include <QTimer>
QT_CHARTS_USE_NAMESPACE
class Widget : public QWidget {
    Q_OBJECT

   public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void initUI();
    void initBarSet();
    void initConnect();
   public slots:
    void handleMarkerClicked();

   private:
    QChart *m_ptrChart;
    QChartView *m_ptrChartview;
    QBarSeries *m_ptrBarSeries;
    QValueAxis *m_ptrAxisY;
    QBarCategoryAxis *m_ptrAxisX;
    QList<QBarSet *> m_listBarSet;
    QTimer* timer;
    QFont font;

private slots:
    void dataUpdate();
    // QWidget interface

};
#endif  // WIDGET_H

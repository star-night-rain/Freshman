/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QTableView *tableView;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QString::fromUtf8("AdminDialog"));
        AdminDialog->resize(1404, 923);
        label = new QLabel(AdminDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 780, 101, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit = new QLineEdit(AdminDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 780, 211, 51));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        pushButton = new QPushButton(AdminDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 720, 281, 51));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(AdminDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 840, 281, 51));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(AdminDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 840, 281, 51));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(AdminDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 720, 281, 51));
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(AdminDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1190, 870, 201, 51));
        pushButton_4->setFont(font);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new QPushButton(AdminDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1120, 720, 281, 51));
        pushButton_6->setFont(font);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        tableView = new QTableView(AdminDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 30, 1161, 621));

        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "\347\256\241\347\220\206\347\253\257", nullptr));
        label->setText(QApplication::translate("AdminDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("AdminDialog", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        pushButton->setText(QApplication::translate("AdminDialog", "\346\237\245\350\257\242\347\224\250\346\210\267\350\265\204\346\226\231", nullptr));
        pushButton_2->setText(QApplication::translate("AdminDialog", "\346\237\245\350\257\242\345\205\205\345\200\274\347\263\273\347\273\237", nullptr));
        pushButton_3->setText(QApplication::translate("AdminDialog", "\347\275\221\345\220\247\350\220\245\344\270\232\351\242\235\346\237\245\350\257\242", nullptr));
        pushButton_5->setText(QApplication::translate("AdminDialog", "\346\237\245\347\234\213\344\270\212\346\234\272\347\224\250\346\210\267", nullptr));
        pushButton_4->setText(QApplication::translate("AdminDialog", "\350\277\224\345\233\236", nullptr));
        pushButton_6->setText(QApplication::translate("AdminDialog", "\346\237\245\350\257\242\346\266\210\350\264\271\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'selectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDIALOG_H
#define UI_SELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SelectDialog)
    {
        if (SelectDialog->objectName().isEmpty())
            SelectDialog->setObjectName(QString::fromUtf8("SelectDialog"));
        SelectDialog->resize(531, 435);
        label = new QLabel(SelectDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 321, 81));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(SelectDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 159, 151, 81));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(SelectDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 260, 151, 81));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(SelectDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 380, 201, 51));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        retranslateUi(SelectDialog);

        QMetaObject::connectSlotsByName(SelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectDialog)
    {
        SelectDialog->setWindowTitle(QApplication::translate("SelectDialog", "\345\212\237\350\203\275\351\200\211\346\213\251\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("SelectDialog", "\350\257\267\351\200\211\346\213\251\350\246\201\346\211\247\350\241\214\347\232\204\346\223\215\344\275\234", nullptr));
        pushButton->setText(QApplication::translate("SelectDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QApplication::translate("SelectDialog", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        pushButton_3->setText(QApplication::translate("SelectDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDialog: public Ui_SelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'adminchat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHAT_H
#define UI_ADMINCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminChat
{
public:
    QPlainTextEdit *recvEdit;
    QPushButton *openBt;
    QPushButton *closeBt;
    QPushButton *sendBt;
    QLineEdit *sendEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *adminChat)
    {
        if (adminChat->objectName().isEmpty())
            adminChat->setObjectName(QString::fromUtf8("adminChat"));
        adminChat->resize(950, 742);
        recvEdit = new QPlainTextEdit(adminChat);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(30, 40, 851, 481));
        QFont font;
        font.setPointSize(12);
        recvEdit->setFont(font);
        recvEdit->setFocusPolicy(Qt::NoFocus);
        recvEdit->setReadOnly(true);
        openBt = new QPushButton(adminChat);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(90, 690, 80, 20));
        closeBt = new QPushButton(adminChat);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setGeometry(QRect(310, 700, 80, 20));
        sendBt = new QPushButton(adminChat);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));
        sendBt->setGeometry(QRect(610, 710, 80, 20));
        sendEdit = new QLineEdit(adminChat);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(90, 590, 581, 41));
        label = new QLabel(adminChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 552, 231, 20));
        label_2 = new QLabel(adminChat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 10, 201, 21));

        retranslateUi(adminChat);

        QMetaObject::connectSlotsByName(adminChat);
    } // setupUi

    void retranslateUi(QDialog *adminChat)
    {
        adminChat->setWindowTitle(QApplication::translate("adminChat", "\346\234\215\345\212\241\347\253\257", nullptr));
        openBt->setText(QApplication::translate("adminChat", "\346\211\223\345\274\200\346\234\215\345\212\241\347\253\257", nullptr));
        closeBt->setText(QApplication::translate("adminChat", "\345\205\263\351\227\255\346\234\215\345\212\241\347\253\257", nullptr));
        sendBt->setText(QApplication::translate("adminChat", "\345\217\221\351\200\201", nullptr));
        label->setText(QApplication::translate("adminChat", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("adminChat", "\346\216\245\345\217\227\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminChat: public Ui_adminChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHAT_H

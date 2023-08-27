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
        adminChat->resize(1500, 1000);
        recvEdit = new QPlainTextEdit(adminChat);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(60, 50, 1381, 651));
        QFont font;
        font.setPointSize(13);
        recvEdit->setFont(font);
        recvEdit->setFocusPolicy(Qt::NoFocus);
        recvEdit->setReadOnly(true);
        openBt = new QPushButton(adminChat);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(70, 900, 211, 61));
        openBt->setFont(font);
        openBt->setFocusPolicy(Qt::NoFocus);
        closeBt = new QPushButton(adminChat);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setGeometry(QRect(510, 900, 211, 61));
        closeBt->setFont(font);
        closeBt->setFocusPolicy(Qt::NoFocus);
        sendBt = new QPushButton(adminChat);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));
        sendBt->setGeometry(QRect(940, 900, 211, 61));
        sendBt->setFont(font);
        sendBt->setFocusPolicy(Qt::NoFocus);
        sendEdit = new QLineEdit(adminChat);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(70, 800, 1111, 61));
        sendEdit->setFont(font);
        label = new QLabel(adminChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 750, 231, 51));
        label->setFont(font);
        label_2 = new QLabel(adminChat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 10, 221, 41));
        label_2->setFont(font);

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
        label_2->setText(QApplication::translate("adminChat", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminChat: public Ui_adminChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHAT_H

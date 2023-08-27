/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QPlainTextEdit *recvEdit;
    QLineEdit *sendEdit;
    QPushButton *openBt;
    QPushButton *closeBt;
    QPushButton *sendBt;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(1000, 900);
        recvEdit = new QPlainTextEdit(Chat);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(20, 50, 931, 601));
        QFont font;
        font.setPointSize(12);
        recvEdit->setFont(font);
        recvEdit->setFocusPolicy(Qt::NoFocus);
        recvEdit->setReadOnly(true);
        sendEdit = new QLineEdit(Chat);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(50, 730, 681, 51));
        openBt = new QPushButton(Chat);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(50, 840, 80, 20));
        closeBt = new QPushButton(Chat);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setGeometry(QRect(220, 840, 80, 20));
        sendBt = new QPushButton(Chat);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));
        sendBt->setGeometry(QRect(490, 840, 80, 20));
        label = new QLabel(Chat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 692, 251, 20));
        label_2 = new QLabel(Chat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 161, 21));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "\345\256\242\346\210\267\347\253\257", nullptr));
        openBt->setText(QApplication::translate("Chat", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        closeBt->setText(QApplication::translate("Chat", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        sendBt->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        label->setText(QApplication::translate("Chat", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Chat", "\346\216\245\345\217\227\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H

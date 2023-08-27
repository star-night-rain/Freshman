/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(630, 815);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 30, 441, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEdit_3 = new QLineEdit(LoginDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 280, 361, 41));
        QFont font1;
        font1.setPointSize(12);
        lineEdit_3->setFont(font1);
        lineEdit_3->setFocusPolicy(Qt::ClickFocus);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(LoginDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 170, 361, 41));
        lineEdit_2->setFont(font1);
        lineEdit_2->setFocusPolicy(Qt::ClickFocus);
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 170, 101, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 280, 101, 41));
        label_4->setFont(font1);
        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 650, 171, 61));
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 760, 271, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(LoginDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 770, 121, 41));
        pushButton_3->setFont(font1);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(LoginDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 500, 151, 41));
        label_5->setFont(font1);
        lineEdit_5 = new QLineEdit(LoginDialog);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 500, 361, 41));
        lineEdit_5->setFont(font1);
        lineEdit_5->setFocusPolicy(Qt::ClickFocus);
        label_6 = new QLabel(LoginDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 390, 151, 41));
        label_6->setFont(font1);
        lineEdit_4 = new QLineEdit(LoginDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 390, 361, 41));
        lineEdit_4->setFont(font1);
        lineEdit_4->setFocusPolicy(Qt::ClickFocus);
        lineEdit_4->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);
        QObject::connect(pushButton_3, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        pushButton_3->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
        label_5->setText(QApplication::translate("LoginDialog", "\345\210\235\345\247\213\344\275\231\351\242\235\357\274\232", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\210\235\345\247\213\344\275\231\351\242\235", nullptr));
        label_6->setText(QApplication::translate("LoginDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\345\206\215\346\254\241\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QString::fromUtf8("ChangePassword"));
        ChangePassword->resize(780, 756);
        label = new QLabel(ChangePassword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 30, 241, 71));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 150, 111, 31));
        label_2->setFont(font);
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 230, 111, 31));
        label_3->setFont(font);
        label_4 = new QLabel(ChangePassword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 310, 161, 41));
        label_4->setFont(font);
        lineEdit = new QLineEdit(ChangePassword);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 140, 361, 41));
        lineEdit->setFont(font);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(ChangePassword);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 220, 361, 41));
        lineEdit_2->setFont(font);
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(ChangePassword);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 310, 361, 41));
        lineEdit_3->setFont(font);
        lineEdit_3->setFocusPolicy(Qt::StrongFocus);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 690, 171, 51));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(ChangePassword);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 480, 191, 81));
        QFont font1;
        font1.setPointSize(15);
        pushButton_2->setFont(font1);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(ChangePassword);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 400, 611, 41));
        label_5->setFont(font);

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "\346\233\264\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("ChangePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("ChangePassword", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("ChangePassword", "\350\256\276\347\275\256\346\226\260\345\257\206\347\240\201", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("ChangePassword", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_5->setText(QApplication::translate("ChangePassword", "\351\234\200\347\224\261\344\270\215\350\266\205\350\277\20710\344\275\215\347\232\204\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\346\210\226\347\254\246\345\220\210\347\273\204\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H

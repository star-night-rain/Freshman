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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QString::fromUtf8("AdminDialog"));
        AdminDialog->resize(1113, 710);
        textEdit = new QTextEdit(AdminDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 881, 461));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setReadOnly(true);
        label = new QLabel(AdminDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 600, 81, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit = new QLineEdit(AdminDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 600, 191, 41));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        pushButton = new QPushButton(AdminDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 560, 281, 41));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(AdminDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 599, 131, 41));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(AdminDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 630, 281, 41));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(AdminDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(870, 600, 201, 41));
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::NoFocus);

        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "\347\256\241\347\220\206\347\253\257", nullptr));
        label->setText(QApplication::translate("AdminDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("AdminDialog", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        pushButton->setText(QApplication::translate("AdminDialog", "\346\230\276\347\244\272\345\205\250\351\203\250\347\224\250\346\210\267\350\265\204\346\226\231", nullptr));
        pushButton_2->setText(QApplication::translate("AdminDialog", "\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QApplication::translate("AdminDialog", "\347\275\221\345\220\247\350\220\245\344\270\232\351\242\235\346\237\245\350\257\242", nullptr));
        pushButton_5->setText(QApplication::translate("AdminDialog", "\344\277\256\346\224\271\346\266\210\350\264\271\346\240\207\345\207\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H

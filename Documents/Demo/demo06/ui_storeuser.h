/********************************************************************************
** Form generated from reading UI file 'storeuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREUSER_H
#define UI_STOREUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_storeUser
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox_4;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinBox_5;
    QLabel *label_10;
    QPushButton *pushButton;

    void setupUi(QDialog *storeUser)
    {
        if (storeUser->objectName().isEmpty())
            storeUser->setObjectName(QString::fromUtf8("storeUser"));
        storeUser->resize(1200, 800);
        label = new QLabel(storeUser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(83, 90, 121, 61));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        spinBox = new QSpinBox(storeUser);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(230, 91, 71, 41));
        spinBox->setFont(font);
        label_2 = new QLabel(storeUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 170, 101, 41));
        label_2->setFont(font);
        label_3 = new QLabel(storeUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(263, 181, 91, 31));
        label_3->setFont(font);
        spinBox_2 = new QSpinBox(storeUser);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(420, 210, 46, 22));
        spinBox_2->setFont(font);
        label_4 = new QLabel(storeUser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(293, 251, 91, 31));
        label_4->setFont(font);
        label_5 = new QLabel(storeUser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(93, 321, 91, 41));
        label_5->setFont(font);
        spinBox_3 = new QSpinBox(storeUser);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(210, 350, 46, 22));
        spinBox_3->setFont(font);
        label_6 = new QLabel(storeUser);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 420, 121, 31));
        label_6->setFont(font);
        label_7 = new QLabel(storeUser);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(543, 311, 91, 41));
        label_7->setFont(font);
        spinBox_4 = new QSpinBox(storeUser);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(700, 350, 46, 22));
        spinBox_4->setFont(font);
        label_8 = new QLabel(storeUser);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(553, 381, 111, 41));
        label_8->setFont(font);
        label_9 = new QLabel(storeUser);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(523, 81, 131, 31));
        label_9->setFont(font);
        spinBox_5 = new QSpinBox(storeUser);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(720, 110, 46, 22));
        spinBox_5->setFont(font);
        label_10 = new QLabel(storeUser);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(583, 162, 101, 20));
        label_10->setFont(font);
        pushButton = new QPushButton(storeUser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 670, 181, 71));
        pushButton->setFont(font);

        retranslateUi(storeUser);

        QMetaObject::connectSlotsByName(storeUser);
    } // setupUi

    void retranslateUi(QDialog *storeUser)
    {
        storeUser->setWindowTitle(QApplication::translate("storeUser", "Dialog", nullptr));
        label->setText(QApplication::translate("storeUser", "\346\226\271\344\276\277\351\235\242", nullptr));
        label_2->setText(QApplication::translate("storeUser", "10\345\205\203", nullptr));
        label_3->setText(QApplication::translate("storeUser", "\347\201\253\350\205\277\350\202\240", nullptr));
        label_4->setText(QApplication::translate("storeUser", "2\345\205\203", nullptr));
        label_5->setText(QApplication::translate("storeUser", "\345\225\244\351\205\222", nullptr));
        label_6->setText(QApplication::translate("storeUser", "6\345\205\203", nullptr));
        label_7->setText(QApplication::translate("storeUser", "\346\261\275\346\260\264", nullptr));
        label_8->setText(QApplication::translate("storeUser", "6\345\205\203", nullptr));
        label_9->setText(QApplication::translate("storeUser", "\351\235\242\345\214\205", nullptr));
        label_10->setText(QApplication::translate("storeUser", "5\345\205\203", nullptr));
        pushButton->setText(QApplication::translate("storeUser", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storeUser: public Ui_storeUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREUSER_H

/********************************************************************************
** Form generated from reading UI file 'rechangedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHANGEDIALOG_H
#define UI_RECHANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RechangeDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_2;
    QFrame *frame;
    QPushButton *pushButton_9;

    void setupUi(QDialog *RechangeDialog)
    {
        if (RechangeDialog->objectName().isEmpty())
            RechangeDialog->setObjectName(QString::fromUtf8("RechangeDialog"));
        RechangeDialog->resize(776, 578);
        QFont font;
        font.setPointSize(12);
        RechangeDialog->setFont(font);
        label = new QLabel(RechangeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 121, 41));
        label->setFocusPolicy(Qt::NoFocus);
        lineEdit = new QLineEdit(RechangeDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 70, 381, 41));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        pushButton = new QPushButton(RechangeDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 141, 41));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(RechangeDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 170, 141, 41));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(RechangeDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 170, 141, 41));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(RechangeDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 250, 141, 41));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(RechangeDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 250, 141, 41));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new QPushButton(RechangeDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(530, 250, 141, 41));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_7 = new QPushButton(RechangeDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(100, 330, 141, 41));
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_8 = new QPushButton(RechangeDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 430, 151, 51));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        lineEdit_2 = new QLineEdit(RechangeDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 330, 331, 41));
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        frame = new QFrame(RechangeDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 781, 581));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/6.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(580, 490, 161, 51));
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        frame->raise();
        label->raise();
        lineEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        lineEdit_2->raise();

        retranslateUi(RechangeDialog);

        QMetaObject::connectSlotsByName(RechangeDialog);
    } // setupUi

    void retranslateUi(QDialog *RechangeDialog)
    {
        RechangeDialog->setWindowTitle(QApplication::translate("RechangeDialog", "\345\205\205\345\200\274\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("RechangeDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("RechangeDialog", "\350\257\267\350\276\223\345\205\245\350\246\201\345\205\205\345\200\274\347\232\204\350\264\246\345\217\267", nullptr));
        pushButton->setText(QApplication::translate("RechangeDialog", "10\345\205\203", nullptr));
        pushButton_2->setText(QApplication::translate("RechangeDialog", "30\345\205\203", nullptr));
        pushButton_3->setText(QApplication::translate("RechangeDialog", "50\345\205\203", nullptr));
        pushButton_4->setText(QApplication::translate("RechangeDialog", "100\345\205\203", nullptr));
        pushButton_5->setText(QApplication::translate("RechangeDialog", "200\345\205\203", nullptr));
        pushButton_6->setText(QApplication::translate("RechangeDialog", "500\345\205\203", nullptr));
        pushButton_7->setText(QApplication::translate("RechangeDialog", "\350\207\252\345\256\232\344\271\211", nullptr));
        pushButton_8->setText(QApplication::translate("RechangeDialog", "\347\241\256\350\256\244\345\205\205\345\200\274", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("RechangeDialog", "\350\257\267\350\276\223\345\205\245\350\246\201\345\205\205\345\200\274\347\232\204\351\207\221\351\242\235", nullptr));
        pushButton_9->setText(QApplication::translate("RechangeDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RechangeDialog: public Ui_RechangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHANGEDIALOG_H

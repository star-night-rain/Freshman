/********************************************************************************
** Form generated from reading UI file 'qq.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQ_H
#define UI_QQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QQ
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QQ)
    {
        if (QQ->objectName().isEmpty())
            QQ->setObjectName(QString::fromUtf8("QQ"));
        QQ->resize(1000, 800);
        frame = new QFrame(QQ);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 50, 631, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(QQ);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 550, 80, 20));
        pushButton_2 = new QPushButton(QQ);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 550, 80, 20));

        retranslateUi(QQ);

        QMetaObject::connectSlotsByName(QQ);
    } // setupUi

    void retranslateUi(QDialog *QQ)
    {
        QQ->setWindowTitle(QApplication::translate("QQ", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("QQ", "\345\267\262\346\224\257\344\273\230", nullptr));
        pushButton_2->setText(QApplication::translate("QQ", "\345\217\226\346\266\210\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQ: public Ui_QQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQ_H

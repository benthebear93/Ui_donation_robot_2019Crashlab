/********************************************************************************
** Form generated from reading UI file 'show_bank.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_BANK_H
#define UI_SHOW_BANK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_bank
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *show_bank)
    {
        if (show_bank->objectName().isEmpty())
            show_bank->setObjectName(QString::fromUtf8("show_bank"));
        show_bank->resize(782, 513);
        horizontalLayoutWidget = new QWidget(show_bank);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 561, 481));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../Screenshot_20191125-142202_KakaoTalk.png")));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(20);
        font.setItalic(true);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(show_bank);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 390, 151, 101));
        QFont font1;
        font1.setPointSize(18);
        font1.setItalic(true);
        pushButton->setFont(font1);

        retranslateUi(show_bank);

        QMetaObject::connectSlotsByName(show_bank);
    } // setupUi

    void retranslateUi(QDialog *show_bank)
    {
        show_bank->setWindowTitle(QApplication::translate("show_bank", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("show_bank", "\353\251\224\353\246\254\352\263\260 X \353\230\220\353\236\230\354\236\245\355\225\231\352\270\210", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("show_bank", "\354\213\240\355\225\234\354\235\200\355\226\211110-376-383888", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("show_bank", "\353\217\204\353\204\244\354\235\264\354\205\230 \353\201\235\342\231\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class show_bank: public Ui_show_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_BANK_H

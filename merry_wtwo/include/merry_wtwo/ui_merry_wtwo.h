/********************************************************************************
** Form generated from reading UI file 'merry_wtwo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERRY_WTWO_H
#define UI_MERRY_WTWO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_merry_wtwo
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *merry_wtwo)
    {
        if (merry_wtwo->objectName().isEmpty())
            merry_wtwo->setObjectName(QString::fromUtf8("merry_wtwo"));
        merry_wtwo->resize(1042, 543);
        centralWidget = new QWidget(merry_wtwo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("/home/benlee/catkin_ws/src/Ui_donation_robot_2019Crashlab/merry_wtwo/image/bear.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("/home/benlee/catkin_ws/src/Ui_donation_robot_2019Crashlab/merry_wtwo/image/qrcode_50.png")));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(18);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(26);
        font1.setItalic(true);
        pushButton->setFont(font1);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        merry_wtwo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(merry_wtwo);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1042, 25));
        merry_wtwo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(merry_wtwo);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        merry_wtwo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(merry_wtwo);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        merry_wtwo->setStatusBar(statusBar);

        retranslateUi(merry_wtwo);

        QMetaObject::connectSlotsByName(merry_wtwo);
    } // setupUi

    void retranslateUi(QMainWindow *merry_wtwo)
    {
        merry_wtwo->setWindowTitle(QApplication::translate("merry_wtwo", "merry_wtwo", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("merry_wtwo", "\352\270\260\353\266\200\354\227\220 \353\214\200\355\225\234 \354\236\220\354\204\270\355\225\234 \354\204\244\353\252\205\354\235\204 \354\234\204\355\225\264 ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("merry_wtwo", "\353\251\224\353\246\254\352\263\260\354\235\204 \354\271\234\352\265\254\354\266\224\352\260\200\355\225\264\354\243\274\354\204\270\354\232\224! \354\271\264\354\271\264\354\230\244\355\206\241 : ERICA\353\251\224\353\246\254\352\263\260 \352\262\200\354\203\211", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("merry_wtwo", "\353\230\220\353\236\230\355\212\234\355\204\260\353\247\201X\355\201\254\353\236\230\354\211\254\353\236\251 \353\251\224\353\246\254\352\263\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("merry_wtwo", "카카오뱅크 3333-08-3122893(이해구)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("merry_wtwo", "\352\270\260\353\266\200\352\260\200 \353\201\235\353\202\230\353\251\264 \352\274\255 \353\262\204\355\212\274 \353\210\214\353\237\254\354\243\274\354\204\270\354\232\244", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("merry_wtwo", "Donation End \342\231\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class merry_wtwo: public Ui_merry_wtwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERRY_WTWO_H

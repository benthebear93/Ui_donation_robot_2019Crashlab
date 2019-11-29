/********************************************************************************
** Form generated from reading UI file 'merry_bot.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERRY_BOT_H
#define UI_MERRY_BOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_merry_bot
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *merry_bot)
    {
        if (merry_bot->objectName().isEmpty())
            merry_bot->setObjectName(QString::fromUtf8("merry_bot"));
        merry_bot->resize(1009, 612);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(merry_bot->sizePolicy().hasHeightForWidth());
        merry_bot->setSizePolicy(sizePolicy);
        merry_bot->setMaximumSize(QSize(1009, 612));
        centralWidget = new QWidget(merry_bot);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(24);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"background-color: transparent;\n"
"background-image url(:/Screenshot_20191125-142202_KakaoTalk.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        pushButton->setAutoRepeatDelay(300);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        horizontalLayout->addWidget(pushButton);

        merry_bot->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(merry_bot);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1009, 25));
        merry_bot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(merry_bot);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        merry_bot->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(merry_bot);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        merry_bot->setStatusBar(statusBar);

        retranslateUi(merry_bot);

        QMetaObject::connectSlotsByName(merry_bot);
    } // setupUi

    void retranslateUi(QMainWindow *merry_bot)
    {
        merry_bot->setWindowTitle(QApplication::translate("merry_bot", "merry_bot", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("merry_bot", "Donation Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class merry_bot: public Ui_merry_bot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERRY_BOT_H

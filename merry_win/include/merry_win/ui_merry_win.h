/********************************************************************************
** Form generated from reading UI file 'merry_win.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERRY_WIN_H
#define UI_MERRY_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_merry_win
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *merry_win)
    {
        if (merry_win->objectName().isEmpty())
            merry_win->setObjectName(QString::fromUtf8("merry_win"));
        merry_win->resize(693, 670);
        centralWidget = new QWidget(merry_win);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("/home/benlee/catkin_ws/src/merry_win/image/bear_chat.jpg")));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(28);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        merry_win->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(merry_win);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 25));
        merry_win->setMenuBar(menuBar);
        mainToolBar = new QToolBar(merry_win);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        merry_win->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(merry_win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        merry_win->setStatusBar(statusBar);

        retranslateUi(merry_win);

        QMetaObject::connectSlotsByName(merry_win);
    } // setupUi

    void retranslateUi(QMainWindow *merry_win)
    {
        merry_win->setWindowTitle(QApplication::translate("merry_win", "merry_win", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("merry_win", "\353\230\220\353\236\230\354\236\245\355\225\231\352\270\210x\355\201\254\353\236\230\354\211\254\353\236\251", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("merry_win", "\354\235\264\355\225\264\352\265\254,\354\225\210\355\225\230\354\235\274,\354\206\241\355\235\254\354\233\220,\353\260\225\354\230\210\354\247\204 \354\240\234\354\236\221", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("merry_win", "(\353\251\224\353\246\254\352\263\260 \354\272\220\353\246\255\355\204\260\353\224\224\354\236\220\354\235\270 \354\225\210\354\230\210\354\247\204)", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("merry_win", "Donation Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class merry_win: public Ui_merry_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERRY_WIN_H

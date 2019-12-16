/********************************************************************************
** Form generated from reading UI file 'admin_ui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_UI_H
#define UI_ADMIN_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_admin_ui
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *psd_l;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *psd_r;
    QLabel *psd_m;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Motor_left;
    QPushButton *Motor_Right;
    QPushButton *Motor_Both;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QPushButton *end_button;
    QPushButton *sound_putton;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *admin_ui)
    {
        if (admin_ui->objectName().isEmpty())
            admin_ui->setObjectName(QString::fromUtf8("admin_ui"));
        admin_ui->resize(1085, 594);
        centralWidget = new QWidget(admin_ui);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        psd_l = new QLabel(centralWidget);
        psd_l->setObjectName(QString::fromUtf8("psd_l"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        psd_l->setFont(font);

        gridLayout->addWidget(psd_l, 1, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        psd_r = new QLabel(centralWidget);
        psd_r->setObjectName(QString::fromUtf8("psd_r"));
        psd_r->setFont(font);

        gridLayout->addWidget(psd_r, 1, 2, 1, 1);

        psd_m = new QLabel(centralWidget);
        psd_m->setObjectName(QString::fromUtf8("psd_m"));
        psd_m->setFont(font);

        gridLayout->addWidget(psd_m, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(16);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Motor_left = new QPushButton(centralWidget);
        Motor_left->setObjectName(QString::fromUtf8("Motor_left"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Motor_left->sizePolicy().hasHeightForWidth());
        Motor_left->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Motor_left);

        Motor_Right = new QPushButton(centralWidget);
        Motor_Right->setObjectName(QString::fromUtf8("Motor_Right"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Motor_Right->sizePolicy().hasHeightForWidth());
        Motor_Right->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(Motor_Right);


        verticalLayout->addLayout(horizontalLayout_3);

        Motor_Both = new QPushButton(centralWidget);
        Motor_Both->setObjectName(QString::fromUtf8("Motor_Both"));
        sizePolicy1.setHeightForWidth(Motor_Both->sizePolicy().hasHeightForWidth());
        Motor_Both->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(18);
        Motor_Both->setFont(font3);

        verticalLayout->addWidget(Motor_Both);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"color : rgb(255, 170, 127)\n"
"}"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy1.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(24);
        checkBox_3->setFont(font4);

        gridLayout_2->addWidget(checkBox_3, 2, 1, 1, 1);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy1.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy1);
        checkBox_2->setFont(font4);

        gridLayout_2->addWidget(checkBox_2, 2, 0, 1, 1);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(24);
        font5.setItalic(false);
        checkBox->setFont(font5);

        gridLayout_2->addWidget(checkBox, 2, 2, 1, 1);

        end_button = new QPushButton(centralWidget);
        end_button->setObjectName(QString::fromUtf8("end_button"));
        sizePolicy1.setHeightForWidth(end_button->sizePolicy().hasHeightForWidth());
        end_button->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setPointSize(28);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        end_button->setFont(font6);
        end_button->setStyleSheet(QString::fromUtf8("#end_button{\n"
"color : rgb(255, 0, 0)\n"
"}"));

        gridLayout_2->addWidget(end_button, 2, 3, 1, 1);

        sound_putton = new QPushButton(centralWidget);
        sound_putton->setObjectName(QString::fromUtf8("sound_putton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sound_putton->sizePolicy().hasHeightForWidth());
        sound_putton->setSizePolicy(sizePolicy2);
        QFont font7;
        font7.setPointSize(28);
        font7.setItalic(false);
        sound_putton->setFont(font7);

        gridLayout_2->addWidget(sound_putton, 1, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font8;
        font8.setPointSize(16);
        font8.setItalic(true);
        label_8->setFont(font8);

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);


        horizontalLayout->addLayout(verticalLayout_6);

        admin_ui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(admin_ui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 25));
        admin_ui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(admin_ui);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        admin_ui->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(admin_ui);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        admin_ui->setStatusBar(statusBar);

        retranslateUi(admin_ui);

        QMetaObject::connectSlotsByName(admin_ui);
    } // setupUi

    void retranslateUi(QMainWindow *admin_ui)
    {
        admin_ui->setWindowTitle(QApplication::translate("admin_ui", "admin_ui", 0, QApplication::UnicodeUTF8));
        psd_l->setText(QString());
        label_3->setText(QApplication::translate("admin_ui", "PSD_R", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("admin_ui", "PSD_M", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("admin_ui", "PSD_L", 0, QApplication::UnicodeUTF8));
        psd_r->setText(QString());
        psd_m->setText(QString());
        label_7->setText(QApplication::translate("admin_ui", "Motor Check", 0, QApplication::UnicodeUTF8));
        Motor_left->setText(QApplication::translate("admin_ui", "Motor  Left", 0, QApplication::UnicodeUTF8));
        Motor_Right->setText(QApplication::translate("admin_ui", "Motor Right", 0, QApplication::UnicodeUTF8));
        Motor_Both->setText(QApplication::translate("admin_ui", "Motor Both", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("admin_ui", "STOP", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("admin_ui", "Motor", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("admin_ui", "PSD", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("admin_ui", "Sound", 0, QApplication::UnicodeUTF8));
        end_button->setText(QApplication::translate("admin_ui", "END", 0, QApplication::UnicodeUTF8));
        sound_putton->setText(QApplication::translate("admin_ui", "Sound", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("admin_ui", "Speaker Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class admin_ui: public Ui_admin_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_UI_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QPushButton *pushButtonOdayiSil;
    QLabel *labelOdaAdi2;
    QPushButton *pushButtonOdaAdiDeigisim;
    QLineEdit *lineEditOdaAdiDegisim;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonYeniOdaEkle;
    QLineEdit *lineEditYeniOdaAdi;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonOdayaGit_2;
    QLabel *labelOdaAdi;
    QPushButton *pushButtonOdayaGit;
    QLabel *label;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(692, 421);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(692, 421));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(551, 161));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_3, 5, 0, 1, 1);

        pushButtonOdayiSil = new QPushButton(groupBox_3);
        pushButtonOdayiSil->setObjectName("pushButtonOdayiSil");
        pushButtonOdayiSil->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));
        pushButtonOdayiSil->setAutoDefault(true);

        gridLayout_3->addWidget(pushButtonOdayiSil, 6, 0, 1, 3);

        labelOdaAdi2 = new QLabel(groupBox_3);
        labelOdaAdi2->setObjectName("labelOdaAdi2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelOdaAdi2->sizePolicy().hasHeightForWidth());
        labelOdaAdi2->setSizePolicy(sizePolicy2);
        labelOdaAdi2->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_3->addWidget(labelOdaAdi2, 5, 1, 1, 1);

        pushButtonOdaAdiDeigisim = new QPushButton(groupBox_3);
        pushButtonOdaAdiDeigisim->setObjectName("pushButtonOdaAdiDeigisim");
        pushButtonOdaAdiDeigisim->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));
        pushButtonOdaAdiDeigisim->setAutoDefault(true);

        gridLayout_3->addWidget(pushButtonOdaAdiDeigisim, 3, 0, 1, 2);

        lineEditOdaAdiDegisim = new QLineEdit(groupBox_3);
        lineEditOdaAdiDegisim->setObjectName("lineEditOdaAdiDegisim");

        gridLayout_3->addWidget(lineEditOdaAdiDegisim, 2, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(271, 101));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonYeniOdaEkle = new QPushButton(groupBox_2);
        pushButtonYeniOdaEkle->setObjectName("pushButtonYeniOdaEkle");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonYeniOdaEkle->sizePolicy().hasHeightForWidth());
        pushButtonYeniOdaEkle->setSizePolicy(sizePolicy3);
        pushButtonYeniOdaEkle->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));
        pushButtonYeniOdaEkle->setAutoDefault(true);

        gridLayout_2->addWidget(pushButtonYeniOdaEkle, 1, 0, 1, 2);

        lineEditYeniOdaAdi = new QLineEdit(groupBox_2);
        lineEditYeniOdaAdi->setObjectName("lineEditYeniOdaAdi");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditYeniOdaAdi->sizePolicy().hasHeightForWidth());
        lineEditYeniOdaAdi->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(lineEditYeniOdaAdi, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(271, 101));
        groupBox->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        pushButtonOdayaGit_2 = new QPushButton(groupBox);
        pushButtonOdayaGit_2->setObjectName("pushButtonOdayaGit_2");
        sizePolicy3.setHeightForWidth(pushButtonOdayaGit_2->sizePolicy().hasHeightForWidth());
        pushButtonOdayaGit_2->setSizePolicy(sizePolicy3);
        pushButtonOdayaGit_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));
        pushButtonOdayaGit_2->setAutoDefault(true);

        gridLayout->addWidget(pushButtonOdayaGit_2, 2, 1, 1, 1);

        labelOdaAdi = new QLabel(groupBox);
        labelOdaAdi->setObjectName("labelOdaAdi");
        sizePolicy3.setHeightForWidth(labelOdaAdi->sizePolicy().hasHeightForWidth());
        labelOdaAdi->setSizePolicy(sizePolicy3);
        labelOdaAdi->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout->addWidget(labelOdaAdi, 0, 1, 1, 1);

        pushButtonOdayaGit = new QPushButton(groupBox);
        pushButtonOdayaGit->setObjectName("pushButtonOdayaGit");
        sizePolicy3.setHeightForWidth(pushButtonOdayaGit->sizePolicy().hasHeightForWidth());
        pushButtonOdayaGit->setSizePolicy(sizePolicy3);
        pushButtonOdayaGit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* Dodger Blue */\n"
"    border: 2px solid #1C86EE;  /* Steel Blue */\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* Light Sky Blue */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1C86EE;  /* Steel Blue */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));
        pushButtonOdayaGit->setAutoDefault(true);

        gridLayout->addWidget(pushButtonOdayaGit, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        sizePolicy3.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(spinBox, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 692, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEditYeniOdaAdi, pushButtonYeniOdaEkle);
        QWidget::setTabOrder(pushButtonYeniOdaEkle, spinBox);
        QWidget::setTabOrder(spinBox, pushButtonOdayaGit);
        QWidget::setTabOrder(pushButtonOdayaGit, pushButtonOdayaGit_2);
        QWidget::setTabOrder(pushButtonOdayaGit_2, pushButtonOdayiSil);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AKILLI EV S\304\260STEM\304\260 ODA MEN\303\234S\303\234", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "ODA S\304\260LME ve AD DE\304\236\304\260\305\236T\304\260RME", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ODA:", nullptr));
        pushButtonOdayiSil->setText(QCoreApplication::translate("MainWindow", "ODAYI S\304\260L", nullptr));
        labelOdaAdi2->setText(QString());
        pushButtonOdaAdiDeigisim->setText(QCoreApplication::translate("MainWindow", "ODANIN ADINI DE\304\236\304\260\305\236T\304\260R", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "YEN\304\260 ODA EKLEME", nullptr));
        pushButtonYeniOdaEkle->setText(QCoreApplication::translate("MainWindow", "ODA EKLE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ODA ADI G\304\260R:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ODAYA G\304\260T", nullptr));
        pushButtonOdayaGit_2->setText(QCoreApplication::translate("MainWindow", "D\304\260\304\236ER B\304\260LE\305\236ENLER", nullptr));
        labelOdaAdi->setText(QString());
        pushButtonOdayaGit->setText(QCoreApplication::translate("MainWindow", "PR\304\260ZLER VE LAMBALAR", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ODA ADI:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

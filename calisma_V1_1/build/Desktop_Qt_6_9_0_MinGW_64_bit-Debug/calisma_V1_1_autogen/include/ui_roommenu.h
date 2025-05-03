/********************************************************************************
** Form generated from reading UI file 'roommenu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMENU_H
#define UI_ROOMMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_roommenu
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QSpinBox *spinBoxPrizler;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonClose;
    QLabel *label;
    QLabel *labelPrizDurumu;
    QLineEdit *lineEditPrizAdi;
    QLabel *labelPriz;
    QCheckBox *checkBoxPriz;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditLampAdi;
    QLabel *labelLapAdi;
    QLabel *labelLampDurumu;
    QSlider *verticalSliderLamp;
    QDial *dialLamp;
    QSpinBox *spinBoxLambalar;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonOpenLamp;
    QPushButton *pushButtonCloseLamp;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QPushButton *pushButtonYeniPrizAdiOnay;
    QLabel *labelPriz_2;
    QLineEdit *lineEditYeniPrizAdi;
    QPushButton *pushButtonSilinecekPrizOnay;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *labelPriz_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_10;
    QPushButton *pushButtonLambaOnay;
    QLabel *labelLapAdi_2;
    QLabel *label_4;
    QPushButton *pushButtonYeniLambaAdiOnay;
    QLineEdit *lineEditYeniLambaAdi;
    QLabel *label_5;
    QLabel *labelLapAdi_3;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;
    QLabel *labelSecilenOdaAdi;

    void setupUi(QDialog *roommenu)
    {
        if (roommenu->objectName().isEmpty())
            roommenu->setObjectName("roommenu");
        roommenu->resize(867, 592);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(roommenu->sizePolicy().hasHeightForWidth());
        roommenu->setSizePolicy(sizePolicy);
        roommenu->setMinimumSize(QSize(867, 592));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        roommenu->setWindowIcon(icon);
        gridLayout = new QGridLayout(roommenu);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(roommenu);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName("gridLayout_9");
        spinBoxPrizler = new QSpinBox(groupBox);
        spinBoxPrizler->setObjectName("spinBoxPrizler");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxPrizler->sizePolicy().hasHeightForWidth());
        spinBoxPrizler->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(spinBoxPrizler, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        pushButtonOpen = new QPushButton(groupBox);
        pushButtonOpen->setObjectName("pushButtonOpen");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonOpen->sizePolicy().hasHeightForWidth());
        pushButtonOpen->setSizePolicy(sizePolicy2);
        pushButtonOpen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonOpen->setAutoDefault(true);

        horizontalLayout->addWidget(pushButtonOpen);

        pushButtonClose = new QPushButton(groupBox);
        pushButtonClose->setObjectName("pushButtonClose");
        sizePolicy2.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy2);
        pushButtonClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonClose->setAutoDefault(true);

        horizontalLayout->addWidget(pushButtonClose);


        gridLayout_9->addLayout(horizontalLayout, 3, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_9->addWidget(label, 0, 0, 1, 2);

        labelPrizDurumu = new QLabel(groupBox);
        labelPrizDurumu->setObjectName("labelPrizDurumu");
        sizePolicy2.setHeightForWidth(labelPrizDurumu->sizePolicy().hasHeightForWidth());
        labelPrizDurumu->setSizePolicy(sizePolicy2);
        labelPrizDurumu->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: #FF6347;"));

        gridLayout_9->addWidget(labelPrizDurumu, 1, 2, 1, 1);

        lineEditPrizAdi = new QLineEdit(groupBox);
        lineEditPrizAdi->setObjectName("lineEditPrizAdi");

        gridLayout_9->addWidget(lineEditPrizAdi, 0, 2, 1, 1);

        labelPriz = new QLabel(groupBox);
        labelPriz->setObjectName("labelPriz");
        labelPriz->setEnabled(true);
        sizePolicy2.setHeightForWidth(labelPriz->sizePolicy().hasHeightForWidth());
        labelPriz->setSizePolicy(sizePolicy2);
        labelPriz->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_9->addWidget(labelPriz, 1, 0, 1, 1);

        checkBoxPriz = new QCheckBox(groupBox);
        checkBoxPriz->setObjectName("checkBoxPriz");
        checkBoxPriz->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: #FF6347;"));

        gridLayout_9->addWidget(checkBoxPriz, 2, 0, 1, 3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(roommenu);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditLampAdi = new QLineEdit(groupBox_2);
        lineEditLampAdi->setObjectName("lineEditLampAdi");

        gridLayout_2->addWidget(lineEditLampAdi, 0, 1, 1, 1);

        labelLapAdi = new QLabel(groupBox_2);
        labelLapAdi->setObjectName("labelLapAdi");
        sizePolicy2.setHeightForWidth(labelLapAdi->sizePolicy().hasHeightForWidth());
        labelLapAdi->setSizePolicy(sizePolicy2);
        labelLapAdi->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_2->addWidget(labelLapAdi, 1, 0, 1, 1);

        labelLampDurumu = new QLabel(groupBox_2);
        labelLampDurumu->setObjectName("labelLampDurumu");
        sizePolicy2.setHeightForWidth(labelLampDurumu->sizePolicy().hasHeightForWidth());
        labelLampDurumu->setSizePolicy(sizePolicy2);
        labelLampDurumu->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: #FF6347;"));

        gridLayout_2->addWidget(labelLampDurumu, 1, 1, 1, 1);

        verticalSliderLamp = new QSlider(groupBox_2);
        verticalSliderLamp->setObjectName("verticalSliderLamp");
        sizePolicy.setHeightForWidth(verticalSliderLamp->sizePolicy().hasHeightForWidth());
        verticalSliderLamp->setSizePolicy(sizePolicy);
        verticalSliderLamp->setOrientation(Qt::Orientation::Vertical);

        gridLayout_2->addWidget(verticalSliderLamp, 2, 0, 1, 1);

        dialLamp = new QDial(groupBox_2);
        dialLamp->setObjectName("dialLamp");
        sizePolicy.setHeightForWidth(dialLamp->sizePolicy().hasHeightForWidth());
        dialLamp->setSizePolicy(sizePolicy);
        dialLamp->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(dialLamp, 2, 1, 1, 1);

        spinBoxLambalar = new QSpinBox(groupBox_2);
        spinBoxLambalar->setObjectName("spinBoxLambalar");
        sizePolicy2.setHeightForWidth(spinBoxLambalar->sizePolicy().hasHeightForWidth());
        spinBoxLambalar->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(spinBoxLambalar, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonOpenLamp = new QPushButton(groupBox_2);
        pushButtonOpenLamp->setObjectName("pushButtonOpenLamp");
        sizePolicy2.setHeightForWidth(pushButtonOpenLamp->sizePolicy().hasHeightForWidth());
        pushButtonOpenLamp->setSizePolicy(sizePolicy2);
        pushButtonOpenLamp->setMinimumSize(QSize(100, 10));
        pushButtonOpenLamp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonOpenLamp->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButtonOpenLamp);

        pushButtonCloseLamp = new QPushButton(groupBox_2);
        pushButtonCloseLamp->setObjectName("pushButtonCloseLamp");
        sizePolicy2.setHeightForWidth(pushButtonCloseLamp->sizePolicy().hasHeightForWidth());
        pushButtonCloseLamp->setSizePolicy(sizePolicy2);
        pushButtonCloseLamp->setMinimumSize(QSize(100, 0));
        pushButtonCloseLamp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonCloseLamp->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButtonCloseLamp);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 2);

        groupBox_3 = new QGroupBox(roommenu);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setObjectName("gridLayout_12");
        pushButtonYeniPrizAdiOnay = new QPushButton(groupBox_3);
        pushButtonYeniPrizAdiOnay->setObjectName("pushButtonYeniPrizAdiOnay");
        sizePolicy2.setHeightForWidth(pushButtonYeniPrizAdiOnay->sizePolicy().hasHeightForWidth());
        pushButtonYeniPrizAdiOnay->setSizePolicy(sizePolicy2);
        pushButtonYeniPrizAdiOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonYeniPrizAdiOnay->setAutoDefault(true);

        gridLayout_12->addWidget(pushButtonYeniPrizAdiOnay, 3, 1, 1, 1);

        labelPriz_2 = new QLabel(groupBox_3);
        labelPriz_2->setObjectName("labelPriz_2");
        labelPriz_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(labelPriz_2->sizePolicy().hasHeightForWidth());
        labelPriz_2->setSizePolicy(sizePolicy2);
        labelPriz_2->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_12->addWidget(labelPriz_2, 5, 1, 1, 1);

        lineEditYeniPrizAdi = new QLineEdit(groupBox_3);
        lineEditYeniPrizAdi->setObjectName("lineEditYeniPrizAdi");
        sizePolicy2.setHeightForWidth(lineEditYeniPrizAdi->sizePolicy().hasHeightForWidth());
        lineEditYeniPrizAdi->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(lineEditYeniPrizAdi, 2, 1, 1, 1);

        pushButtonSilinecekPrizOnay = new QPushButton(groupBox_3);
        pushButtonSilinecekPrizOnay->setObjectName("pushButtonSilinecekPrizOnay");
        sizePolicy2.setHeightForWidth(pushButtonSilinecekPrizOnay->sizePolicy().hasHeightForWidth());
        pushButtonSilinecekPrizOnay->setSizePolicy(sizePolicy2);
        pushButtonSilinecekPrizOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonSilinecekPrizOnay->setAutoDefault(true);

        gridLayout_12->addWidget(pushButtonSilinecekPrizOnay, 7, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(label_3, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(label_6, 1, 1, 1, 1);

        labelPriz_3 = new QLabel(groupBox_3);
        labelPriz_3->setObjectName("labelPriz_3");
        labelPriz_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(labelPriz_3->sizePolicy().hasHeightForWidth());
        labelPriz_3->setSizePolicy(sizePolicy1);
        labelPriz_3->setMinimumSize(QSize(0, 0));
        labelPriz_3->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_12->addWidget(labelPriz_3, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(roommenu);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_10 = new QGridLayout(groupBox_4);
        gridLayout_10->setObjectName("gridLayout_10");
        pushButtonLambaOnay = new QPushButton(groupBox_4);
        pushButtonLambaOnay->setObjectName("pushButtonLambaOnay");
        sizePolicy2.setHeightForWidth(pushButtonLambaOnay->sizePolicy().hasHeightForWidth());
        pushButtonLambaOnay->setSizePolicy(sizePolicy2);
        pushButtonLambaOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonLambaOnay->setAutoDefault(true);

        gridLayout_10->addWidget(pushButtonLambaOnay, 6, 1, 1, 1);

        labelLapAdi_2 = new QLabel(groupBox_4);
        labelLapAdi_2->setObjectName("labelLapAdi_2");
        labelLapAdi_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(labelLapAdi_2->sizePolicy().hasHeightForWidth());
        labelLapAdi_2->setSizePolicy(sizePolicy2);
        labelLapAdi_2->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_10->addWidget(labelLapAdi_2, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_10->addWidget(label_4, 4, 1, 1, 1);

        pushButtonYeniLambaAdiOnay = new QPushButton(groupBox_4);
        pushButtonYeniLambaAdiOnay->setObjectName("pushButtonYeniLambaAdiOnay");
        sizePolicy2.setHeightForWidth(pushButtonYeniLambaAdiOnay->sizePolicy().hasHeightForWidth());
        pushButtonYeniLambaAdiOnay->setSizePolicy(sizePolicy2);
        pushButtonYeniLambaAdiOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;  /* Tomato */\n"
"    border: 2px solid #CD5C5C;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CD5C5C;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));
        pushButtonYeniLambaAdiOnay->setAutoDefault(true);

        gridLayout_10->addWidget(pushButtonYeniLambaAdiOnay, 3, 1, 1, 1);

        lineEditYeniLambaAdi = new QLineEdit(groupBox_4);
        lineEditYeniLambaAdi->setObjectName("lineEditYeniLambaAdi");
        sizePolicy2.setHeightForWidth(lineEditYeniLambaAdi->sizePolicy().hasHeightForWidth());
        lineEditYeniLambaAdi->setSizePolicy(sizePolicy2);

        gridLayout_10->addWidget(lineEditYeniLambaAdi, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_10->addWidget(label_5, 1, 1, 1, 1);

        labelLapAdi_3 = new QLabel(groupBox_4);
        labelLapAdi_3->setObjectName("labelLapAdi_3");
        sizePolicy1.setHeightForWidth(labelLapAdi_3->sizePolicy().hasHeightForWidth());
        labelLapAdi_3->setSizePolicy(sizePolicy1);
        labelLapAdi_3->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_10->addWidget(labelLapAdi_3, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 2);

        pushButtonOk = new QPushButton(roommenu);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aaff00;  /* Tomato */\n"
"    border: 2px solid #000000;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: #000000;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ffff00;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ffaa00;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonOk, 2, 1, 1, 1);

        pushButtonCancel = new QPushButton(roommenu);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aaff00;  /* Tomato */\n"
"    border: 2px solid #000000;  /* Indian Red */\n"
"    border-radius: 10px;\n"
"    padding: 3px;\n"
"    color: #000000;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ffff00;  /* Coral */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ffaa00;  /* Indian Red */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonCancel, 2, 2, 1, 1);

        labelSecilenOdaAdi = new QLabel(roommenu);
        labelSecilenOdaAdi->setObjectName("labelSecilenOdaAdi");
        sizePolicy3.setHeightForWidth(labelSecilenOdaAdi->sizePolicy().hasHeightForWidth());
        labelSecilenOdaAdi->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelSecilenOdaAdi, 2, 0, 1, 1);

        QWidget::setTabOrder(pushButtonOk, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, lineEditPrizAdi);
        QWidget::setTabOrder(lineEditPrizAdi, checkBoxPriz);
        QWidget::setTabOrder(checkBoxPriz, spinBoxPrizler);
        QWidget::setTabOrder(spinBoxPrizler, pushButtonOpen);
        QWidget::setTabOrder(pushButtonOpen, pushButtonClose);
        QWidget::setTabOrder(pushButtonClose, lineEditLampAdi);
        QWidget::setTabOrder(lineEditLampAdi, spinBoxLambalar);
        QWidget::setTabOrder(spinBoxLambalar, pushButtonOpenLamp);
        QWidget::setTabOrder(pushButtonOpenLamp, pushButtonCloseLamp);
        QWidget::setTabOrder(pushButtonCloseLamp, lineEditYeniPrizAdi);
        QWidget::setTabOrder(lineEditYeniPrizAdi, pushButtonYeniPrizAdiOnay);
        QWidget::setTabOrder(pushButtonYeniPrizAdiOnay, pushButtonSilinecekPrizOnay);
        QWidget::setTabOrder(pushButtonSilinecekPrizOnay, lineEditYeniLambaAdi);
        QWidget::setTabOrder(lineEditYeniLambaAdi, pushButtonYeniLambaAdiOnay);
        QWidget::setTabOrder(pushButtonYeniLambaAdiOnay, pushButtonLambaOnay);

        retranslateUi(roommenu);
        QObject::connect(verticalSliderLamp, &QSlider::valueChanged, dialLamp, &QDial::setValue);
        QObject::connect(dialLamp, &QDial::valueChanged, verticalSliderLamp, &QSlider::setValue);

        pushButtonOpen->setDefault(false);
        pushButtonClose->setDefault(false);
        pushButtonOpenLamp->setDefault(false);


        QMetaObject::connectSlotsByName(roommenu);
    } // setupUi

    void retranslateUi(QDialog *roommenu)
    {
        roommenu->setWindowTitle(QCoreApplication::translate("roommenu", "PR\304\260ZLER VE LAMBALAR MEN\303\234S\303\234", nullptr));
        groupBox->setTitle(QCoreApplication::translate("roommenu", "PR\304\260Z OLU\305\236TURMA ve KONTROL", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("roommenu", "OPEN", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("roommenu", "CLOSE", nullptr));
        label->setText(QCoreApplication::translate("roommenu", "PR\304\260Z ADINI G\304\260R\304\260N\304\260Z: ", nullptr));
        labelPrizDurumu->setText(QString());
        labelPriz->setText(QString());
        checkBoxPriz->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("roommenu", "LAMBA OLU\305\236TURMA ve KONTROL", nullptr));
        label_2->setText(QCoreApplication::translate("roommenu", "LAMBANIN AD\304\260NI G\304\260R\304\260N\304\260Z:", nullptr));
        labelLapAdi->setText(QString());
        labelLampDurumu->setText(QString());
        pushButtonOpenLamp->setText(QCoreApplication::translate("roommenu", "OPEN", nullptr));
        pushButtonCloseLamp->setText(QCoreApplication::translate("roommenu", "CLOSE", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("roommenu", "PR\304\260Z ADI DE\304\236\304\260\305\236T\304\260RME ve PR\304\260Z S\304\260LME", nullptr));
        pushButtonYeniPrizAdiOnay->setText(QCoreApplication::translate("roommenu", "ONAYLA", nullptr));
        labelPriz_2->setText(QString());
        pushButtonSilinecekPrizOnay->setText(QCoreApplication::translate("roommenu", "ONAYLA", nullptr));
        label_3->setText(QCoreApplication::translate("roommenu", "S\304\260L\304\260NECEK PR\304\260Z:", nullptr));
        label_6->setText(QCoreApplication::translate("roommenu", "YEN\304\260 PR\304\260Z ADI:", nullptr));
        labelPriz_3->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("roommenu", "LAMBA ADI DE\304\236\304\260\305\236T\304\260RME ve LAMBA S\304\260LME", nullptr));
        pushButtonLambaOnay->setText(QCoreApplication::translate("roommenu", "ONAYLA", nullptr));
        labelLapAdi_2->setText(QString());
        label_4->setText(QCoreApplication::translate("roommenu", "S\304\260L\304\260NECEK LAMBA:", nullptr));
        pushButtonYeniLambaAdiOnay->setText(QCoreApplication::translate("roommenu", "ONAYLA", nullptr));
        label_5->setText(QCoreApplication::translate("roommenu", "YEN\304\260 LAMBA ADI:", nullptr));
        labelLapAdi_3->setText(QString());
        pushButtonOk->setText(QCoreApplication::translate("roommenu", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("roommenu", "CANCEL", nullptr));
        labelSecilenOdaAdi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class roommenu: public Ui_roommenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMENU_H

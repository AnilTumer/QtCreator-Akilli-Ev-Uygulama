/********************************************************************************
** Form generated from reading UI file 'roommenu2.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMENU2_H
#define UI_ROOMMENU2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_roommenu2
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEditSaksiAdi;
    QLabel *labelSaksi;
    QLabel *label;
    QDial *dial;
    QSpinBox *spinBoxSaksilar;
    QLabel *labelSaksiDurumu;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *labelYanginDurum;
    QLabel *labelSuBaskiniDurum;
    QLabel *labelHirsizDurum;
    QCheckBox *checkBoxYangin;
    QCheckBox *checkBoxSuBaskini;
    QCheckBox *checkBoxHirsiz;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonKlimaClose;
    QPushButton *pushButtonKlimaOpen;
    QLabel *label_4;
    QDial *dialKlima;
    QSlider *verticalSliderKlima;
    QLabel *label_5;
    QLCDNumber *lcdNumberSicaklik;
    QLCDNumber *lcdNumberNem;
    QLabel *label_6;
    QLabel *labelKlimaDeger;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *labelSaksi_2;
    QLabel *label_2;
    QLineEdit *lineEditYeniSaksiAdi;
    QPushButton *pushButtonYeniSaksiAdiOnay;
    QLabel *label_3;
    QLabel *labelSaksi_3;
    QPushButton *pushButtonSilinecekSaksiOnay;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *labelPerdeAdi;
    QLabel *labelPerdeDurumu;
    QSlider *horizontalSliderPerde;
    QPushButton *pushButtonPerdeOpen;
    QPushButton *pushButtonPerdeClose;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;
    QLabel *labelSecilenOdaAdi;

    void setupUi(QDialog *roommenu2)
    {
        if (roommenu2->objectName().isEmpty())
            roommenu2->setObjectName("roommenu2");
        roommenu2->resize(667, 738);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::NetworkWireless));
        roommenu2->setWindowIcon(icon);
        gridLayout_6 = new QGridLayout(roommenu2);
        gridLayout_6->setObjectName("gridLayout_6");
        groupBox = new QGroupBox(roommenu2);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEditSaksiAdi = new QLineEdit(groupBox);
        lineEditSaksiAdi->setObjectName("lineEditSaksiAdi");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditSaksiAdi->sizePolicy().hasHeightForWidth());
        lineEditSaksiAdi->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEditSaksiAdi, 0, 1, 1, 3);

        labelSaksi = new QLabel(groupBox);
        labelSaksi->setObjectName("labelSaksi");
        sizePolicy1.setHeightForWidth(labelSaksi->sizePolicy().hasHeightForWidth());
        labelSaksi->setSizePolicy(sizePolicy1);
        labelSaksi->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout->addWidget(labelSaksi, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dial = new QDial(groupBox);
        dial->setObjectName("dial");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dial->sizePolicy().hasHeightForWidth());
        dial->setSizePolicy(sizePolicy2);
        dial->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(dial, 2, 3, 1, 1);

        spinBoxSaksilar = new QSpinBox(groupBox);
        spinBoxSaksilar->setObjectName("spinBoxSaksilar");
        sizePolicy1.setHeightForWidth(spinBoxSaksilar->sizePolicy().hasHeightForWidth());
        spinBoxSaksilar->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spinBoxSaksilar, 3, 0, 1, 4);

        labelSaksiDurumu = new QLabel(groupBox);
        labelSaksiDurumu->setObjectName("labelSaksiDurumu");
        sizePolicy1.setHeightForWidth(labelSaksiDurumu->sizePolicy().hasHeightForWidth());
        labelSaksiDurumu->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelSaksiDurumu, 1, 2, 1, 1);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 2, 0, 1, 2);


        gridLayout_6->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_3 = new QGroupBox(roommenu2);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        labelYanginDurum = new QLabel(groupBox_3);
        labelYanginDurum->setObjectName("labelYanginDurum");
        sizePolicy1.setHeightForWidth(labelYanginDurum->sizePolicy().hasHeightForWidth());
        labelYanginDurum->setSizePolicy(sizePolicy1);
        labelYanginDurum->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_3->addWidget(labelYanginDurum, 0, 0, 1, 3);

        labelSuBaskiniDurum = new QLabel(groupBox_3);
        labelSuBaskiniDurum->setObjectName("labelSuBaskiniDurum");
        sizePolicy1.setHeightForWidth(labelSuBaskiniDurum->sizePolicy().hasHeightForWidth());
        labelSuBaskiniDurum->setSizePolicy(sizePolicy1);
        labelSuBaskiniDurum->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_3->addWidget(labelSuBaskiniDurum, 1, 0, 1, 3);

        labelHirsizDurum = new QLabel(groupBox_3);
        labelHirsizDurum->setObjectName("labelHirsizDurum");
        sizePolicy1.setHeightForWidth(labelHirsizDurum->sizePolicy().hasHeightForWidth());
        labelHirsizDurum->setSizePolicy(sizePolicy1);
        labelHirsizDurum->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_3->addWidget(labelHirsizDurum, 2, 0, 1, 3);

        checkBoxYangin = new QCheckBox(groupBox_3);
        checkBoxYangin->setObjectName("checkBoxYangin");
        sizePolicy1.setHeightForWidth(checkBoxYangin->sizePolicy().hasHeightForWidth());
        checkBoxYangin->setSizePolicy(sizePolicy1);
        checkBoxYangin->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_3->addWidget(checkBoxYangin, 3, 0, 1, 1);

        checkBoxSuBaskini = new QCheckBox(groupBox_3);
        checkBoxSuBaskini->setObjectName("checkBoxSuBaskini");
        sizePolicy1.setHeightForWidth(checkBoxSuBaskini->sizePolicy().hasHeightForWidth());
        checkBoxSuBaskini->setSizePolicy(sizePolicy1);
        checkBoxSuBaskini->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_3->addWidget(checkBoxSuBaskini, 3, 1, 1, 1);

        checkBoxHirsiz = new QCheckBox(groupBox_3);
        checkBoxHirsiz->setObjectName("checkBoxHirsiz");
        sizePolicy1.setHeightForWidth(checkBoxHirsiz->sizePolicy().hasHeightForWidth());
        checkBoxHirsiz->setSizePolicy(sizePolicy1);
        checkBoxHirsiz->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_3->addWidget(checkBoxHirsiz, 3, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 1, 1, 2);

        groupBox_4 = new QGroupBox(roommenu2);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButtonKlimaClose = new QPushButton(groupBox_4);
        pushButtonKlimaClose->setObjectName("pushButtonKlimaClose");
        sizePolicy1.setHeightForWidth(pushButtonKlimaClose->sizePolicy().hasHeightForWidth());
        pushButtonKlimaClose->setSizePolicy(sizePolicy1);
        pushButtonKlimaClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_4->addWidget(pushButtonKlimaClose, 4, 2, 1, 2);

        pushButtonKlimaOpen = new QPushButton(groupBox_4);
        pushButtonKlimaOpen->setObjectName("pushButtonKlimaOpen");
        sizePolicy1.setHeightForWidth(pushButtonKlimaOpen->sizePolicy().hasHeightForWidth());
        pushButtonKlimaOpen->setSizePolicy(sizePolicy1);
        pushButtonKlimaOpen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_4->addWidget(pushButtonKlimaOpen, 4, 0, 1, 2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        dialKlima = new QDial(groupBox_4);
        dialKlima->setObjectName("dialKlima");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dialKlima->sizePolicy().hasHeightForWidth());
        dialKlima->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(dialKlima, 3, 2, 1, 2);

        verticalSliderKlima = new QSlider(groupBox_4);
        verticalSliderKlima->setObjectName("verticalSliderKlima");
        sizePolicy.setHeightForWidth(verticalSliderKlima->sizePolicy().hasHeightForWidth());
        verticalSliderKlima->setSizePolicy(sizePolicy);
        verticalSliderKlima->setOrientation(Qt::Orientation::Vertical);

        gridLayout_4->addWidget(verticalSliderKlima, 3, 0, 1, 2);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_4->addWidget(label_5, 0, 2, 1, 1);

        lcdNumberSicaklik = new QLCDNumber(groupBox_4);
        lcdNumberSicaklik->setObjectName("lcdNumberSicaklik");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lcdNumberSicaklik->sizePolicy().hasHeightForWidth());
        lcdNumberSicaklik->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(lcdNumberSicaklik, 0, 1, 1, 1);

        lcdNumberNem = new QLCDNumber(groupBox_4);
        lcdNumberNem->setObjectName("lcdNumberNem");
        sizePolicy4.setHeightForWidth(lcdNumberNem->sizePolicy().hasHeightForWidth());
        lcdNumberNem->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(lcdNumberNem, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 4);

        labelKlimaDeger = new QLabel(groupBox_4);
        labelKlimaDeger->setObjectName("labelKlimaDeger");
        sizePolicy1.setHeightForWidth(labelKlimaDeger->sizePolicy().hasHeightForWidth());
        labelKlimaDeger->setSizePolicy(sizePolicy1);
        labelKlimaDeger->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelKlimaDeger, 2, 0, 1, 4);


        gridLayout_6->addWidget(groupBox_4, 1, 1, 2, 2);

        groupBox_2 = new QGroupBox(roommenu2);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSaksi_2 = new QLabel(groupBox_2);
        labelSaksi_2->setObjectName("labelSaksi_2");
        sizePolicy1.setHeightForWidth(labelSaksi_2->sizePolicy().hasHeightForWidth());
        labelSaksi_2->setSizePolicy(sizePolicy1);
        labelSaksi_2->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_2->addWidget(labelSaksi_2, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditYeniSaksiAdi = new QLineEdit(groupBox_2);
        lineEditYeniSaksiAdi->setObjectName("lineEditYeniSaksiAdi");
        sizePolicy1.setHeightForWidth(lineEditYeniSaksiAdi->sizePolicy().hasHeightForWidth());
        lineEditYeniSaksiAdi->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEditYeniSaksiAdi, 2, 0, 1, 1);

        pushButtonYeniSaksiAdiOnay = new QPushButton(groupBox_2);
        pushButtonYeniSaksiAdiOnay->setObjectName("pushButtonYeniSaksiAdiOnay");
        sizePolicy1.setHeightForWidth(pushButtonYeniSaksiAdiOnay->sizePolicy().hasHeightForWidth());
        pushButtonYeniSaksiAdiOnay->setSizePolicy(sizePolicy1);
        pushButtonYeniSaksiAdiOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButtonYeniSaksiAdiOnay, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("    padding: 2px;\n"
"    color: #32CD32;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        labelSaksi_3 = new QLabel(groupBox_2);
        labelSaksi_3->setObjectName("labelSaksi_3");
        sizePolicy1.setHeightForWidth(labelSaksi_3->sizePolicy().hasHeightForWidth());
        labelSaksi_3->setSizePolicy(sizePolicy1);
        labelSaksi_3->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_2->addWidget(labelSaksi_3, 5, 0, 1, 1);

        pushButtonSilinecekSaksiOnay = new QPushButton(groupBox_2);
        pushButtonSilinecekSaksiOnay->setObjectName("pushButtonSilinecekSaksiOnay");
        sizePolicy1.setHeightForWidth(pushButtonSilinecekSaksiOnay->sizePolicy().hasHeightForWidth());
        pushButtonSilinecekSaksiOnay->setSizePolicy(sizePolicy1);
        pushButtonSilinecekSaksiOnay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButtonSilinecekSaksiOnay, 6, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 2, 0, 2, 1);

        groupBox_5 = new QGroupBox(roommenu2);
        groupBox_5->setObjectName("groupBox_5");
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
""));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName("gridLayout_5");
        labelPerdeAdi = new QLabel(groupBox_5);
        labelPerdeAdi->setObjectName("labelPerdeAdi");
        sizePolicy1.setHeightForWidth(labelPerdeAdi->sizePolicy().hasHeightForWidth());
        labelPerdeAdi->setSizePolicy(sizePolicy1);
        labelPerdeAdi->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));

        gridLayout_5->addWidget(labelPerdeAdi, 0, 0, 1, 2);

        labelPerdeDurumu = new QLabel(groupBox_5);
        labelPerdeDurumu->setObjectName("labelPerdeDurumu");
        sizePolicy1.setHeightForWidth(labelPerdeDurumu->sizePolicy().hasHeightForWidth());
        labelPerdeDurumu->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(labelPerdeDurumu, 1, 0, 1, 2);

        horizontalSliderPerde = new QSlider(groupBox_5);
        horizontalSliderPerde->setObjectName("horizontalSliderPerde");
        sizePolicy1.setHeightForWidth(horizontalSliderPerde->sizePolicy().hasHeightForWidth());
        horizontalSliderPerde->setSizePolicy(sizePolicy1);
        horizontalSliderPerde->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_5->addWidget(horizontalSliderPerde, 2, 0, 1, 2);

        pushButtonPerdeOpen = new QPushButton(groupBox_5);
        pushButtonPerdeOpen->setObjectName("pushButtonPerdeOpen");
        sizePolicy1.setHeightForWidth(pushButtonPerdeOpen->sizePolicy().hasHeightForWidth());
        pushButtonPerdeOpen->setSizePolicy(sizePolicy1);
        pushButtonPerdeOpen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_5->addWidget(pushButtonPerdeOpen, 3, 0, 1, 1);

        pushButtonPerdeClose = new QPushButton(groupBox_5);
        pushButtonPerdeClose->setObjectName("pushButtonPerdeClose");
        sizePolicy1.setHeightForWidth(pushButtonPerdeClose->sizePolicy().hasHeightForWidth());
        pushButtonPerdeClose->setSizePolicy(sizePolicy1);
        pushButtonPerdeClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;  /* Lime Green */\n"
"    border: 2px solid #228B22;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66CDAA;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #228B22;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_5->addWidget(pushButtonPerdeClose, 3, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_5, 3, 1, 1, 2);

        pushButtonOk = new QPushButton(roommenu2);
        pushButtonOk->setObjectName("pushButtonOk");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonOk->sizePolicy().hasHeightForWidth());
        pushButtonOk->setSizePolicy(sizePolicy5);
        pushButtonOk->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff00ff;  /* Lime Green */\n"
"    border: 2px solid #550000;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #aa00ff;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #aa007f;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_6->addWidget(pushButtonOk, 4, 1, 1, 1);

        pushButtonCancel = new QPushButton(roommenu2);
        pushButtonCancel->setObjectName("pushButtonCancel");
        sizePolicy5.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy5);
        pushButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff00ff;  /* Lime Green */\n"
"    border: 2px solid #550000;  /* Forest Green */\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #aa00ff;  /* Medium Aquamarine */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #aa007f;  /* Forest Green */\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"}"));

        gridLayout_6->addWidget(pushButtonCancel, 4, 2, 1, 1);

        labelSecilenOdaAdi = new QLabel(roommenu2);
        labelSecilenOdaAdi->setObjectName("labelSecilenOdaAdi");
        sizePolicy1.setHeightForWidth(labelSecilenOdaAdi->sizePolicy().hasHeightForWidth());
        labelSecilenOdaAdi->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(labelSecilenOdaAdi, 4, 0, 1, 1);


        retranslateUi(roommenu2);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, dial, &QDial::setValue);
        QObject::connect(dial, &QDial::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(verticalSliderKlima, &QSlider::valueChanged, dialKlima, &QDial::setValue);
        QObject::connect(dialKlima, &QDial::valueChanged, verticalSliderKlima, &QSlider::setValue);

        QMetaObject::connectSlotsByName(roommenu2);
    } // setupUi

    void retranslateUi(QDialog *roommenu2)
    {
        roommenu2->setWindowTitle(QCoreApplication::translate("roommenu2", "D\304\260\304\236ER B\304\260LE\305\236ENLER MEN\303\234S\303\234", nullptr));
        groupBox->setTitle(QCoreApplication::translate("roommenu2", "SAKSI OLU\305\236TUR ve KONTROL ET", nullptr));
        labelSaksi->setText(QString());
        label->setText(QCoreApplication::translate("roommenu2", "SAKSI ADINI G\304\260R\304\260N:", nullptr));
        labelSaksiDurumu->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("roommenu2", "G\303\234VENL\304\260K", nullptr));
        labelYanginDurum->setText(QString());
        labelSuBaskiniDurum->setText(QString());
        labelHirsizDurum->setText(QString());
        checkBoxYangin->setText(QCoreApplication::translate("roommenu2", "YANGIN", nullptr));
        checkBoxSuBaskini->setText(QCoreApplication::translate("roommenu2", "SU BASKINI", nullptr));
        checkBoxHirsiz->setText(QCoreApplication::translate("roommenu2", "HIRSIZ", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("roommenu2", "SICAKLIK ve NEM KONTROL", nullptr));
        pushButtonKlimaClose->setText(QCoreApplication::translate("roommenu2", "CLOSE", nullptr));
        pushButtonKlimaOpen->setText(QCoreApplication::translate("roommenu2", "OPEN", nullptr));
        label_4->setText(QCoreApplication::translate("roommenu2", "SICAKLIK:", nullptr));
        label_5->setText(QCoreApplication::translate("roommenu2", "NEM:", nullptr));
        label_6->setText(QCoreApplication::translate("roommenu2", "KL\304\260MA", nullptr));
        labelKlimaDeger->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("roommenu2", "SAKSI ADI DE\304\236\304\260\305\236T\304\260RME ve SAKSI S\304\260LME", nullptr));
        labelSaksi_2->setText(QString());
        label_2->setText(QCoreApplication::translate("roommenu2", "YEN\304\260 SAKSI ADI:", nullptr));
        pushButtonYeniSaksiAdiOnay->setText(QCoreApplication::translate("roommenu2", "ONAYLA", nullptr));
        label_3->setText(QCoreApplication::translate("roommenu2", "S\304\260L\304\260NECEK SAKSI ADI:", nullptr));
        labelSaksi_3->setText(QString());
        pushButtonSilinecekSaksiOnay->setText(QCoreApplication::translate("roommenu2", "ONAYLA", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("roommenu2", "PERDE KONTROL", nullptr));
        labelPerdeAdi->setText(QString());
        labelPerdeDurumu->setText(QString());
        pushButtonPerdeOpen->setText(QCoreApplication::translate("roommenu2", "OPEN", nullptr));
        pushButtonPerdeClose->setText(QCoreApplication::translate("roommenu2", "CLOSE", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("roommenu2", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("roommenu2", "CANCEL", nullptr));
        labelSecilenOdaAdi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class roommenu2: public Ui_roommenu2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMENU2_H

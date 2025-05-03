#include "roommenu.h"
#include "ui_roommenu.h"
#include "mainwindow.h"
#include "rooms.h"


roommenu::roommenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::roommenu)
{
    ui->setupUi(this);
    ui->verticalSliderLamp->setTickPosition(QSlider::TicksBothSides);
    ui->verticalSliderLamp->setMaximum(100);
    ui->verticalSliderLamp->setMinimum(0);
    ui->verticalSliderLamp->setTickInterval(10);
    ui->verticalSliderLamp->setSingleStep(1);
    ui->spinBoxPrizler->setRange(0, 10);
    ui->spinBoxPrizler->setSingleStep(1);
    ui->spinBoxLambalar->setRange(0, 10);
    ui->spinBoxLambalar->setSingleStep(1);
    MainWindow* parentDialog = dynamic_cast<MainWindow*> (parent);
    pDialog = parentDialog;
    QString qSecilenOdaAdi = parentDialog->getSecilenOdaAdi();
    ui->labelSecilenOdaAdi->setText(qSecilenOdaAdi);
    map<int,rooms> odalarim = pDialog->getMapOdalar();
    string secilenOda = qSecilenOdaAdi.toStdString();
    rooms r;
    for (const auto& oda : odalarim){
        if(secilenOda == oda.second.getOdaAdi()){
            r = oda.second;
        }
    }
    setOdam(r);
}

roommenu::~roommenu()
{
    delete ui;
}

rooms roommenu::getOdam() const
{
    return odam;
}

void roommenu::setOdam(const rooms &newOdam)
{
    odam = newOdam;
}

void roommenu::on_pushButtonOk_clicked()
{
    QString qSecilenOdaAdi = pDialog->getSecilenOdaAdi();
    map<int,rooms> odalarim = pDialog->getMapOdalar();
    string secilenOda = qSecilenOdaAdi.toStdString();
    for (const auto& oda : odalarim){
        if(secilenOda == oda.second.getOdaAdi()){
            odalarim[oda.first] = getOdam();
        }
    }
    pDialog->setMapOdalar(odalarim);
    accept();
}


void roommenu::on_pushButtonCancel_clicked()
{
    reject();
}

//PRİZ
void roommenu::on_lineEditPrizAdi_textEdited(const QString &arg1)
{
    QString isim = ui->lineEditPrizAdi->text();
    ui->labelPriz->setText(isim);
    ui->labelPriz_2->setText(isim);
    ui->labelPriz_3->setText(isim);
    ui->checkBoxPriz->setText(isim);
}




void roommenu::on_checkBoxPriz_checkStateChanged(const Qt::CheckState &arg1)
{
    QString open = "AÇIK";
    QString close = "KAPALI";
    QString qPrizAdi = ui->labelPriz->text();
    string prizAdi =qPrizAdi.toStdString();


    if (arg1 == Qt::Checked)
    {
        int deger = 1;
        odam.prizDurumuDegistir(prizAdi,deger);
        ui->labelPrizDurumu->setText(open);

    }else if(arg1 == Qt::Unchecked)
    {
        int deger = 0;
        odam.prizDurumuDegistir(prizAdi,deger);
        ui->labelPrizDurumu->setText(close);
    }
}


void roommenu::on_pushButtonOpen_clicked()
{
    QString open = "AÇIK";
    QString qPrizAdi = ui->labelPriz->text();
    string prizAdi =qPrizAdi.toStdString();
    int deger = 1;
    odam.prizDurumuDegistir(prizAdi,deger);
    ui->labelPrizDurumu->setText(open);
    ui->checkBoxPriz->setCheckState(Qt::Checked);
}


void roommenu::on_pushButtonClose_clicked()
{
    QString close = "KAPALI";
    QString qPrizAdi = ui->labelPriz->text();
    string prizAdi =qPrizAdi.toStdString();
    int deger = 0;
    odam.prizDurumuDegistir(prizAdi,deger);
    ui->checkBoxPriz->setCheckState(Qt::Unchecked);
    ui->labelPrizDurumu->setText(close);
}


void roommenu::on_lineEditPrizAdi_returnPressed()
{
    QString isim = ui->lineEditPrizAdi->text();
    string stdIsım = isim.toStdString();
    int deger = 0;
    odam.prizEkleme(stdIsım, deger);
    ui->labelPriz->setText(isim);
    ui->labelPriz_2->setText(isim);
    ui->labelPriz_3->setText(isim);
    ui->checkBoxPriz->setText(isim);
    ui->lineEditPrizAdi->clear();
    odam.prizAdiListesi();
}


void roommenu::on_spinBoxPrizler_valueChanged(int arg1)
{
    string prizAdi = odam.prizListelemeSpinBox(arg1);
    QString qPrizAdi = QString::fromStdString(prizAdi);
    ui->labelPriz->setText(qPrizAdi);
    ui->labelPriz_2->setText(qPrizAdi);
    ui->labelPriz_3->setText(qPrizAdi);
    ui->checkBoxPriz->setText(qPrizAdi);
    if (odam.prizinDurumu(arg1) == 1){
        ui->labelPrizDurumu->setText("AÇIK");
        ui->checkBoxPriz->setCheckState(Qt::Checked);
    }else if (odam.prizinDurumu(arg1) == 0){
        ui->labelPrizDurumu->setText("KAPALI");
        ui->checkBoxPriz->setCheckState(Qt::Unchecked);
    }
}


void roommenu::on_pushButtonYeniPrizAdiOnay_clicked()
{
    QString isim = ui->labelPriz->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniPrizAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.prizAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.prizAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelPriz->setText(yeniIsim);
        ui->labelPriz_2->setText(yeniIsim);
        ui->labelPriz_3->setText(yeniIsim);
        ui->checkBoxPriz->setText(yeniIsim);
        ui->lineEditYeniPrizAdi->clear();
    }
}

void roommenu::on_lineEditYeniPrizAdi_returnPressed()
{
    QString isim = ui->labelPriz->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniPrizAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.prizAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.prizAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelPriz->setText(yeniIsim);
        ui->labelPriz_2->setText(yeniIsim);
        ui->labelPriz_3->setText(yeniIsim);
        ui->checkBoxPriz->setText(yeniIsim);
        ui->lineEditYeniPrizAdi->clear();
    }
}

void roommenu::on_pushButtonSilinecekPrizOnay_clicked()
{
    QString isim = ui->labelPriz->text();
    string stdIsım = isim.toStdString();
    odam.prizCikarma(stdIsım);
    ui->labelPriz->setText("");
    ui->labelPriz_2->setText("");
    ui->labelPriz_3->setText("");
    ui->checkBoxPriz->setText("");
}

//LAMBA
void roommenu::on_lineEditLampAdi_textEdited(const QString &arg1)
{
    QString isim = ui->lineEditLampAdi->text();
    ui->labelLapAdi->setText(isim);
    ui->labelLapAdi_2->setText(isim);
    ui->labelLapAdi_3->setText(isim);
}

void roommenu::on_verticalSliderLamp_valueChanged(int value)
{
    QString qLambaAdi = ui->labelLapAdi->text();
    string lambaAdi =qLambaAdi.toStdString();
    odam.lambaDurumunuDegistir(lambaAdi, value);
    if(value == 0){
        ui->labelLampDurumu->setText("KAPALI");
    }else if (value == 100){
        ui->labelLampDurumu->setText("AÇIK");
    }else if(value > 0 && value < 100){
        ui->labelLampDurumu->setText("DEĞERİ:"+QString::number(value));
    }
}

void roommenu::on_pushButtonOpenLamp_clicked()
{
    QString qLambaAdi = ui->labelLapAdi->text();
    string lambaAdi =qLambaAdi.toStdString();
    int value = 100;
    odam.lambaDurumunuDegistir(lambaAdi, value);
    ui->labelLampDurumu->setText("AÇIK");
    ui->verticalSliderLamp->setValue(value);
}


void roommenu::on_pushButtonCloseLamp_clicked()
{
    QString qLambaAdi = ui->labelLapAdi->text();
    string lambaAdi =qLambaAdi.toStdString();
    int value = 0;
    odam.lambaDurumunuDegistir(lambaAdi, value);
    ui->labelLampDurumu->setText("KAPALI");
    ui->verticalSliderLamp->setValue(value);
}


void roommenu::on_lineEditLampAdi_returnPressed()
{
    QString isim = ui->lineEditLampAdi->text();
    string stdIsım = isim.toStdString();
    int deger = 0;
    odam.lambaEkleme(stdIsım, deger);
    ui->labelLapAdi->setText(isim);
    ui->labelLapAdi_2->setText(isim);
    ui->labelLapAdi_3->setText(isim);
    ui->lineEditLampAdi->clear();
}


void roommenu::on_spinBoxLambalar_valueChanged(int arg1)
{
    string lambaAdi = odam.lambaListelemeSpinBox(arg1);
    QString qLambaAdi = QString::fromStdString(lambaAdi);
    ui->labelLapAdi->setText(qLambaAdi);
    ui->labelLapAdi_2->setText(qLambaAdi);
    ui->labelLapAdi_3->setText(qLambaAdi);
    if (odam.lambaninDurumu(arg1) == 100){
        ui->labelLampDurumu->setText("AÇIK");
        ui->verticalSliderLamp->setValue(100);
    }else if (odam.lambaninDurumu(arg1) == 0){
        ui->labelLampDurumu->setText("KAPALI");
        ui->verticalSliderLamp->setValue(0);
    }else{
        ui->labelLampDurumu->setText("DEĞERİ: "+QString::number(odam.lambaninDurumu(arg1)));
        ui->verticalSliderLamp->setValue(odam.lambaninDurumu(arg1));
    }
}


void roommenu::on_pushButtonYeniLambaAdiOnay_clicked()
{
    QString isim = ui->labelLapAdi->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniLambaAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.lambaAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.lambaAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelLapAdi->setText(yeniIsim);
        ui->labelLapAdi_2->setText(yeniIsim);
        ui->labelLapAdi_3->setText(yeniIsim);
        ui->lineEditYeniLambaAdi->clear();
    }
}

void roommenu::on_lineEditYeniLambaAdi_returnPressed()
{
    QString isim = ui->labelLapAdi->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniLambaAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.lambaAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.lambaAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelLapAdi->setText(yeniIsim);
        ui->labelLapAdi_2->setText(yeniIsim);
        ui->labelLapAdi_3->setText(yeniIsim);
        ui->lineEditYeniLambaAdi->clear();
    }
}

void roommenu::on_pushButtonLambaOnay_clicked()
{
    QString isim = ui->labelLapAdi->text();
    string stdIsım = isim.toStdString();
    odam.lambaCikarma(stdIsım);
    ui->labelLapAdi->setText("");
    ui->labelLapAdi_2->setText("");
    ui->labelLapAdi_3->setText("");
}











#include "roommenu2.h"
#include "ui_roommenu2.h"
#include "mainwindow.h"
#include "rooms.h"

roommenu2::roommenu2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::roommenu2)
{
    ui->setupUi(this);
    ui->horizontalSlider->setTickPosition(QSlider::TicksBothSides);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setTickInterval(10);
    ui->horizontalSlider->setSingleStep(1);
    ui->dial->setMaximum(100);
    ui->dial->setMinimum(0);
    ui->spinBoxSaksilar->setRange(0, 10);
    ui->spinBoxSaksilar->setSingleStep(1);
    ui->horizontalSliderPerde->setTickPosition(QSlider::TicksBothSides);
    ui->horizontalSliderPerde->setMaximum(100);
    ui->horizontalSliderPerde->setMinimum(0);
    ui->horizontalSliderPerde->setTickInterval(10);
    ui->horizontalSliderPerde->setSingleStep(1);
    ui->verticalSliderKlima->setTickPosition(QSlider::TicksBothSides);
    ui->verticalSliderKlima->setMaximum(40);
    ui->verticalSliderKlima->setMinimum(20);
    ui->verticalSliderKlima->setTickInterval(4);
    ui->verticalSliderKlima->setSingleStep(1);
    ui->dialKlima->setMaximum(40);
    ui->dialKlima->setMinimum(20);

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

    //YANGİN
    if(odam.getYangin()==1){
        ui->checkBoxYangin->setCheckState(Qt::Checked);
    }else if (odam.getYangin()==0){
        ui->checkBoxYangin->setCheckState(Qt::Unchecked);
    }

    //SU BASKINI
    if(odam.getSuBaskini()==1){
        ui->checkBoxSuBaskini->setCheckState(Qt::Checked);
    }else if (odam.getSuBaskini()==0){
        ui->checkBoxSuBaskini->setCheckState(Qt::Unchecked);
    }

    //HIRSIZ
    if(odam.getHirsiz()==1){
        ui->checkBoxHirsiz->setCheckState(Qt::Checked);
    }else if (odam.getHirsiz()==0){
        ui->checkBoxHirsiz->setCheckState(Qt::Unchecked);
    }

    string odaPerde = odam.getOdaAdi()+" İsimli Odanın Perdesi";
    QString qOdaPerde = QString::fromStdString(odaPerde);
    ui->labelPerdeAdi->setText(qOdaPerde);
    ui->horizontalSliderPerde->setSliderPosition(odam.getPerde());

    ui->lcdNumberSicaklik->display(odam.getSicaklik());
    ui->lcdNumberNem->display(odam.getNem());

    ui->verticalSliderKlima->setSliderPosition(odam.getKlima());
}

roommenu2::~roommenu2()
{
    delete ui;
}

rooms roommenu2::getOdam() const
{
    return odam;
}

void roommenu2::setOdam(const rooms &newOdam)
{
    odam = newOdam;
}

void roommenu2::on_pushButtonOk_clicked()
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


void roommenu2::on_pushButtonCancel_clicked()
{
    reject();
}


void roommenu2::on_lineEditSaksiAdi_textEdited(const QString &arg1)
{
    QString isim = ui->lineEditSaksiAdi->text();
    ui->labelSaksi->setText(isim);
    ui->labelSaksi_2->setText(isim);
    ui->labelSaksi_3->setText(isim);
}

void roommenu2::on_lineEditSaksiAdi_returnPressed()
{
    QString isim = ui->lineEditSaksiAdi->text();
    string stdIsım = isim.toStdString();
    int deger = 0;
    odam.saksiEkleme(stdIsım, deger);
    ui->labelSaksi->setText(isim);
    ui->labelSaksi_2->setText(isim);
    ui->labelSaksi_3->setText(isim);
    ui->lineEditSaksiAdi->clear();
}

void roommenu2::on_horizontalSlider_valueChanged(int value)
{
    QString qSaksiAdi = ui->labelSaksi->text();
    string saksiAdi =qSaksiAdi.toStdString();
    odam.saksiDurumunuDegistir(saksiAdi, value);
    if(value == 0){
        ui->labelSaksiDurumu->setText("KAPALI");
    }else if (value == 100){
        ui->labelSaksiDurumu->setText("AÇIK");
    }else if(value > 0 && value < 100){
        ui->labelSaksiDurumu->setText("DEĞERİ:"+QString::number(value));
    }
}

void roommenu2::on_spinBoxSaksilar_valueChanged(int arg1)
{
    string saksiAdi = odam.saksiListelemeSpinBox(arg1);
    QString qSaksiAdi = QString::fromStdString(saksiAdi);
    ui->labelSaksi->setText(qSaksiAdi);
    ui->labelSaksi_2->setText(qSaksiAdi);
    ui->labelSaksi_3->setText(qSaksiAdi);
    if (odam.saksininDurumu(arg1) == 100){
        ui->labelSaksiDurumu->setText("AÇIK");
        ui->horizontalSlider->setValue(100);
    }else if (odam.saksininDurumu(arg1) == 0){
        ui->labelSaksiDurumu->setText("KAPALI");
        ui->horizontalSlider->setValue(0);
    }else{
        ui->labelSaksiDurumu->setText("DEĞERİ: "+QString::number(odam.saksininDurumu(arg1)));
        ui->horizontalSlider->setValue(odam.saksininDurumu(arg1));
    }
}

void roommenu2::on_pushButtonYeniSaksiAdiOnay_clicked()
{
    QString isim = ui->labelSaksi->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniSaksiAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.saksiAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.saksiAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelSaksi->setText(yeniIsim);
        ui->labelSaksi_2->setText(yeniIsim);
        ui->labelSaksi_3->setText(yeniIsim);
        ui->lineEditYeniSaksiAdi->clear();
    }
}

void roommenu2::on_lineEditYeniSaksiAdi_returnPressed()
{
    QString isim = ui->labelSaksi->text();
    string stdIsım = isim.toStdString();
    QString yeniIsim = ui->lineEditYeniSaksiAdi->text();
    string stdYeniIsım = yeniIsim.toStdString();
    if (odam.saksiAdiKullaniliyorMu(stdYeniIsım) == false){
        odam.saksiAdiDegisim(stdYeniIsım,stdIsım);
        ui->labelSaksi->setText(yeniIsim);
        ui->labelSaksi_2->setText(yeniIsim);
        ui->labelSaksi_3->setText(yeniIsim);
        ui->lineEditYeniSaksiAdi->clear();
    }
}

void roommenu2::on_pushButtonSilinecekSaksiOnay_clicked()
{
    QString isim = ui->labelSaksi->text();
    string stdIsım = isim.toStdString();
    odam.saksiCikarma(stdIsım);
    ui->labelSaksi->setText("");
    ui->labelSaksi_2->setText("");
    ui->labelSaksi_3->setText("");
}

void roommenu2::on_checkBoxYangin_checkStateChanged(const Qt::CheckState &arg1)
{
    QString open = "YANGIN VAR!";
    QString close = "";

    if (arg1 == Qt::Checked)
    {
        int deger = 1;
        odam.setYangin(deger);

    }else if(arg1 == Qt::Unchecked)
    {
        int deger = 0;
        odam.setYangin(deger);
    }
    int yanginDurum = odam.getYangin();

    if (yanginDurum == 1)
    {
        ui->labelYanginDurum->setText(open);
    }else if (yanginDurum == 0)
    {
        ui->labelYanginDurum->setText(close);
    }
}


void roommenu2::on_checkBoxSuBaskini_checkStateChanged(const Qt::CheckState &arg1)
{
    QString open = "ODAYI SU BASTI!";
    QString close = "";

    if (arg1 == Qt::Checked)
    {
        int deger = 1;
        odam.setSuBaskini(deger);

    }else if(arg1 == Qt::Unchecked)
    {
        int deger = 0;
        odam.setSuBaskini(deger);
    }
    int suBaskiniDurum = odam.getSuBaskini();

    if (suBaskiniDurum == 1)
    {
        ui->labelSuBaskiniDurum->setText(open);
    }else if (suBaskiniDurum == 0)
    {
        ui->labelSuBaskiniDurum->setText(close);
    }
}


void roommenu2::on_checkBoxHirsiz_checkStateChanged(const Qt::CheckState &arg1)
{
    QString open = "ODADA HIRSIZ VAR!";
    QString close = "";

    if (arg1 == Qt::Checked)
    {
        int deger = 1;
        odam.setHirsiz(deger);

    }else if(arg1 == Qt::Unchecked)
    {
        int deger = 0;
        odam.setHirsiz(deger);
    }
    int hirsizDurum = odam.getHirsiz();

    if (hirsizDurum == 1)
    {
        ui->labelHirsizDurum->setText(open);
    }else if (hirsizDurum == 0)
    {
        ui->labelHirsizDurum->setText(close);
    }
}

void roommenu2::on_pushButtonPerdeOpen_clicked()
{
    int value = 100;
    odam.setPerde(value);
    ui->labelPerdeDurumu->setText("AÇIK");
    ui->horizontalSliderPerde->setValue(value);

}


void roommenu2::on_pushButtonPerdeClose_clicked()
{
    int value = 0;
    odam.setPerde(value);
    ui->labelPerdeDurumu->setText("KAPALI");
    ui->horizontalSliderPerde->setValue(value);
}


void roommenu2::on_horizontalSliderPerde_valueChanged(int value)
{
    odam.setPerde(value);
    int perde = odam.getPerde();
    if(perde == 0){
        ui->labelPerdeDurumu->setText("KAPALI");
    }else if (perde > 0 && perde <= 25){
        ui->labelPerdeDurumu->setText("ÇOK AZ AÇIK - "+QString::number(value));
    }else if (perde > 25 && perde < 50){
        ui->labelPerdeDurumu->setText("YARIYA YAKIN AÇIK - "+QString::number(value));
    }else if(perde == 50){
         ui->labelPerdeDurumu->setText("YARIM AÇIK - "+QString::number(value));
    }else if(perde > 50 && perde <= 75){
        ui->labelPerdeDurumu->setText("YARIDAN FAZLA AÇIK - "+QString::number(value));
    }else if(perde > 75 && perde <= 99){
        ui->labelPerdeDurumu->setText("ÇOK AZ KAPALI - "+QString::number(value));
    }else if(perde == 100){
        ui->labelPerdeDurumu->setText("AÇIK");
    }
    ui->horizontalSliderPerde->setValue(value);
}


void roommenu2::on_verticalSliderKlima_valueChanged(int value)
{
    odam.setKlima(value);
    int klima = odam.getKlima();
    if(klima >= 20 && klima <=24){
        odam.setNem(value*0.623);
        odam.setSicaklik(value*1.036);
        ui->labelKlimaDeger->setText("AKTİF -" +QString::number(value)+ "°C");
    }else if(klima >= 25 && klima <=29){
        odam.setNem(value*0.51);
        odam.setSicaklik(value*1.083);
        ui->labelKlimaDeger->setText("AKTİF -" +QString::number(value)+ "°C");
    }else if (klima >= 30 && klima <= 34){
        odam.setNem(value*0.88);
        odam.setSicaklik(value*0.917);
        ui->labelKlimaDeger->setText("AKTİF -" +QString::number(value)+ "°C");
    }else if (klima >= 35 && klima <= 40){
        odam.setNem((value*0.628) + 3.61);
        odam.setSicaklik(value*0.982);
        ui->labelKlimaDeger->setText("AKTİF -" +QString::number(value)+ "°C");
    }
    ui->lcdNumberSicaklik->display(odam.getSicaklik());
    ui->lcdNumberNem->display(odam.getNem());

}


void roommenu2::on_pushButtonKlimaOpen_clicked()
{
    if (odam.getSicaklik()==25){
        ui->lcdNumberSicaklik->display(odam.getSicaklik());
        ui->lcdNumberNem->display(odam.getNem());
        ui->verticalSliderKlima->setSliderPosition(25);
    }else{
        int klima = odam.getKlima();
        if(klima >= 20 && klima <=24){
            odam.setNem(klima*0.623);
            odam.setSicaklik(klima*1.036);
            ui->labelKlimaDeger->setText("AKTİF -" +QString::number(klima)+ "°C");
        }else if(klima >= 25 && klima <=29){
            odam.setNem(klima*0.51);
            odam.setSicaklik(klima*1.083);
            ui->labelKlimaDeger->setText("AKTİF -" +QString::number(klima)+ "°C");
        }else if (klima >= 30 && klima <= 34){
            odam.setNem(klima*0.88);
            odam.setSicaklik(klima*0.917);
            ui->labelKlimaDeger->setText("AKTİF -" +QString::number(klima)+ "°C");
        }else if (klima >= 35 && klima <= 40){
            odam.setNem((klima*0.628) + 3.61);
            odam.setSicaklik(klima*0.982);
            ui->labelKlimaDeger->setText("AKTİF -" +QString::number(klima)+ "°C");
        }
        ui->lcdNumberSicaklik->display(odam.getSicaklik());
        ui->lcdNumberNem->display(odam.getNem());
        ui->verticalSliderKlima->setSliderPosition(klima);
    }

}


void roommenu2::on_pushButtonKlimaClose_clicked()
{
    ui->verticalSliderKlima->setSliderPosition(20);
    odam.setSicaklik(25);
    odam.setNem(25);
    ui->lcdNumberSicaklik->display(odam.getSicaklik());
    ui->lcdNumberNem->display(odam.getNem());
    ui->labelKlimaDeger->setText("KAPALI");

}





#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "roommenu.h"
#include "roommenu2.h"
#include "rooms.h"
#include <map>
#include <string>
using namespace std;

map<int,rooms> mOdalar;
static int odaSayac = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


rooms MainWindow::getSecilenOda() const
{
    return secilenOda;
}

void MainWindow::setSecilenOda(const rooms &newSecilenOda)
{
    secilenOda = newSecilenOda;
}

void MainWindow::setSecilenOdaAdi(const QString &newSecilenOdaAdi)
{
    secilenOdaAdi = newSecilenOdaAdi;
}

QString MainWindow::getSecilenOdaAdi() const
{
    return secilenOdaAdi;
}

map<int,rooms> MainWindow::getMapOdalar(){
    return mOdalar;
}

void MainWindow::setMapOdalar(const map<int, rooms> &_mOdalar){
    mOdalar = _mOdalar;
}

rooms MainWindow::mOdalardanOdaGönderme(map<int, rooms>& roomS,QString& odaAdi){
    string odaninAdi = odaAdi.toStdString();
    for (auto& oda : roomS){
        if(oda.second.getOdaAdi() == odaninAdi){
            rooms &myOda = oda.second;
            return myOda;
        }
    }
    rooms bosOda;
    return bosOda;
}

void MainWindow::on_pushButtonOdayaGit_clicked()
{

    QString odaAdi = ui->labelOdaAdi->text();
    if(odaAdi.isEmpty()){

    }else {
        rooms odam = mOdalardanOdaGönderme(mOdalar,odaAdi);
        setSecilenOdaAdi(ui->labelOdaAdi->text());
        setSecilenOda(odam);
        getMapOdalar();
        roommenu* roomMenu = new roommenu(this);
        auto ret = roomMenu->exec();
        if(ret == QDialog::Accepted){
            qDebug()<<"Ok tiklandi!";
        }else if(ret == QDialog::Rejected) {
            qDebug()<<"Cancel tiklandi!";
        }
    }
}

void MainWindow::on_pushButtonOdayaGit_2_clicked()
{
    QString odaAdi = ui->labelOdaAdi->text();
    if(odaAdi.isEmpty()){

    }else {
        rooms odam = mOdalardanOdaGönderme(mOdalar,odaAdi);
        setSecilenOdaAdi(ui->labelOdaAdi->text());
        setSecilenOda(odam);
        getMapOdalar();
        roommenu2* roomMenu2 = new roommenu2(this);
        auto ret = roomMenu2->exec();
        if(ret == QDialog::Accepted){
            qDebug()<<"Ok tiklandi!";
        }else if(ret == QDialog::Rejected) {
            qDebug()<<"Cancel tiklandi!";
        }
    }
}

void MainWindow::on_pushButtonYeniOdaEkle_clicked()
{
    QString odaAdi = ui->lineEditYeniOdaAdi->text();

    if(odaAdi.isEmpty()){
        qDebug() << "ODA ADI BOŞ";
    }else {
        map<string, int> mOdaPrizler;
        map<string, float> mOdaLambalar;
        map<string, float> mOdaSaksilar;
        bool varMi = true;
        string yeniOdaninAdi = odaAdi.toStdString();
        int sayac = 0;
        for (const auto& oda : mOdalar){
            sayac++;
            if(sayac == oda.first){
                if (yeniOdaninAdi == oda.second.getOdaAdi()){
                    varMi = false;
                }
            }
        }

        if(varMi == true){
            odaSayac++;
            mOdalar[odaSayac] = rooms(yeniOdaninAdi,mOdaPrizler,mOdaLambalar,mOdaSaksilar);
            ui->labelOdaAdi->setText(odaAdi);
            ui->labelOdaAdi2->setText(odaAdi);
            ui->lineEditYeniOdaAdi->clear();
        }
    }
}



void MainWindow::on_spinBox_valueChanged(int arg1)
{
    int sayac = 0;
    string odaAdi;
    for (const auto& oda : mOdalar){
        sayac++;
        if(arg1 == sayac){
            odaAdi=oda.second.getOdaAdi();
        }
    }
    QString qOdaAdi = QString::fromStdString(odaAdi);
    ui->labelOdaAdi->setText(qOdaAdi);
    ui->labelOdaAdi2->setText(qOdaAdi);
}

void MainWindow::on_pushButtonOdayiSil_clicked()
{
    QString qOdaAdi = ui->labelOdaAdi->text();
    string odaAdi= qOdaAdi.toStdString();
    for (const auto& oda : mOdalar){
        if(odaAdi == oda.second.getOdaAdi()){
            if (mOdalar.find(oda.first) != mOdalar.end()){
                mOdalar.erase(oda.first);
            }
        }
    }
}

void MainWindow::on_pushButtonOdaAdiDeigisim_clicked()
{
    QString qOdaAdi = ui->labelOdaAdi->text();
    string odaAdi= qOdaAdi.toStdString();
    QString qYeniOdaAdi = ui->lineEditOdaAdiDegisim->text();
    string yeniOdaAdi = qYeniOdaAdi.toStdString();
    int value = ui->spinBox->value();
    int sayac = 0;
    bool varMi = true;

    for (auto& oda : mOdalar){
        if(oda.second.getOdaAdi() == yeniOdaAdi){
            varMi = false;
        }
    }
    if(varMi){
        for (auto& oda : mOdalar){
            sayac++;
            if(value == sayac){
                oda.second.setOdaAdi(yeniOdaAdi);
            }
        }
    }
}


void MainWindow::on_lineEditYeniOdaAdi_returnPressed()
{
    QString odaAdi = ui->lineEditYeniOdaAdi->text();

    if(odaAdi.isEmpty()){
        qDebug() << "ODA ADI BOŞ";
    }else {
        map<string, int> mOdaPrizler;
        map<string, float> mOdaLambalar;
        map<string, float> mOdaSaksilar;
        bool varMi = true;
        string yeniOdaninAdi = odaAdi.toStdString();
        int sayac = 0;
        for (const auto& oda : mOdalar){
            sayac++;
            if(sayac == oda.first){
                if (yeniOdaninAdi == oda.second.getOdaAdi()){
                    varMi = false;
                }
            }
        }

        if(varMi == true){
            odaSayac++;
            mOdalar[odaSayac] = rooms(yeniOdaninAdi,mOdaPrizler,mOdaLambalar,mOdaSaksilar);
            ui->labelOdaAdi->setText(odaAdi);
            ui->labelOdaAdi2->setText(odaAdi);
            ui->lineEditYeniOdaAdi->clear();
        }
    }
}


void MainWindow::on_lineEditOdaAdiDegisim_returnPressed()
{
    QString qOdaAdi = ui->labelOdaAdi->text();
    string odaAdi= qOdaAdi.toStdString();
    QString qYeniOdaAdi = ui->lineEditOdaAdiDegisim->text();
    string yeniOdaAdi = qYeniOdaAdi.toStdString();
    int value = ui->spinBox->value();
    int sayac = 0;
    bool varMi = true;

    for (auto& oda : mOdalar){
        if(oda.second.getOdaAdi() == yeniOdaAdi){
            varMi = false;
        }
    }
    if(varMi){
        for (auto& oda : mOdalar){
            sayac++;
            if(value == sayac){
                oda.second.setOdaAdi(yeniOdaAdi);
            }
        }
    }
}


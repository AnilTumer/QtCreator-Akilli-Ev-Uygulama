#include "rooms.h"
#include <qdebug.h>
#include <qlogging.h>
#include<string>
using namespace std;


rooms::rooms(){

}

rooms::rooms(string _odaAdi, map <string, int> _mOdaPriz, map <string, float> _mOdaLamp, map<string, float> _mOdaSaksi) {
    odaAdi = _odaAdi;
    mOdaPriz = _mOdaPriz;
    mOdaLamp = _mOdaLamp;
    mOdaSaksi = _mOdaSaksi;
    yangin = 0;
    suBaskini = 0;
    hirsiz = 0;
    sicaklik = 25.0;
    nem = 25.0;
    perde = 0;
    klima = 0;
    qDebug() << "Oda olusturuldu! Odanin Adi: "+odaAdi;
}


rooms::~rooms(){
    qDebug() << "Oda silindi! Odanin Adi: "+odaAdi;
}

void rooms::prizAdiListesi(){
    for (const auto& priz : mOdaPriz){
        qDebug()<<priz.first;
    }
}


//PRİZ
bool rooms::prizAdiKullaniliyorMu(string& newPrizAdi){
    for (const auto& priz : mOdaPriz){
        if(newPrizAdi == priz.first){
            return true;
        }
    }
    return false;
}

string rooms::prizListelemeSpinBox(int value){
    int sayac = 0;
    for (const auto& priz : mOdaPriz){
        sayac++;
        if(sayac == value){
            return priz.first;
        }
    }
    return "";
}

int rooms::prizinDurumu(int value){
    int sayac = 0;
    for (const auto& priz : mOdaPriz){
        sayac++;
        if(sayac == value){
            return priz.second;
        }
    }
    return 0;
}

void rooms::prizEkleme(string& _name, int& deger){
    if (mOdaPriz.find(_name) != mOdaPriz.end()) {

    }
    else {
        mOdaPriz[_name] = deger;
    }
}

int rooms::prizSayisi(){
    return mOdaPriz.size();
}

void rooms::prizDurumuDegistir(string& _name, int& deger){
    if (mOdaPriz.find(_name) != mOdaPriz.end()){
        mOdaPriz[_name] = deger;
    }
}

void rooms::prizAdiDegisim(string& newPrizAdi, string &prizAdi){
    if (mOdaPriz.find(prizAdi) != mOdaPriz.end()){
        for (const auto& priz : mOdaPriz){
            if (priz.first == prizAdi){
                mOdaPriz[newPrizAdi] = priz.second;
                mOdaPriz.erase(prizAdi);
            }
        }
    }

}

void rooms::prizCikarma(string& silinecekPrizAdi){
    if (mOdaPriz.find(silinecekPrizAdi) != mOdaPriz.end()){
        mOdaPriz.erase(silinecekPrizAdi);
    }
}


//LAMBA
bool rooms::lambaAdiKullaniliyorMu(string& newLambaAdi){
    for (const auto& lamba : mOdaLamp){
        if(newLambaAdi == lamba.first){
            return true;
        }
    }
    return false;
}

string rooms::lambaListelemeSpinBox(int value){
    int sayac = 0;
    for (const auto& lamba : mOdaLamp){
        sayac++;
        if(sayac == value){
            return lamba.first;
        }
    }
    return "";
}

int rooms::lambaninDurumu(int value){
    int sayac = 0;
    for (const auto& lamba : mOdaLamp){
        sayac++;
        if(sayac == value){
            return lamba.second;
        }
    }
    return 0;
}

void rooms::lambaEkleme(string& _name, int& deger){
    if (mOdaLamp.find(_name) != mOdaLamp.end()) {

    }
    else {
        mOdaLamp[_name] = deger;
    }
}

int rooms::lambaSayisi(){
    return mOdaLamp.size();
}

void rooms::lambaDurumunuDegistir(string& _name, int& deger){
    if (mOdaLamp.find(_name) != mOdaLamp.end()){
        mOdaLamp[_name] = deger;
    }
}

void rooms::lambaAdiDegisim(string& newLambaAdi, string &lambaAdi){
    if (mOdaLamp.find(lambaAdi) != mOdaLamp.end()){
        for (const auto& lamba : mOdaLamp){
            if (lamba.first == lambaAdi){
                mOdaLamp[newLambaAdi] = lamba.second;
                mOdaLamp.erase(lambaAdi);
            }
        }
    }
}

void rooms::lambaCikarma(string& silinecekLambaAdi){
    if (mOdaLamp.find(silinecekLambaAdi) != mOdaLamp.end()){
        mOdaLamp.erase(silinecekLambaAdi);
    }
}


//SAKSI
bool rooms::saksiAdiKullaniliyorMu(string& newSaksiAdi){
    for (const auto& saksi : mOdaSaksi){
        if(newSaksiAdi == saksi.first){
            return true;
        }
    }
    return false;
}

string rooms::saksiListelemeSpinBox(int value){
    int sayac = 0;
    for (const auto& saksi : mOdaSaksi){
        sayac++;
        if(sayac == value){
            return saksi.first;
        }
    }
    return "";
}

int rooms::saksininDurumu(int value){
    int sayac = 0;
    for (const auto& saksi : mOdaSaksi){
        sayac++;
        if(sayac == value){
            return saksi.second;
        }
    }
    return 0;
}

void rooms::saksiEkleme(string& _name, int& deger){
    if (mOdaSaksi.find(_name) != mOdaSaksi.end()) {

    }
    else {
        mOdaSaksi[_name] = deger;
    }
}

int rooms::saksiSayisi(){
    return mOdaSaksi.size();
}

void rooms::saksiDurumunuDegistir(string& _name, int& deger){
    if (mOdaSaksi.find(_name) != mOdaSaksi.end()){
        mOdaSaksi[_name] = deger;
    }
}

void rooms::saksiAdiDegisim(string& newSaksiAdi, string &saksiAdi){
    if (mOdaSaksi.find(saksiAdi) != mOdaSaksi.end()){
        for (const auto& lamba : mOdaSaksi){
            if (lamba.first == saksiAdi){
                mOdaSaksi[newSaksiAdi] = lamba.second;
                mOdaSaksi.erase(saksiAdi);
            }
        }
    }
}

void rooms::saksiCikarma(string& silinecekSaksiAdi){
    if (mOdaSaksi.find(silinecekSaksiAdi) != mOdaSaksi.end()){
        mOdaSaksi.erase(silinecekSaksiAdi);
    }
}

//GETTERS AND SETTERS
map<string, int> rooms::odaPriz() const
{
    return mOdaPriz;
}

void rooms::setOdaPriz(const map<string, int> &newOdaPriz)
{
    mOdaPriz = newOdaPriz;
}

map<string, float> rooms::odaLamp() const
{
    return mOdaLamp;
}

void rooms::setOdaLamp(const map<string, float> &newOdaLamp)
{
    mOdaLamp = newOdaLamp;
}

map<string, float> rooms::odaSaksi() const
{
    return mOdaSaksi;
}

void rooms::setOdaSaksi(const map<string, float> &newOdaSaksi)
{
    mOdaSaksi = newOdaSaksi;
}

string rooms::getOdaAdi() const
{
    return odaAdi;
}

void rooms::setOdaAdi(const string &newOdaAdi)
{
    odaAdi = newOdaAdi;
}

int rooms::getYangin() const
{
    return yangin;
}

void rooms::setYangin(int newYangin)
{
    yangin = newYangin;
}

int rooms::getSuBaskini() const
{
    return suBaskini;
}

void rooms::setSuBaskini(int newSuBaskini)
{
    suBaskini = newSuBaskini;
}

int rooms::getHirsiz() const
{
    return hirsiz;
}

void rooms::setHirsiz(int newHirsiz)
{
    hirsiz = newHirsiz;
}

float rooms::getSicaklik() const
{
    return sicaklik;
}

void rooms::setSicaklik(float newSicaklik)
{
    sicaklik = newSicaklik;
}

float rooms::getNem() const
{
    return nem;
}

void rooms::setNem(float newNem)
{
    nem = newNem;
}

int rooms::getPerde() const
{
    return perde;
}

void rooms::setPerde(int newPerde)
{
    perde = newPerde;
}

int rooms::getKlima() const
{
    return klima;
}

void rooms::setKlima(int newKlima)
{
    klima = newKlima;
}

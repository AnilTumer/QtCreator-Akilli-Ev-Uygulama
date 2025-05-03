#ifndef ROOMS_H
#define ROOMS_H
#include <string>
#include <map>
using namespace std;

class rooms
{
private:
    map <string, int> mOdaPriz;
    map <string, float> mOdaLamp;
    map<string, float> mOdaSaksi;
    string odaAdi;
    int yangin;
    int suBaskini;
    int hirsiz;
    float sicaklik;
    float nem;
    int perde;
    int klima;

public:
    rooms(string _odaAdi, map <string, int> _mOdaPriz, map <string, float> _mOdaLamp, map<string, float> _mOdaSaksi);
    rooms();
    ~rooms();

    //PRİZ FONKSİYONLAR
    void prizEkleme(string& _name, int& deger);
    int prizSayisi();
    void prizDurumuDegistir(string& _name, int& deger);
    string prizListelemeSpinBox(int value);
    int prizinDurumu(int value);
    void prizAdiDegisim(string& newPrizAdi, string& prizAdi);
    void prizCikarma(string& silinecekPrizAdi);
    void prizAdiListesi();
    bool prizAdiKullaniliyorMu(string& newPrizAdi);

    //LAMBA FONKSİYONLAR
    void lambaEkleme(string& _name, int& deger);
    int lambaSayisi();
    void lambaDurumunuDegistir(string& _name, int& deger);
    string lambaListelemeSpinBox(int value);
    int lambaninDurumu(int value);
    void lambaAdiDegisim(string& newLambaAdi, string& lambaAdi);
    void lambaCikarma(string& silinecekLambaAdi);
    bool lambaAdiKullaniliyorMu(string& newLambaAdi);

    //SAKSI FONKSİYONLAR
    void saksiEkleme(string& _name, int& deger);
    int saksiSayisi();
    void saksiDurumunuDegistir(string& _name, int& deger);
    string saksiListelemeSpinBox(int value);
    int saksininDurumu(int value);
    void saksiAdiDegisim(string& newSaksiAdi, string& saksiAdi);
    void saksiCikarma(string& silinecekSaksiAdi);
    bool saksiAdiKullaniliyorMu(string& newSaksiAdi);


    //GETTERS AND SETTERS
    map<string, int> odaPriz() const;
    void setOdaPriz(const map<string, int> &newOdaPriz);
    map<string, float> odaLamp() const;
    void setOdaLamp(const map<string, float> &newOdaLamp);
    map<string, float> odaSaksi() const;
    void setOdaSaksi(const map<string, float> &newOdaSaksi);
    string getOdaAdi() const;
    void setOdaAdi(const string &newOdaAdi);
    int getYangin() const;
    void setYangin(int newYangin);
    int getSuBaskini() const;
    void setSuBaskini(int newSuBaskini);
    int getHirsiz() const;
    void setHirsiz(int newHirsiz);
    float getSicaklik() const;
    void setSicaklik(float newSicaklik);
    float getNem() const;
    void setNem(float newNem);
    int getPerde() const;
    void setPerde(int newPerde);
    int getKlima() const;
    void setKlima(int newKlima);
};

#endif // ROOMS_H

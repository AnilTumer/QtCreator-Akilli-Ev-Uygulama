#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <map>
#include <string>
#include"rooms.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString getSecilenOdaAdi() const;

    void setSecilenOdaAdi(const QString &newSecilenOdaAdi);

    rooms mOdalardanOdaGönderme(map<int, rooms>& roomS,QString& odaAdi);

    rooms getSecilenOda() const;
    void setSecilenOda(const rooms &newSecilenOda);

    map<int,rooms> getMapOdalar();

    void setMapOdalar(const map<int, rooms> &_mOdalar);

private slots:
    void on_pushButtonOdayaGit_clicked();

    void on_pushButtonYeniOdaEkle_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_pushButtonOdayiSil_clicked();

    void on_pushButtonOdaAdiDeigisim_clicked();

    void on_pushButtonOdayaGit_2_clicked();

    void on_lineEditYeniOdaAdi_returnPressed();

    void on_lineEditOdaAdiDegisim_returnPressed();

private:
    Ui::MainWindow *ui;
    QString secilenOdaAdi;
    rooms secilenOda;
};
#endif // MAINWINDOW_H

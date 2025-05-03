#ifndef ROOMMENU_H
#define ROOMMENU_H

#include <QDialog>
#include "rooms.h"
#include "mainwindow.h"

namespace Ui {
class roommenu;
}

class roommenu : public QDialog
{
    Q_OBJECT

public:
    explicit roommenu(QWidget *parent = nullptr);
    ~roommenu();

    rooms getOdam() const;
    void setOdam(const rooms &newOdam);

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

    void on_lineEditPrizAdi_textEdited(const QString &arg1);

    void on_checkBoxPriz_checkStateChanged(const Qt::CheckState &arg1);

    void on_pushButtonOpen_clicked();

    void on_pushButtonClose_clicked();

    void on_lineEditPrizAdi_returnPressed();

    void on_spinBoxPrizler_valueChanged(int arg1);

    void on_pushButtonYeniPrizAdiOnay_clicked();

    void on_pushButtonSilinecekPrizOnay_clicked();

    void on_lineEditLampAdi_textEdited(const QString &arg1);

    void on_pushButtonOpenLamp_clicked();

    void on_pushButtonCloseLamp_clicked();

    void on_lineEditLampAdi_returnPressed();

    void on_spinBoxLambalar_valueChanged(int arg1);

    void on_pushButtonYeniLambaAdiOnay_clicked();

    void on_pushButtonLambaOnay_clicked();

    void on_verticalSliderLamp_valueChanged(int value);

    void on_lineEditYeniPrizAdi_returnPressed();

    void on_lineEditYeniLambaAdi_returnPressed();

private:
    Ui::roommenu *ui;
    rooms odam;
    MainWindow* pDialog;
};

#endif // ROOMMENU_H

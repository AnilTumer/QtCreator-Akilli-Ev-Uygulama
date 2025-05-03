#ifndef ROOMMENU2_H
#define ROOMMENU2_H

#include <QDialog>
#include "rooms.h"
#include "mainwindow.h"

namespace Ui {
class roommenu2;
}

class roommenu2 : public QDialog
{
    Q_OBJECT

public:
    explicit roommenu2(QWidget *parent = nullptr);
    ~roommenu2();

    rooms getOdam() const;
    void setOdam(const rooms &newOdam);

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

    void on_lineEditSaksiAdi_textEdited(const QString &arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_lineEditSaksiAdi_returnPressed();

    void on_spinBoxSaksilar_valueChanged(int arg1);

    void on_pushButtonYeniSaksiAdiOnay_clicked();

    void on_pushButtonSilinecekSaksiOnay_clicked();

    void on_checkBoxYangin_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxSuBaskini_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxHirsiz_checkStateChanged(const Qt::CheckState &arg1);

    void on_pushButtonPerdeOpen_clicked();

    void on_pushButtonPerdeClose_clicked();

    void on_horizontalSliderPerde_valueChanged(int value);

    void on_verticalSliderKlima_valueChanged(int value);

    void on_pushButtonKlimaOpen_clicked();

    void on_pushButtonKlimaClose_clicked();

    void on_lineEditYeniSaksiAdi_returnPressed();

private:
    Ui::roommenu2 *ui;
    rooms odam;
    MainWindow* pDialog;
};

#endif // ROOMMENU2_H

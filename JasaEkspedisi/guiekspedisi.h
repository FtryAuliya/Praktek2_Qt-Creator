#ifndef GUIEKSPEDISI_H
#define GUIEKSPEDISI_H

#include <QMainWindow>
#include <formbarang.h>
#include <formpegawai.h>
#include <formpelanggan.h>
#include <formpengiriman.h>
#include <formkurir.h>
#include <formtarif.h>
#include <formtracking.h>

namespace Ui {
class guiEkspedisi;
}

class guiEkspedisi : public QMainWindow
{
    Q_OBJECT

public:
    explicit guiEkspedisi(QWidget *parent = nullptr);
    ~guiEkspedisi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::guiEkspedisi *ui;
    FormBarang *barang;
    FormPegawai *pegawai;
    FormPelanggan *pelanggan;
    FormPengiriman *pengiriman;
    FormKurir *kurir;
    FormTarif *tarif;
    FormTracking *tracking;
};

#endif // GUIEKSPEDISI_H

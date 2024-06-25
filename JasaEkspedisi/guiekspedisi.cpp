#include "guiekspedisi.h"
#include "ui_guiekspedisi.h"

guiEkspedisi::guiEkspedisi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::guiEkspedisi)
{
    ui->setupUi(this);
    barang = new FormBarang;
    pegawai = new FormPegawai;
    pelanggan = new FormPelanggan;
    pengiriman = new FormPengiriman;
    kurir = new FormKurir;
    tarif = new FormTarif;
    tracking = new FormTracking;
}

guiEkspedisi::~guiEkspedisi()
{
    delete ui;
}

void guiEkspedisi::on_pushButton_clicked()
{
    barang->show();
}


void guiEkspedisi::on_pushButton_2_clicked()
{
    pegawai->show();
}


void guiEkspedisi::on_pushButton_3_clicked()
{
    pelanggan->show();
}


void guiEkspedisi::on_pushButton_4_clicked()
{
    pengiriman->show();
}


void guiEkspedisi::on_pushButton_5_clicked()
{
    kurir->show();
}


void guiEkspedisi::on_pushButton_6_clicked()
{
    tarif->show();
}


void guiEkspedisi::on_pushButton_7_clicked()
{
    tracking->show();
}


#include "formpengiriman.h"
#include "ui_formpengiriman.h"
#include "QMessageBox"

FormPengiriman::FormPengiriman(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPengiriman)
{
    ui->setupUi(this);

    loadTabelPengiriman();
}

void FormPengiriman::loadTabelPengiriman()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM pengiriman ORDER BY no_resi ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("No Resi"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Kode Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Tanggal Pengiriman"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("ID Pegawai"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("ID Pelanggan"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Tanggal Diterima"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Nama Penerima"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Alamat Penerima"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("Telp Penerima"));
    tabelModel->setHeaderData(9,Qt::Horizontal,QObject::tr("ID Tarif"));
    tabelModel->setHeaderData(10,Qt::Horizontal,QObject::tr("Biaya Asuransi"));
    tabelModel->setHeaderData(11,Qt::Horizontal,QObject::tr("Biaya Packing"));
    tabelModel->setHeaderData(12,Qt::Horizontal,QObject::tr("Berat Barang"));
    tabelModel->setHeaderData(13,Qt::Horizontal,QObject::tr("Total Biaya"));

    ui->tablePengiriman->setModel(tabelModel);
    ui->tablePengiriman->setColumnWidth(0,100);
    ui->tablePengiriman->setColumnWidth(1,100);
    ui->tablePengiriman->setColumnWidth(2,120);
    ui->tablePengiriman->setColumnWidth(3,100);
    ui->tablePengiriman->setColumnWidth(4,100);
    ui->tablePengiriman->setColumnWidth(5,110);
    ui->tablePengiriman->setColumnWidth(6,100);
    ui->tablePengiriman->setColumnWidth(7,120);
    ui->tablePengiriman->setColumnWidth(8,100);
    ui->tablePengiriman->setColumnWidth(9,100);
    ui->tablePengiriman->setColumnWidth(10,100);
    ui->tablePengiriman->setColumnWidth(11,100);
    ui->tablePengiriman->setColumnWidth(12,100);
    ui->tablePengiriman->setColumnWidth(13,100);
    ui->tablePengiriman->show();
}

FormPengiriman::~FormPengiriman()
{
    delete ui;

    biaya uji;
}

void FormPengiriman::on_pushButton_clicked()
{
    if(ui->noResiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","No Resi belum diisi");
        ui->noResiLineEdit->setFocus();

    }else if (ui->kodeBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kode Barang belum diisi");
        ui->kodeBarangLineEdit->setFocus();
    }else if (ui->tanggalPengirimanDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Pengiriman belum diisi");
        ui->tanggalPengirimanDateEdit->setFocus();
    }else if (ui->iDPegawaiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Pegawai belum diisi");
        ui->iDPegawaiLineEdit->setFocus();
    }else if (ui->iDPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Pelanggan belum diisi");
        ui->iDPelangganLineEdit->setFocus();
    }else if (ui->tanggalDiterimaDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Diterima belum diisi");
        ui->tanggalDiterimaDateEdit->setFocus();
    }else if (ui->namaPenerimaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Penerima belum diisi");
        ui->namaPenerimaLineEdit->setFocus();
    }else if (ui->alamatTujuanPenerimaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Penerima belum diisi");
        ui->alamatTujuanPenerimaLineEdit->setFocus();
    }else if (ui->telpPenerimaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telp Penerima belum diisi");
        ui->telpPenerimaLineEdit->setFocus();
    }else if (ui->iDTarifLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Tarif belum diisi");
        ui->iDTarifLineEdit->setFocus();
    }else if (ui->biayaAsuransiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Biaya Asuransi belum diisi");
        ui->biayaAsuransiLineEdit->setFocus();
    }else if (ui->biayaPackingLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Biaya Packing belum diisi");
        ui->biayaPackingLineEdit->setFocus();
    }else if (ui->beratBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Berat Barang belum diisi");
        ui->beratBarangLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM pengiriman WHERE no_resi='"+ui->noResiLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","No Resi sudah terdaftar");
            ui->kodeBarangLineEdit->setText(duplicate.value(1).toString());
            ui->tanggalPengirimanDateEdit->setDate(duplicate.value(2).toDate());
            ui->iDPegawaiLineEdit->setText(duplicate.value(3).toString());
            ui->iDPelangganLineEdit->setText(duplicate.value(4).toString());
            ui->tanggalDiterimaDateEdit->setDate(duplicate.value(5).toDate());
            ui->namaPenerimaLineEdit->setText(duplicate.value(6).toString());
            ui->alamatTujuanPenerimaLineEdit->setText(duplicate.value(7).toString());
            ui->telpPenerimaLineEdit->setText(duplicate.value(8).toString());
            ui->iDTarifLineEdit->setText(duplicate.value(9).toString());
            ui->biayaPackingLineEdit->setText(duplicate.value(10).toString());
            ui->biayaAsuransiLineEdit->setText(duplicate.value(11).toString());
            ui->beratBarangLineEdit->setText(duplicate.value(12).toString());
            ui->totalBiayaLineEdit->setText(duplicate.value(13).toString());
        }else{
            uji.getbiayaPacking(ui->biayaPackingLineEdit->text().toInt());
            uji.getbiayaAsuransi(ui->biayaAsuransiLineEdit->text().toInt());

            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO pengiriman (no_resi,kode_barang,tgl_pengiriman, id_pegawai,id_pelanggan, "
                "tgl_diterima, nama_penerima, alamat_penerima, telp_penerima, id_tarif, biaya_packing, biaya_asuransi, berat_barang, total_biaya)"
                "VALUE(:no_resi, :kode_barang, :tgl_pengiriman, :id_pegawai, :id_pelanggan, :tgl_diterima, "
                ":nama_penerima, :alamat_penerima, :telp_penerima, :id_tarif, :biaya_packing, :biaya_asuransi, :berat_barang, :total_biaya)");
            sql.bindValue(":no_resi",ui->noResiLineEdit->text());
            sql.bindValue(":kode_barang",ui->kodeBarangLineEdit->text());
            sql.bindValue(":tgl_pengiriman",ui->tanggalPengirimanDateEdit->date());
            sql.bindValue(":id_pegawai",ui->iDPegawaiLineEdit->text());
            sql.bindValue(":id_pelanggan",ui->iDPelangganLineEdit->text());
            sql.bindValue(":tgl_diterima",ui->tanggalDiterimaDateEdit->date());
            sql.bindValue(":nama_penerima",ui->namaPenerimaLineEdit->text());
            sql.bindValue(":alamat_penerima",ui->alamatTujuanPenerimaLineEdit->text());
            sql.bindValue(":telp_penerima",ui->telpPenerimaLineEdit->text());
            sql.bindValue(":id_tarif",ui->iDTarifLineEdit->text());
            sql.bindValue(":biaya_packing",ui->biayaPackingLineEdit->text().toInt());
            sql.bindValue(":biaya_asuransi",ui->biayaAsuransiLineEdit->text().toInt());
            sql.bindValue(":berat_barang",ui->beratBarangLineEdit->text());
            sql.bindValue(":total_biaya",uji.TotalBiaya());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormPengiriman::on_pushButton_2_clicked()
{
    uji.getbiayaPacking(ui->biayaPackingLineEdit->text().toInt());
    uji.getbiayaAsuransi(ui->biayaAsuransiLineEdit->text().toInt());

    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE pengiriman SET kode_barang=:kode_barang, tgl_pengiriman=:tgl_pengiriman, id_pegawai=:id_pegawai,"
                "id_pelanggan=:id_pelanggan, tgl_diterima=:tgl_diterima, nama_penerima=:nama_penerima,"
                "alamat_penerima=:alamat_penerima, telp_penerima=:telp_penerima, id_tarif=:id_tarif, biaya_packing=:biaya_packing,"
                "biaya_asuransi=:biaya_asuransi, berat_barang=:berat_barang, total_biaya=:total_biaya where no_resi=:no_resi");
    sql.bindValue(":no_resi",ui->noResiLineEdit->text());
    sql.bindValue(":kode_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":tgl_pengiriman",ui->tanggalPengirimanDateEdit->date());
    sql.bindValue(":id_pegawai",ui->iDPegawaiLineEdit->text());
    sql.bindValue(":id_pelanggan",ui->iDPelangganLineEdit->text());
    sql.bindValue(":tgl_diterima",ui->tanggalDiterimaDateEdit->date());
    sql.bindValue(":nama_penerima",ui->namaPenerimaLineEdit->text());
    sql.bindValue(":alamat_penerima",ui->alamatTujuanPenerimaLineEdit->text());
    sql.bindValue(":telp_penerima",ui->telpPenerimaLineEdit->text());
    sql.bindValue(":id_tarif",ui->iDTarifLineEdit->text());
    sql.bindValue(":biaya_packing",ui->biayaPackingLineEdit->text().toInt());
    sql.bindValue(":biaya_asuransi",ui->biayaAsuransiLineEdit->text().toInt());
    sql.bindValue(":berat_barang",ui->beratBarangLineEdit->text());
    sql.bindValue(":total_biaya",uji.TotalBiaya());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPengiriman::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pengiriman WHERE no_resi=:no_resi");
    sql.bindValue(":no_resi",ui->noResiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPengiriman::on_tablePengiriman_activated(const QModelIndex &index)
{
    int baris=ui->tablePengiriman->currentIndex().row();
    ui->noResiLineEdit->setText(ui->tablePengiriman->model()->index(baris, 0).data().toString());
    ui->kodeBarangLineEdit->setText(ui->tablePengiriman->model()->index(baris, 1).data().toString());
    ui->tanggalPengirimanDateEdit->setDate(ui->tablePengiriman->model()->index(baris, 2).data().toDate());
    ui->iDPegawaiLineEdit->setText(ui->tablePengiriman->model()->index(baris, 3).data().toString());
    ui->iDPelangganLineEdit->setText(ui->tablePengiriman->model()->index(baris, 4).data().toString());
    ui->tanggalDiterimaDateEdit->setDate(ui->tablePengiriman->model()->index(baris, 5).data().toDate());
    ui->namaPenerimaLineEdit->setText(ui->tablePengiriman->model()->index(baris, 6).data().toString());
    ui->alamatTujuanPenerimaLineEdit->setText(ui->tablePengiriman->model()->index(baris, 7).data().toString());
    ui->telpPenerimaLineEdit->setText(ui->tablePengiriman->model()->index(baris, 8).data().toString());
    ui->iDTarifLineEdit->setText(ui->tablePengiriman->model()->index(baris, 9).data().toString());
    ui->biayaAsuransiLineEdit->setText(ui->tablePengiriman->model()->index(baris, 10).data().toString());
    ui->biayaPackingLineEdit->setText(ui->tablePengiriman->model()->index(baris, 11).data().toString());
    ui->beratBarangLineEdit->setText(ui->tablePengiriman->model()->index(baris, 12).data().toString());
    ui->totalBiayaLineEdit->setText(ui->tablePengiriman->model()->index(baris, 13).data().toString());
}


#include "formbarang.h"
#include "ui_formbarang.h"
#include "QMessageBox"

FormBarang::FormBarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBarang)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_ekspedisi");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }

    loadTabelBarang();
}

void FormBarang::loadTabelBarang()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM barang ORDER BY kode_barang ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Kode Barang"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Jenis Barang"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Jumlah Barang"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Berat Barang"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Harga Barang"));

    ui->tableBarang->setModel(tabelModel);
    ui->tableBarang->setColumnWidth(0,100);
    ui->tableBarang->setColumnWidth(1,100);
    ui->tableBarang->setColumnWidth(2,100);
    ui->tableBarang->setColumnWidth(3,100);
    ui->tableBarang->setColumnWidth(4,100);
    ui->tableBarang->setColumnWidth(5,100);
    ui->tableBarang->show();
}

FormBarang::~FormBarang()
{
    delete ui;
}

void FormBarang::on_pushButton_clicked()
{
    if(ui->kodeBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kode Barang belum diisi");
        ui->kodeBarangLineEdit->setFocus();

    }else if (ui->namaBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Barang belum diisi");
        ui->namaBarangLineEdit->setFocus();
    }else if (ui->jenisBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jenis Barang belum diisi");
        ui->jenisBarangLineEdit->setFocus();
    }else if (ui->jumlahBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jumlah Barang belum diisi");
        ui->jumlahBarangLineEdit->setFocus();
    }else if (ui->beratBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Berat Barang belum diisi");
        ui->beratBarangLineEdit->setFocus();
    }else if (ui->hargaBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Harga Barang belum diisi");
        ui->hargaBarangLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM barang WHERE kode_barang='"+ui->kodeBarangLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","Kode Barang sudah terdaftar");
            ui->namaBarangLineEdit->setText(duplicate.value(1).toString());
            ui->jenisBarangLineEdit->setText(duplicate.value(2).toString());
            ui->jumlahBarangLineEdit->setText(duplicate.value(3).toString());
            ui->beratBarangLineEdit->setText(duplicate.value(4).toString());
            ui->hargaBarangLineEdit->setText(duplicate.value(5).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO barang (kode_barang,nama_barang,jenis_barang,jml_barang,berat_barang,harga_barang)"
                "VALUE(:kode_barang,:nama_barang,:jenis_barang,:jml_barang,:berat_barang,:harga_barang)");
            sql.bindValue(":kode_barang",ui->kodeBarangLineEdit->text());
            sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
            sql.bindValue(":jenis_barang",ui->jenisBarangLineEdit->text());
            sql.bindValue(":jml_barang",ui->jumlahBarangLineEdit->text());
            sql.bindValue(":berat_barang",ui->beratBarangLineEdit->text());
            sql.bindValue(":harga_barang",ui->hargaBarangLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                 qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormBarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM barang WHERE kode_barang=:kode_barang");
    sql.bindValue(":kode_barang",ui->kodeBarangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE barang SET nama_barang=:nama_barang, jenis_barang=:jenis_barang, jml_barang=:jml_barang, "
                "berat_barang=:berat_barang, harga_barang=:harga_barang where kode_barang=:kode_barang");
    sql.bindValue(":kode_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
    sql.bindValue(":jenis_barang",ui->jenisBarangLineEdit->text());
    sql.bindValue(":jml_barang",ui->jumlahBarangLineEdit->text());
    sql.bindValue(":berat_barang",ui->beratBarangLineEdit->text());
    sql.bindValue(":harga_barang",ui->hargaBarangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_tableBarang_activated(const QModelIndex &index)
{
    int baris=ui->tableBarang->currentIndex().row();
    ui->kodeBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 0).data().toString());
    ui->namaBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 1).data().toString());
    ui->jenisBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 2).data().toString());
    ui->jumlahBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 3).data().toString());
    ui->beratBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 4).data().toString());
    ui->hargaBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 5).data().toString());
}


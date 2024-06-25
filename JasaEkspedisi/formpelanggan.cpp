#include "formpelanggan.h"
#include "ui_formpelanggan.h"
#include "QMessageBox"

FormPelanggan::FormPelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelanggan)
{
    ui->setupUi(this);

    loadTabelPelanggan();
}

void FormPelanggan::loadTabelPelanggan()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM pelanggan ORDER BY id_pelanggan ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Pelanggan"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Pelanggan"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Alamat Pelanggan"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Telp Pelanggan"));

    ui->tablePelanggan->setModel(tabelModel);
    ui->tablePelanggan->setColumnWidth(0,100);
    ui->tablePelanggan->setColumnWidth(1,100);
    ui->tablePelanggan->setColumnWidth(2,120);
    ui->tablePelanggan->setColumnWidth(3,100);
    ui->tablePelanggan->show();
}

FormPelanggan::~FormPelanggan()
{
    delete ui;
}

void FormPelanggan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pelanggan WHERE id_pelanggan=:id_pelanggan");
    sql.bindValue(":id_pelanggan",ui->iDPelangganLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE pelanggan SET nama_pelanggan=:nama_pelanggan, alamat_pelanggan=:alamat_pelanggan, telp_pelanggan=:telp_pelanggan "
                "where id_pelanggan=:id_pelanggan");
    sql.bindValue(":id_pelanggan",ui->iDPelangganLineEdit->text());
    sql.bindValue(":nama_pelanggan",ui->namaPelangganLineEdit->text());
    sql.bindValue(":alamat_pelanggan",ui->alamatPelangganLineEdit->text());
    sql.bindValue(":telp_pelanggan",ui->telpPelangganLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_clicked()
{
    if(ui->iDPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Pelanggan belum diisi");
        ui->iDPelangganLineEdit->setFocus();

    }else if (ui->namaPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Pelanggan belum diisi");
        ui->namaPelangganLineEdit->setFocus();
    }else if (ui->alamatPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Pelanggan belum diisi");
        ui->alamatPelangganLineEdit->setFocus();
    }else if (ui->telpPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telp Pelanggan belum diisi");
        ui->telpPelangganLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM pelanggan WHERE id_pelanggan='"+ui->iDPelangganLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Pelanggan sudah terdaftar");
            ui->namaPelangganLineEdit->setText(duplicate.value(1).toString());
            ui->alamatPelangganLineEdit->setText(duplicate.value(2).toString());
            ui->telpPelangganLineEdit->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO pelanggan (id_pelanggan,nama_pelanggan,alamat_pelanggan,telp_pelanggan)"
                "VALUE(:id_pelanggan,:nama_pelanggan,:alamat_pelanggan,:telp_pelanggan)");
            sql.bindValue(":id_pelanggan",ui->iDPelangganLineEdit->text());
            sql.bindValue(":nama_pelanggan",ui->namaPelangganLineEdit->text());
            sql.bindValue(":alamat_pelanggan",ui->alamatPelangganLineEdit->text());
            sql.bindValue(":telp_pelanggan",ui->telpPelangganLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormPelanggan::on_tablePelanggan_activated(const QModelIndex &index)
{
    int baris=ui->tablePelanggan->currentIndex().row();
    ui->iDPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 0).data().toString());
    ui->namaPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 1).data().toString());
    ui->alamatPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 2).data().toString());
    ui->telpPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 3).data().toString());
}


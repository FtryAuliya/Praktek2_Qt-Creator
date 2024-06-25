#include "formkurir.h"
#include "ui_formkurir.h"
#include "QMessageBox"

FormKurir::FormKurir(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKurir)
{
    ui->setupUi(this);

    loadTabelKurir();
}

void FormKurir::loadTabelKurir()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM kurir ORDER BY id_kurir ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Kurir"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Kurir"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Telp Kurir"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Wilayah"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Alamat Kurir"));

    ui->tableKurir->setModel(tabelModel);
    ui->tableKurir->setColumnWidth(0,100);
    ui->tableKurir->setColumnWidth(1,100);
    ui->tableKurir->setColumnWidth(2,100);
    ui->tableKurir->setColumnWidth(3,130);
    ui->tableKurir->setColumnWidth(4,130);
    ui->tableKurir->show();
}

FormKurir::~FormKurir()
{
    delete ui;
}

void FormKurir::on_pushButton_clicked()
{
    if(ui->iDKurirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Kurir belum diisi");
        ui->iDKurirLineEdit->setFocus();

    }else if (ui->namaKurirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Kurir belum diisi");
        ui->namaKurirLineEdit->setFocus();
    }else if (ui->telpKurirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telp Kurir belum diisi");
        ui->telpKurirLineEdit->setFocus();
    }else if (ui->wilayahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Wilayah belum diisi");
        ui->wilayahLineEdit->setFocus();
    }else if (ui->alamatKurirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Kurir belum diisi");
        ui->alamatKurirLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM kurir WHERE id_kurir='"+ui->iDKurirLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Kurir sudah terdaftar");
            ui->namaKurirLineEdit->setText(duplicate.value(1).toString());
            ui->telpKurirLineEdit->setText(duplicate.value(2).toString());
            ui->wilayahLineEdit->setText(duplicate.value(3).toString());
            ui->alamatKurirLineEdit->setText(duplicate.value(4).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO kurir (id_kurir,nama_kurir,telp_kurir,wilayah,alamat_kurir)"
                "VALUE(:id_kurir,:nama_kurir,:telp_kurir,:wilayah,:alamat_kurir)");
            sql.bindValue(":id_kurir",ui->iDKurirLineEdit->text());
            sql.bindValue(":nama_kurir",ui->namaKurirLineEdit->text());
            sql.bindValue(":telp_kurir",ui->telpKurirLineEdit->text());
            sql.bindValue(":wilayah",ui->wilayahLineEdit->text());
            sql.bindValue(":alamat_kurir",ui->alamatKurirLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
             }
        }
    }
}


void FormKurir::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE kurir SET nama_kurir=:nama_kurir, telp_kurir=:telp_kurir, wilayah=:wilayah, alamat_kurir=:alamat_kurir where id_kurir=:id_kurir");
    sql.bindValue(":id_kurir",ui->iDKurirLineEdit->text());
    sql.bindValue(":nama_kurir",ui->namaKurirLineEdit->text());
    sql.bindValue(":telp_kurir",ui->telpKurirLineEdit->text());
    sql.bindValue(":wilayah",ui->wilayahLineEdit->text());
    sql.bindValue(":alamat_kurir",ui->alamatKurirLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKurir::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM kurir WHERE id_kurir=:id_kurir");
    sql.bindValue(":id_kurir",ui->iDKurirLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKurir::on_tableKurir_activated(const QModelIndex &index)
{
    int baris=ui->tableKurir->currentIndex().row();
    ui->iDKurirLineEdit->setText(ui->tableKurir->model()->index(baris, 0).data().toString());
    ui->namaKurirLineEdit->setText(ui->tableKurir->model()->index(baris, 1).data().toString());
    ui->telpKurirLineEdit->setText(ui->tableKurir->model()->index(baris, 2).data().toString());
    ui->wilayahLineEdit->setText(ui->tableKurir->model()->index(baris, 3).data().toString());
    ui->alamatKurirLineEdit->setText(ui->tableKurir->model()->index(baris, 4).data().toString());
}


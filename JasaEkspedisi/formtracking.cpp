#include "formtracking.h"
#include "ui_formtracking.h"
#include "QMessageBox"

FormTracking::FormTracking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormTracking)
{
    ui->setupUi(this);

    loadTabelTracking();
}

void FormTracking::loadTabelTracking()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tracking ORDER BY id_tracking ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Tracking"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("No Resi"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("ID Kurir"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Tanggal Kirim"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Tanggal Sampai"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Status Kirim"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Keterangan"));

    ui->tableTracking->setModel(tabelModel);
    ui->tableTracking->setColumnWidth(0,100);
    ui->tableTracking->setColumnWidth(1,100);
    ui->tableTracking->setColumnWidth(2,100);
    ui->tableTracking->setColumnWidth(3,100);
    ui->tableTracking->setColumnWidth(4,100);
    ui->tableTracking->setColumnWidth(5,130);
    ui->tableTracking->setColumnWidth(6,100);
    ui->tableTracking->show();
}

FormTracking::~FormTracking()
{
    delete ui;
}

void FormTracking::on_pushButton_clicked()
{
    if(ui->iDTrackingLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Tracking belum diisi");
        ui->iDTrackingLineEdit->setFocus();

    }else if (ui->noResiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","No Resi belum diisi");
        ui->noResiLineEdit->setFocus();
    }else if (ui->iDKurirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Kurir belum diisi");
        ui->iDKurirLineEdit->setFocus();
    }else if (ui->tanggalKirimDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Kirim belum diisi");
        ui->tanggalKirimDateEdit->setFocus();
    }else if (ui->tanggalSampaiDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Sampai belum diisi");
        ui->tanggalSampaiDateEdit->setFocus();
    }else if (ui->statusKirimLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Status Kirim belum diisi");
        ui->statusKirimLineEdit->setFocus();
    }else if (ui->keteranganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Keterangan belum diisi");
        ui->keteranganLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tracking WHERE id_tracking='"+ui->iDTrackingLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Tracking sudah terdaftar");
            ui->noResiLineEdit->setText(duplicate.value(1).toString());
            ui->iDKurirLineEdit->setText(duplicate.value(2).toString());
            ui->tanggalKirimDateEdit->setDate(duplicate.value(3).toDate());
            ui->tanggalSampaiDateEdit->setDate(duplicate.value(4).toDate());
            ui->statusKirimLineEdit->setText(duplicate.value(5).toString());
            ui->keteranganLineEdit->setText(duplicate.value(6).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO tracking (id_tracking,no_resi,id_kurir,tgl_kirim,tgl_sampai,status_kirim,ket)"
                "VALUE(:id_tracking,:no_resi,:id_kurir,:tgl_kirim,:tgl_sampai,:status_kirim,:ket)");
            sql.bindValue(":id_tracking",ui->iDTrackingLineEdit->text());
            sql.bindValue(":no_resi",ui->noResiLineEdit->text());
            sql.bindValue(":id_kurir",ui->iDKurirLineEdit->text());
            sql.bindValue(":tgl_kirim",ui->tanggalKirimDateEdit->date());
            sql.bindValue(":tgl_sampai",ui->tanggalSampaiDateEdit->date());
            sql.bindValue(":status_kirim",ui->statusKirimLineEdit->text());
            sql.bindValue(":ket",ui->keteranganLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}

void FormTracking::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE tracking SET no_resi=:no_resi, id_kurir=:id_kurir, tgl_kirim=:tgl_kirim, "
                "tgl_sampai=:tgl_sampai, status_kirim=:status_kirim, ket=:ket where id_tracking=:id_tracking");
    sql.bindValue(":id_tracking",ui->iDTrackingLineEdit->text());
    sql.bindValue(":no_resi",ui->noResiLineEdit->text());
    sql.bindValue(":id_kurir",ui->iDKurirLineEdit->text());
    sql.bindValue(":tgl_kirim",ui->tanggalKirimDateEdit->date());
    sql.bindValue(":tgl_sampai",ui->tanggalSampaiDateEdit->date());
    sql.bindValue(":status_kirim",ui->statusKirimLineEdit->text());
    sql.bindValue(":ket",ui->keteranganLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTracking::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM tracking WHERE id_tracking=:id_tracking");
    sql.bindValue(":id_tracking",ui->iDTrackingLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTracking::on_tableTracking_activated(const QModelIndex &index)
{
    int baris=ui->tableTracking->currentIndex().row();
    ui->iDTrackingLineEdit->setText(ui->tableTracking->model()->index(baris, 0).data().toString());
    ui->noResiLineEdit->setText(ui->tableTracking->model()->index(baris, 1).data().toString());
    ui->iDKurirLineEdit->setText(ui->tableTracking->model()->index(baris, 2).data().toString());
    ui->tanggalKirimDateEdit->setDate(ui->tableTracking->model()->index(baris, 3).data().toDate());
    ui->tanggalSampaiDateEdit->setDate(ui->tableTracking->model()->index(baris, 4).data().toDate());
    ui->statusKirimLineEdit->setText(ui->tableTracking->model()->index(baris, 5).data().toString());
    ui->keteranganLineEdit->setText(ui->tableTracking->model()->index(baris, 6).data().toString());
}


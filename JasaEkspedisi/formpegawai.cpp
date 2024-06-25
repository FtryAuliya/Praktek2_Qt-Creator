#include "formpegawai.h"
#include "ui_formpegawai.h"
#include "QMessageBox"

FormPegawai::FormPegawai(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPegawai)
{
    ui->setupUi(this);

    loadTabelPegawai();
}

void FormPegawai::loadTabelPegawai()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM pegawai ORDER BY id_pegawai ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Pegawai"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Pegawai"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Alamat Pegawai"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Telp Pegawai"));

    ui->tablePegawai->setModel(tabelModel);
    ui->tablePegawai->setColumnWidth(0,100);
    ui->tablePegawai->setColumnWidth(1,100);
    ui->tablePegawai->setColumnWidth(2,120);
    ui->tablePegawai->setColumnWidth(3,100);
    ui->tablePegawai->show();
}

FormPegawai::~FormPegawai()
{
    delete ui;
}

void FormPegawai::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pegawai WHERE id_pegawai=:id_pegawai");
    sql.bindValue(":id_pegawai",ui->iDPegawaiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPegawai::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE pegawai SET nama_pegawai=:nama_pegawai, alamat_pegawai=:alamat_pegawai, telp_pegawai=:telp_pegawai "
                "where id_pegawai=:id_pegawai");
    sql.bindValue(":id_pegawai",ui->iDPegawaiLineEdit->text());
    sql.bindValue(":nama_pegawai",ui->namaPegawaiLineEdit->text());
    sql.bindValue(":alamat_pegawai",ui->alamatPegawaiLineEdit->text());
    sql.bindValue(":telp_pegawai",ui->telpPegawaiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPegawai::on_pushButton_clicked()
{
    if(ui->iDPegawaiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Pegawai belum diisi");
        ui->iDPegawaiLineEdit->setFocus();

    }else if (ui->namaPegawaiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Pegawai belum diisi");
        ui->namaPegawaiLineEdit->setFocus();
    }else if (ui->alamatPegawaiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Pegawai belum diisi");
        ui->alamatPegawaiLineEdit->setFocus();
    }else if (ui->telpPegawaiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telp Pegawai belum diisi");
        ui->telpPegawaiLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM pegawai WHERE id_pegawai='"+ui->iDPegawaiLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Pegawai sudah terdaftar");
            ui->namaPegawaiLineEdit->setText(duplicate.value(1).toString());
            ui->alamatPegawaiLineEdit->setText(duplicate.value(2).toString());
            ui->telpPegawaiLineEdit->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO pegawai (id_pegawai,nama_pegawai,alamat_pegawai,telp_pegawai)"
                "VALUE(:id_pegawai,:nama_pegawai,:alamat_pegawai,:telp_pegawai)");
            sql.bindValue(":id_pegawai",ui->iDPegawaiLineEdit->text());
            sql.bindValue(":nama_pegawai",ui->namaPegawaiLineEdit->text());
            sql.bindValue(":alamat_pegawai",ui->alamatPegawaiLineEdit->text());
            sql.bindValue(":telp_pegawai",ui->telpPegawaiLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormPegawai::on_tablePegawai_activated(const QModelIndex &index)
{
    int baris=ui->tablePegawai->currentIndex().row();
    ui->iDPegawaiLineEdit->setText(ui->tablePegawai->model()->index(baris, 0).data().toString());
    ui->namaPegawaiLineEdit->setText(ui->tablePegawai->model()->index(baris, 1).data().toString());
    ui->alamatPegawaiLineEdit->setText(ui->tablePegawai->model()->index(baris, 2).data().toString());
    ui->telpPegawaiLineEdit->setText(ui->tablePegawai->model()->index(baris, 3).data().toString());
}


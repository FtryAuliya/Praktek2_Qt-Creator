#include "formtarif.h"
#include "ui_formtarif.h"
#include "QMessageBox"

FormTarif::FormTarif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormTarif)
{
    ui->setupUi(this);

    loadTabelTarif();
}

void FormTarif::loadTabelTarif()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tarif ORDER BY id_tarif ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Tarif"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Asal"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Tujuan"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Biaya Tarif"));

    ui->tableTarif->setModel(tabelModel);
    ui->tableTarif->setColumnWidth(0,100);
    ui->tableTarif->setColumnWidth(1,100);
    ui->tableTarif->setColumnWidth(2,100);
    ui->tableTarif->setColumnWidth(3,100);
    ui->tableTarif->show();
}

FormTarif::~FormTarif()
{
    delete ui;
}

void FormTarif::on_pushButton_clicked()
{
    if(ui->iDTarifLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Tarif belum diisi");
        ui->iDTarifLineEdit->setFocus();

    }else if (ui->asalLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Asal Pengirim belum diisi");
        ui->asalLineEdit->setFocus();
    }else if (ui->tujuanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tujuan belum diisi");
        ui->tujuanLineEdit->setFocus();
    }else if (ui->biayaTarifLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Biaya Tarif belum diisi");
        ui->biayaTarifLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tarif WHERE id_tarif='"+ui->iDTarifLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Tarif sudah terdaftar");
            ui->asalLineEdit->setText(duplicate.value(1).toString());
            ui->tujuanLineEdit->setText(duplicate.value(2).toString());
            ui->biayaTarifLineEdit->setText(duplicate.value(3).toString());
        }else{
            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO tarif (id_tarif,asal,tujuan,biaya_tarif)"
                "VALUE(:id_tarif,:asal,:tujuan,:biaya_tarif)");
            sql.bindValue(":id_tarif",ui->iDTarifLineEdit->text());
            sql.bindValue(":asal",ui->asalLineEdit->text());
            sql.bindValue(":tujuan",ui->tujuanLineEdit->text());
            sql.bindValue(":biaya_tarif",ui->biayaTarifLineEdit->text());


            if (sql.exec()){
                qDebug()<<"Data Berhasil Disimpan";
                QMessageBox::information(this, "warning", "Data Berhasil Di Simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormTarif::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE tarif SET asal=:asal, tujuan=:tujuan, biaya_tarif=:biaya_tarif "
                "where id_tarif=:id_tarif");
    sql.bindValue(":id_tarif",ui->iDTarifLineEdit->text());
    sql.bindValue(":asal",ui->asalLineEdit->text());
    sql.bindValue(":tujuan",ui->tujuanLineEdit->text());
    sql.bindValue(":biaya_tarif",ui->biayaTarifLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
        QMessageBox::information(this, "warning", "Data Berhasil Di Ubah");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTarif::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM tarif WHERE id_tarif=:id_tarif");
    sql.bindValue(":id_tarif",ui->iDTarifLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTarif::on_tableTarif_activated(const QModelIndex &index)
{
    int baris=ui->tableTarif->currentIndex().row();
    ui->iDTarifLineEdit->setText(ui->tableTarif->model()->index(baris, 0).data().toString());
    ui->asalLineEdit->setText(ui->tableTarif->model()->index(baris, 1).data().toString());
    ui->tujuanLineEdit->setText(ui->tableTarif->model()->index(baris, 2).data().toString());
    ui->biayaTarifLineEdit->setText(ui->tableTarif->model()->index(baris, 3).data().toString());
}


#ifndef FORMPEGAWAI_H
#define FORMPEGAWAI_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormPegawai;
}

class FormPegawai : public QWidget
{
    Q_OBJECT

public:
    explicit FormPegawai(QWidget *parent = nullptr);
    void loadTabelPegawai();
    ~FormPegawai();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tablePegawai_activated(const QModelIndex &index);

private:
    Ui::FormPegawai *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMPEGAWAI_H

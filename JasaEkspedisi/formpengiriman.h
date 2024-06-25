#ifndef FORMPENGIRIMAN_H
#define FORMPENGIRIMAN_H

#include <QWidget>
#include <biaya.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormPengiriman;
}

class FormPengiriman : public QWidget
{
    Q_OBJECT

public:
    explicit FormPengiriman(QWidget *parent = nullptr);
    void loadTabelPengiriman();
    ~FormPengiriman();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tablePengiriman_activated(const QModelIndex &index);

private:
    Ui::FormPengiriman *ui;
    biaya uji;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMPENGIRIMAN_H

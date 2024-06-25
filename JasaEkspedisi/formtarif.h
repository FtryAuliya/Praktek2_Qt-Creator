#ifndef FORMTARIF_H
#define FORMTARIF_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormTarif;
}

class FormTarif : public QWidget
{
    Q_OBJECT

public:
    explicit FormTarif(QWidget *parent = nullptr);
    void loadTabelTarif();
    ~FormTarif();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableTarif_activated(const QModelIndex &index);

private:
    Ui::FormTarif *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMTARIF_H

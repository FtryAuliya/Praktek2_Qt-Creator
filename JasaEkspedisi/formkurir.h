#ifndef FORMKURIR_H
#define FORMKURIR_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormKurir;
}

class FormKurir : public QWidget
{
    Q_OBJECT

public:
    explicit FormKurir(QWidget *parent = nullptr);
    void loadTabelKurir();
    ~FormKurir();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableKurir_activated(const QModelIndex &index);

private:
    Ui::FormKurir *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMKURIR_H

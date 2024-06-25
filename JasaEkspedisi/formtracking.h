#ifndef FORMTRACKING_H
#define FORMTRACKING_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormTracking;
}

class FormTracking : public QWidget
{
    Q_OBJECT

public:
    explicit FormTracking(QWidget *parent = nullptr);
    void loadTabelTracking();
    ~FormTracking();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableTracking_activated(const QModelIndex &index);

private:
    Ui::FormTracking *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMTRACKING_H

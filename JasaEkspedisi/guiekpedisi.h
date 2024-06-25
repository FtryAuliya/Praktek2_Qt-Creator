#ifndef GUIEKPEDISI_H
#define GUIEKPEDISI_H

#include <QWidget>

namespace Ui {
class guiEkpedisi;
}

class guiEkpedisi : public QWidget
{
    Q_OBJECT

public:
    explicit guiEkpedisi(QWidget *parent = nullptr);
    ~guiEkpedisi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guiEkpedisi *ui;
};

#endif // GUIEKPEDISI_H

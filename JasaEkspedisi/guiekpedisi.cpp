#include "guiekpedisi.h"
#include "ui_guiekpedisi.h"

guiEkpedisi::guiEkpedisi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::guiEkpedisi)
{
    ui->setupUi(this);
    myForm = new FormBarang;
}

guiEkpedisi::~guiEkpedisi()
{
    delete ui;
}

void guiEkpedisi::on_pushButton_clicked()
{
    myForm->show();
}


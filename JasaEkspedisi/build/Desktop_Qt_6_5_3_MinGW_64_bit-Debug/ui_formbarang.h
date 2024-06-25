/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBarang
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *jenisBarangLabel;
    QLineEdit *jenisBarangLineEdit;
    QLabel *jumlahBarangLabel;
    QLineEdit *jumlahBarangLineEdit;
    QLabel *beratBarangLabel;
    QLineEdit *beratBarangLineEdit;
    QLabel *hargaBarangLabel;
    QLineEdit *hargaBarangLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormBarang)
    {
        if (FormBarang->objectName().isEmpty())
            FormBarang->setObjectName("FormBarang");
        FormBarang->resize(570, 392);
        formGroupBox = new QGroupBox(FormBarang);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(70, 30, 371, 211));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        kodeBarangLabel = new QLabel(formGroupBox);
        kodeBarangLabel->setObjectName("kodeBarangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kodeBarangLabel);

        kodeBarangLineEdit = new QLineEdit(formGroupBox);
        kodeBarangLineEdit->setObjectName("kodeBarangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kodeBarangLineEdit);

        namaBarangLabel = new QLabel(formGroupBox);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formGroupBox);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaBarangLineEdit);

        jenisBarangLabel = new QLabel(formGroupBox);
        jenisBarangLabel->setObjectName("jenisBarangLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jenisBarangLabel);

        jenisBarangLineEdit = new QLineEdit(formGroupBox);
        jenisBarangLineEdit->setObjectName("jenisBarangLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jenisBarangLineEdit);

        jumlahBarangLabel = new QLabel(formGroupBox);
        jumlahBarangLabel->setObjectName("jumlahBarangLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, jumlahBarangLabel);

        jumlahBarangLineEdit = new QLineEdit(formGroupBox);
        jumlahBarangLineEdit->setObjectName("jumlahBarangLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, jumlahBarangLineEdit);

        beratBarangLabel = new QLabel(formGroupBox);
        beratBarangLabel->setObjectName("beratBarangLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, beratBarangLabel);

        beratBarangLineEdit = new QLineEdit(formGroupBox);
        beratBarangLineEdit->setObjectName("beratBarangLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, beratBarangLineEdit);

        hargaBarangLabel = new QLabel(formGroupBox);
        hargaBarangLabel->setObjectName("hargaBarangLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, hargaBarangLabel);

        hargaBarangLineEdit = new QLineEdit(formGroupBox);
        hargaBarangLineEdit->setObjectName("hargaBarangLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, hargaBarangLineEdit);

        pushButton = new QPushButton(FormBarang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 290, 93, 29));
        pushButton_2 = new QPushButton(FormBarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 290, 93, 29));
        pushButton_3 = new QPushButton(FormBarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 290, 93, 29));

        retranslateUi(FormBarang);

        QMetaObject::connectSlotsByName(FormBarang);
    } // setupUi

    void retranslateUi(QWidget *FormBarang)
    {
        FormBarang->setWindowTitle(QCoreApplication::translate("FormBarang", "Form", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormBarang", "Kode Barang", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormBarang", "Nama Barang", nullptr));
        jenisBarangLabel->setText(QCoreApplication::translate("FormBarang", "Jenis Barang", nullptr));
        jumlahBarangLabel->setText(QCoreApplication::translate("FormBarang", "Jumlah Barang", nullptr));
        beratBarangLabel->setText(QCoreApplication::translate("FormBarang", "Berat Barang", nullptr));
        hargaBarangLabel->setText(QCoreApplication::translate("FormBarang", "Harga Barang", nullptr));
        pushButton->setText(QCoreApplication::translate("FormBarang", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBarang", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBarang", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBarang: public Ui_FormBarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H

/********************************************************************************
** Form generated from reading UI file 'formpengiriman.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPENGIRIMAN_H
#define UI_FORMPENGIRIMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPengiriman
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *noResiLabel;
    QLineEdit *noResiLineEdit;
    QLabel *iDPegawaiLabel;
    QLineEdit *iDPegawaiLineEdit;
    QLabel *iDPelangganLabel;
    QLineEdit *iDPelangganLineEdit;
    QLabel *iDTarifLabel;
    QLineEdit *iDTarifLineEdit;
    QLabel *tanggalPengirimanLabel;
    QDateEdit *tanggalPengirimanDateEdit;
    QLabel *tanggalDiterimaLabel;
    QDateEdit *tanggalDiterimaDateEdit;
    QLabel *biayaPackingLabel;
    QLineEdit *biayaPackingLineEdit;
    QLineEdit *biayaAsuransiLineEdit;
    QLabel *totalBiayaLabel;
    QLabel *totalBiayaLabel_2;
    QLineEdit *totalBiayaLineEdit;
    QGroupBox *formGroupBox_2;
    QFormLayout *formLayout_2;
    QLabel *namaPenerimaLabel;
    QLineEdit *namaPenerimaLineEdit;
    QLabel *alamatTujuanPenerimaLabel;
    QLineEdit *alamatTujuanPenerimaLineEdit;
    QLabel *telpPenerimaLabel;
    QLineEdit *telpPenerimaLineEdit;
    QGroupBox *formGroupBox_3;
    QFormLayout *formLayout_3;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *beratBarangLabel;
    QLineEdit *beratBarangLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *FormPengiriman)
    {
        if (FormPengiriman->objectName().isEmpty())
            FormPengiriman->setObjectName("FormPengiriman");
        FormPengiriman->resize(923, 414);
        formGroupBox = new QGroupBox(FormPengiriman);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(40, 60, 341, 301));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        noResiLabel = new QLabel(formGroupBox);
        noResiLabel->setObjectName("noResiLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, noResiLabel);

        noResiLineEdit = new QLineEdit(formGroupBox);
        noResiLineEdit->setObjectName("noResiLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, noResiLineEdit);

        iDPegawaiLabel = new QLabel(formGroupBox);
        iDPegawaiLabel->setObjectName("iDPegawaiLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, iDPegawaiLabel);

        iDPegawaiLineEdit = new QLineEdit(formGroupBox);
        iDPegawaiLineEdit->setObjectName("iDPegawaiLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, iDPegawaiLineEdit);

        iDPelangganLabel = new QLabel(formGroupBox);
        iDPelangganLabel->setObjectName("iDPelangganLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, iDPelangganLabel);

        iDPelangganLineEdit = new QLineEdit(formGroupBox);
        iDPelangganLineEdit->setObjectName("iDPelangganLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, iDPelangganLineEdit);

        iDTarifLabel = new QLabel(formGroupBox);
        iDTarifLabel->setObjectName("iDTarifLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, iDTarifLabel);

        iDTarifLineEdit = new QLineEdit(formGroupBox);
        iDTarifLineEdit->setObjectName("iDTarifLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, iDTarifLineEdit);

        tanggalPengirimanLabel = new QLabel(formGroupBox);
        tanggalPengirimanLabel->setObjectName("tanggalPengirimanLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, tanggalPengirimanLabel);

        tanggalPengirimanDateEdit = new QDateEdit(formGroupBox);
        tanggalPengirimanDateEdit->setObjectName("tanggalPengirimanDateEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, tanggalPengirimanDateEdit);

        tanggalDiterimaLabel = new QLabel(formGroupBox);
        tanggalDiterimaLabel->setObjectName("tanggalDiterimaLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, tanggalDiterimaLabel);

        tanggalDiterimaDateEdit = new QDateEdit(formGroupBox);
        tanggalDiterimaDateEdit->setObjectName("tanggalDiterimaDateEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, tanggalDiterimaDateEdit);

        biayaPackingLabel = new QLabel(formGroupBox);
        biayaPackingLabel->setObjectName("biayaPackingLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, biayaPackingLabel);

        biayaPackingLineEdit = new QLineEdit(formGroupBox);
        biayaPackingLineEdit->setObjectName("biayaPackingLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, biayaPackingLineEdit);

        biayaAsuransiLineEdit = new QLineEdit(formGroupBox);
        biayaAsuransiLineEdit->setObjectName("biayaAsuransiLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, biayaAsuransiLineEdit);

        totalBiayaLabel = new QLabel(formGroupBox);
        totalBiayaLabel->setObjectName("totalBiayaLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, totalBiayaLabel);

        totalBiayaLabel_2 = new QLabel(formGroupBox);
        totalBiayaLabel_2->setObjectName("totalBiayaLabel_2");

        formLayout->setWidget(8, QFormLayout::LabelRole, totalBiayaLabel_2);

        totalBiayaLineEdit = new QLineEdit(formGroupBox);
        totalBiayaLineEdit->setObjectName("totalBiayaLineEdit");
        totalBiayaLineEdit->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, totalBiayaLineEdit);

        formGroupBox_2 = new QGroupBox(FormPengiriman);
        formGroupBox_2->setObjectName("formGroupBox_2");
        formGroupBox_2->setGeometry(QRect(490, 60, 371, 111));
        formLayout_2 = new QFormLayout(formGroupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        namaPenerimaLabel = new QLabel(formGroupBox_2);
        namaPenerimaLabel->setObjectName("namaPenerimaLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, namaPenerimaLabel);

        namaPenerimaLineEdit = new QLineEdit(formGroupBox_2);
        namaPenerimaLineEdit->setObjectName("namaPenerimaLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, namaPenerimaLineEdit);

        alamatTujuanPenerimaLabel = new QLabel(formGroupBox_2);
        alamatTujuanPenerimaLabel->setObjectName("alamatTujuanPenerimaLabel");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, alamatTujuanPenerimaLabel);

        alamatTujuanPenerimaLineEdit = new QLineEdit(formGroupBox_2);
        alamatTujuanPenerimaLineEdit->setObjectName("alamatTujuanPenerimaLineEdit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, alamatTujuanPenerimaLineEdit);

        telpPenerimaLabel = new QLabel(formGroupBox_2);
        telpPenerimaLabel->setObjectName("telpPenerimaLabel");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, telpPenerimaLabel);

        telpPenerimaLineEdit = new QLineEdit(formGroupBox_2);
        telpPenerimaLineEdit->setObjectName("telpPenerimaLineEdit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, telpPenerimaLineEdit);

        formGroupBox_3 = new QGroupBox(FormPengiriman);
        formGroupBox_3->setObjectName("formGroupBox_3");
        formGroupBox_3->setGeometry(QRect(490, 240, 371, 71));
        formLayout_3 = new QFormLayout(formGroupBox_3);
        formLayout_3->setObjectName("formLayout_3");
        kodeBarangLabel = new QLabel(formGroupBox_3);
        kodeBarangLabel->setObjectName("kodeBarangLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, kodeBarangLabel);

        kodeBarangLineEdit = new QLineEdit(formGroupBox_3);
        kodeBarangLineEdit->setObjectName("kodeBarangLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, kodeBarangLineEdit);

        beratBarangLabel = new QLabel(formGroupBox_3);
        beratBarangLabel->setObjectName("beratBarangLabel");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, beratBarangLabel);

        beratBarangLineEdit = new QLineEdit(formGroupBox_3);
        beratBarangLineEdit->setObjectName("beratBarangLineEdit");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, beratBarangLineEdit);

        pushButton = new QPushButton(FormPengiriman);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 350, 93, 29));
        pushButton_2 = new QPushButton(FormPengiriman);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 350, 93, 29));
        pushButton_3 = new QPushButton(FormPengiriman);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(780, 350, 93, 29));
        label = new QLabel(FormPengiriman);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 210, 111, 20));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(FormPengiriman);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 30, 121, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        label_2->setFont(font1);

        retranslateUi(FormPengiriman);

        QMetaObject::connectSlotsByName(FormPengiriman);
    } // setupUi

    void retranslateUi(QWidget *FormPengiriman)
    {
        FormPengiriman->setWindowTitle(QCoreApplication::translate("FormPengiriman", "Form", nullptr));
        noResiLabel->setText(QCoreApplication::translate("FormPengiriman", "No Resi", nullptr));
        iDPegawaiLabel->setText(QCoreApplication::translate("FormPengiriman", "ID Pegawai", nullptr));
        iDPelangganLabel->setText(QCoreApplication::translate("FormPengiriman", "ID Pelanggan", nullptr));
        iDTarifLabel->setText(QCoreApplication::translate("FormPengiriman", "ID Tarif", nullptr));
        tanggalPengirimanLabel->setText(QCoreApplication::translate("FormPengiriman", "Tanggal Pengiriman", nullptr));
        tanggalDiterimaLabel->setText(QCoreApplication::translate("FormPengiriman", "Tanggal Diterima", nullptr));
        biayaPackingLabel->setText(QCoreApplication::translate("FormPengiriman", "Biaya Packing", nullptr));
        totalBiayaLabel->setText(QCoreApplication::translate("FormPengiriman", "Biaya Asuransi", nullptr));
        totalBiayaLabel_2->setText(QCoreApplication::translate("FormPengiriman", "Total Biaya", nullptr));
        namaPenerimaLabel->setText(QCoreApplication::translate("FormPengiriman", "Nama Penerima", nullptr));
        alamatTujuanPenerimaLabel->setText(QCoreApplication::translate("FormPengiriman", "Alamat Tujuan / Penerima", nullptr));
        telpPenerimaLabel->setText(QCoreApplication::translate("FormPengiriman", "Telp Penerima", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormPengiriman", "Kode Barang", nullptr));
        beratBarangLabel->setText(QCoreApplication::translate("FormPengiriman", "Berat Barang", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPengiriman", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPengiriman", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPengiriman", "Hapus", nullptr));
        label->setText(QCoreApplication::translate("FormPengiriman", "DATA BARANG", nullptr));
        label_2->setText(QCoreApplication::translate("FormPengiriman", "DATA PENERIMA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPengiriman: public Ui_FormPengiriman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPENGIRIMAN_H

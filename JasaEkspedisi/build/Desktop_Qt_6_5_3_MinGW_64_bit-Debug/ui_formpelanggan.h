/********************************************************************************
** Form generated from reading UI file 'formpelanggan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPELANGGAN_H
#define UI_FORMPELANGGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPelanggan
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *iDPelangganLabel;
    QLineEdit *iDPelangganLineEdit;
    QLabel *namaPelangganLabel;
    QLineEdit *alamatPelangganLineEdit;
    QLabel *telpPelangganLabel;
    QLineEdit *telpPelangganLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormPelanggan)
    {
        if (FormPelanggan->objectName().isEmpty())
            FormPelanggan->setObjectName("FormPelanggan");
        FormPelanggan->resize(556, 296);
        formGroupBox = new QGroupBox(FormPelanggan);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(80, 40, 371, 111));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        iDPelangganLabel = new QLabel(formGroupBox);
        iDPelangganLabel->setObjectName("iDPelangganLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDPelangganLabel);

        iDPelangganLineEdit = new QLineEdit(formGroupBox);
        iDPelangganLineEdit->setObjectName("iDPelangganLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDPelangganLineEdit);

        namaPelangganLabel = new QLabel(formGroupBox);
        namaPelangganLabel->setObjectName("namaPelangganLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaPelangganLabel);

        alamatPelangganLineEdit = new QLineEdit(formGroupBox);
        alamatPelangganLineEdit->setObjectName("alamatPelangganLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatPelangganLineEdit);

        telpPelangganLabel = new QLabel(formGroupBox);
        telpPelangganLabel->setObjectName("telpPelangganLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telpPelangganLabel);

        telpPelangganLineEdit = new QLineEdit(formGroupBox);
        telpPelangganLineEdit->setObjectName("telpPelangganLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telpPelangganLineEdit);

        pushButton = new QPushButton(FormPelanggan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 200, 93, 29));
        pushButton_2 = new QPushButton(FormPelanggan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 200, 93, 29));
        pushButton_3 = new QPushButton(FormPelanggan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 200, 93, 29));

        retranslateUi(FormPelanggan);

        QMetaObject::connectSlotsByName(FormPelanggan);
    } // setupUi

    void retranslateUi(QWidget *FormPelanggan)
    {
        FormPelanggan->setWindowTitle(QCoreApplication::translate("FormPelanggan", "Form", nullptr));
        iDPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "ID Pelanggan", nullptr));
        namaPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Alamat Pelanggan", nullptr));
        telpPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Telp Pelanggan", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPelanggan", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPelanggan", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPelanggan", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPelanggan: public Ui_FormPelanggan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPELANGGAN_H

/********************************************************************************
** Form generated from reading UI file 'formkurir.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKURIR_H
#define UI_FORMKURIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormKurir
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *iDKurirLabel;
    QLineEdit *iDKurirLineEdit;
    QLabel *namaKurirLabel;
    QLineEdit *namaKurirLineEdit;
    QLabel *telpKurirLabel;
    QLineEdit *telpKurirLineEdit;
    QLabel *wilayahLabel;
    QLineEdit *wilayahLineEdit;
    QLabel *alamatKurirLabel;
    QLineEdit *alamatKurirLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormKurir)
    {
        if (FormKurir->objectName().isEmpty())
            FormKurir->setObjectName("FormKurir");
        FormKurir->resize(532, 308);
        formGroupBox = new QGroupBox(FormKurir);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(50, 20, 411, 181));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        iDKurirLabel = new QLabel(formGroupBox);
        iDKurirLabel->setObjectName("iDKurirLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDKurirLabel);

        iDKurirLineEdit = new QLineEdit(formGroupBox);
        iDKurirLineEdit->setObjectName("iDKurirLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDKurirLineEdit);

        namaKurirLabel = new QLabel(formGroupBox);
        namaKurirLabel->setObjectName("namaKurirLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaKurirLabel);

        namaKurirLineEdit = new QLineEdit(formGroupBox);
        namaKurirLineEdit->setObjectName("namaKurirLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaKurirLineEdit);

        telpKurirLabel = new QLabel(formGroupBox);
        telpKurirLabel->setObjectName("telpKurirLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telpKurirLabel);

        telpKurirLineEdit = new QLineEdit(formGroupBox);
        telpKurirLineEdit->setObjectName("telpKurirLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telpKurirLineEdit);

        wilayahLabel = new QLabel(formGroupBox);
        wilayahLabel->setObjectName("wilayahLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, wilayahLabel);

        wilayahLineEdit = new QLineEdit(formGroupBox);
        wilayahLineEdit->setObjectName("wilayahLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, wilayahLineEdit);

        alamatKurirLabel = new QLabel(formGroupBox);
        alamatKurirLabel->setObjectName("alamatKurirLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, alamatKurirLabel);

        alamatKurirLineEdit = new QLineEdit(formGroupBox);
        alamatKurirLineEdit->setObjectName("alamatKurirLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, alamatKurirLineEdit);

        pushButton = new QPushButton(FormKurir);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 230, 93, 29));
        pushButton_2 = new QPushButton(FormKurir);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 230, 93, 29));
        pushButton_3 = new QPushButton(FormKurir);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 230, 93, 29));

        retranslateUi(FormKurir);

        QMetaObject::connectSlotsByName(FormKurir);
    } // setupUi

    void retranslateUi(QWidget *FormKurir)
    {
        FormKurir->setWindowTitle(QCoreApplication::translate("FormKurir", "Form", nullptr));
        iDKurirLabel->setText(QCoreApplication::translate("FormKurir", "ID Kurir", nullptr));
        namaKurirLabel->setText(QCoreApplication::translate("FormKurir", "Nama Kurir", nullptr));
        telpKurirLabel->setText(QCoreApplication::translate("FormKurir", "Telp Kurir", nullptr));
        wilayahLabel->setText(QCoreApplication::translate("FormKurir", "Wilayah", nullptr));
        alamatKurirLabel->setText(QCoreApplication::translate("FormKurir", "Alamat Kurir", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKurir", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormKurir", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormKurir", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKurir: public Ui_FormKurir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKURIR_H

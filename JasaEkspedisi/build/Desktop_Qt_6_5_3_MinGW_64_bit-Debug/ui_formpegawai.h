/********************************************************************************
** Form generated from reading UI file 'formpegawai.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPEGAWAI_H
#define UI_FORMPEGAWAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPegawai
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *iDPegawaiLabel;
    QLineEdit *iDPegawaiLineEdit;
    QLabel *namaPegawaiLabel;
    QLineEdit *namaPegawaiLineEdit;
    QLabel *alamatPegawaiLabel;
    QLineEdit *alamatPegawaiLineEdit;
    QLabel *telpPegawaiLabel;
    QLineEdit *telpPegawaiLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormPegawai)
    {
        if (FormPegawai->objectName().isEmpty())
            FormPegawai->setObjectName("FormPegawai");
        FormPegawai->resize(545, 322);
        formGroupBox = new QGroupBox(FormPegawai);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(60, 40, 381, 141));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        iDPegawaiLabel = new QLabel(formGroupBox);
        iDPegawaiLabel->setObjectName("iDPegawaiLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDPegawaiLabel);

        iDPegawaiLineEdit = new QLineEdit(formGroupBox);
        iDPegawaiLineEdit->setObjectName("iDPegawaiLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDPegawaiLineEdit);

        namaPegawaiLabel = new QLabel(formGroupBox);
        namaPegawaiLabel->setObjectName("namaPegawaiLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaPegawaiLabel);

        namaPegawaiLineEdit = new QLineEdit(formGroupBox);
        namaPegawaiLineEdit->setObjectName("namaPegawaiLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaPegawaiLineEdit);

        alamatPegawaiLabel = new QLabel(formGroupBox);
        alamatPegawaiLabel->setObjectName("alamatPegawaiLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, alamatPegawaiLabel);

        alamatPegawaiLineEdit = new QLineEdit(formGroupBox);
        alamatPegawaiLineEdit->setObjectName("alamatPegawaiLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, alamatPegawaiLineEdit);

        telpPegawaiLabel = new QLabel(formGroupBox);
        telpPegawaiLabel->setObjectName("telpPegawaiLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, telpPegawaiLabel);

        telpPegawaiLineEdit = new QLineEdit(formGroupBox);
        telpPegawaiLineEdit->setObjectName("telpPegawaiLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, telpPegawaiLineEdit);

        pushButton = new QPushButton(FormPegawai);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 230, 93, 29));
        pushButton_2 = new QPushButton(FormPegawai);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 230, 93, 29));
        pushButton_3 = new QPushButton(FormPegawai);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(350, 230, 93, 29));

        retranslateUi(FormPegawai);

        QMetaObject::connectSlotsByName(FormPegawai);
    } // setupUi

    void retranslateUi(QWidget *FormPegawai)
    {
        FormPegawai->setWindowTitle(QCoreApplication::translate("FormPegawai", "Form", nullptr));
        iDPegawaiLabel->setText(QCoreApplication::translate("FormPegawai", "ID Pegawai", nullptr));
        namaPegawaiLabel->setText(QCoreApplication::translate("FormPegawai", "Nama Pegawai", nullptr));
        alamatPegawaiLabel->setText(QCoreApplication::translate("FormPegawai", "Alamat Pegawai", nullptr));
        telpPegawaiLabel->setText(QCoreApplication::translate("FormPegawai", "Telp Pegawai", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPegawai", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPegawai", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPegawai", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPegawai: public Ui_FormPegawai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPEGAWAI_H

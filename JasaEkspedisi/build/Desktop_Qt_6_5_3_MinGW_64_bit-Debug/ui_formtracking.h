/********************************************************************************
** Form generated from reading UI file 'formtracking.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTRACKING_H
#define UI_FORMTRACKING_H

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

class Ui_FormTracking
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *iDTrackingLabel;
    QLineEdit *iDTrackingLineEdit;
    QLabel *noResiLabel;
    QLineEdit *noResiLineEdit;
    QLabel *iDKurirLabel;
    QLineEdit *iDKurirLineEdit;
    QLabel *tanggalKirimLabel;
    QDateEdit *tanggalKirimDateEdit;
    QLabel *tanggalSampaiLabel;
    QDateEdit *tanggalSampaiDateEdit;
    QLabel *statusKirimLabel;
    QLineEdit *statusKirimLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormTracking)
    {
        if (FormTracking->objectName().isEmpty())
            FormTracking->setObjectName("FormTracking");
        FormTracking->resize(530, 372);
        formGroupBox = new QGroupBox(FormTracking);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(40, 30, 411, 241));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        iDTrackingLabel = new QLabel(formGroupBox);
        iDTrackingLabel->setObjectName("iDTrackingLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDTrackingLabel);

        iDTrackingLineEdit = new QLineEdit(formGroupBox);
        iDTrackingLineEdit->setObjectName("iDTrackingLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDTrackingLineEdit);

        noResiLabel = new QLabel(formGroupBox);
        noResiLabel->setObjectName("noResiLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, noResiLabel);

        noResiLineEdit = new QLineEdit(formGroupBox);
        noResiLineEdit->setObjectName("noResiLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, noResiLineEdit);

        iDKurirLabel = new QLabel(formGroupBox);
        iDKurirLabel->setObjectName("iDKurirLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, iDKurirLabel);

        iDKurirLineEdit = new QLineEdit(formGroupBox);
        iDKurirLineEdit->setObjectName("iDKurirLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, iDKurirLineEdit);

        tanggalKirimLabel = new QLabel(formGroupBox);
        tanggalKirimLabel->setObjectName("tanggalKirimLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, tanggalKirimLabel);

        tanggalKirimDateEdit = new QDateEdit(formGroupBox);
        tanggalKirimDateEdit->setObjectName("tanggalKirimDateEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, tanggalKirimDateEdit);

        tanggalSampaiLabel = new QLabel(formGroupBox);
        tanggalSampaiLabel->setObjectName("tanggalSampaiLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, tanggalSampaiLabel);

        tanggalSampaiDateEdit = new QDateEdit(formGroupBox);
        tanggalSampaiDateEdit->setObjectName("tanggalSampaiDateEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, tanggalSampaiDateEdit);

        statusKirimLabel = new QLabel(formGroupBox);
        statusKirimLabel->setObjectName("statusKirimLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, statusKirimLabel);

        statusKirimLineEdit = new QLineEdit(formGroupBox);
        statusKirimLineEdit->setObjectName("statusKirimLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, statusKirimLineEdit);

        keteranganLabel = new QLabel(formGroupBox);
        keteranganLabel->setObjectName("keteranganLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, keteranganLabel);

        keteranganLineEdit = new QLineEdit(formGroupBox);
        keteranganLineEdit->setObjectName("keteranganLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, keteranganLineEdit);

        pushButton = new QPushButton(FormTracking);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 310, 93, 29));
        pushButton_2 = new QPushButton(FormTracking);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 310, 93, 29));
        pushButton_3 = new QPushButton(FormTracking);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 310, 93, 29));

        retranslateUi(FormTracking);

        QMetaObject::connectSlotsByName(FormTracking);
    } // setupUi

    void retranslateUi(QWidget *FormTracking)
    {
        FormTracking->setWindowTitle(QCoreApplication::translate("FormTracking", "Form", nullptr));
        iDTrackingLabel->setText(QCoreApplication::translate("FormTracking", "ID Tracking", nullptr));
        noResiLabel->setText(QCoreApplication::translate("FormTracking", "No Resi", nullptr));
        iDKurirLabel->setText(QCoreApplication::translate("FormTracking", "ID Kurir", nullptr));
        tanggalKirimLabel->setText(QCoreApplication::translate("FormTracking", "Tanggal Kirim ", nullptr));
        tanggalSampaiLabel->setText(QCoreApplication::translate("FormTracking", "Tanggal Sampai", nullptr));
        statusKirimLabel->setText(QCoreApplication::translate("FormTracking", "Status Kirim", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("FormTracking", "Keterangan", nullptr));
        pushButton->setText(QCoreApplication::translate("FormTracking", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormTracking", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormTracking", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTracking: public Ui_FormTracking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTRACKING_H

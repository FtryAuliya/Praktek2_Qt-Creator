/********************************************************************************
** Form generated from reading UI file 'formtarif.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTARIF_H
#define UI_FORMTARIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTarif
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *iDTarifLabel;
    QLineEdit *iDTarifLineEdit;
    QLabel *asalLabel;
    QLineEdit *asalLineEdit;
    QLabel *tujuanLabel;
    QLineEdit *tujuanLineEdit;
    QLabel *biayaLabel;
    QLineEdit *biayaTarifLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormTarif)
    {
        if (FormTarif->objectName().isEmpty())
            FormTarif->setObjectName("FormTarif");
        FormTarif->resize(555, 291);
        formGroupBox = new QGroupBox(FormTarif);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(50, 30, 421, 141));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        iDTarifLabel = new QLabel(formGroupBox);
        iDTarifLabel->setObjectName("iDTarifLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDTarifLabel);

        iDTarifLineEdit = new QLineEdit(formGroupBox);
        iDTarifLineEdit->setObjectName("iDTarifLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDTarifLineEdit);

        asalLabel = new QLabel(formGroupBox);
        asalLabel->setObjectName("asalLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, asalLabel);

        asalLineEdit = new QLineEdit(formGroupBox);
        asalLineEdit->setObjectName("asalLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, asalLineEdit);

        tujuanLabel = new QLabel(formGroupBox);
        tujuanLabel->setObjectName("tujuanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, tujuanLabel);

        tujuanLineEdit = new QLineEdit(formGroupBox);
        tujuanLineEdit->setObjectName("tujuanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, tujuanLineEdit);

        biayaLabel = new QLabel(formGroupBox);
        biayaLabel->setObjectName("biayaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, biayaLabel);

        biayaTarifLineEdit = new QLineEdit(formGroupBox);
        biayaTarifLineEdit->setObjectName("biayaTarifLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, biayaTarifLineEdit);

        pushButton = new QPushButton(FormTarif);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 200, 93, 29));
        pushButton_2 = new QPushButton(FormTarif);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 200, 93, 29));
        pushButton_3 = new QPushButton(FormTarif);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 200, 93, 29));

        retranslateUi(FormTarif);

        QMetaObject::connectSlotsByName(FormTarif);
    } // setupUi

    void retranslateUi(QWidget *FormTarif)
    {
        FormTarif->setWindowTitle(QCoreApplication::translate("FormTarif", "Form", nullptr));
        iDTarifLabel->setText(QCoreApplication::translate("FormTarif", "ID Tarif", nullptr));
        asalLabel->setText(QCoreApplication::translate("FormTarif", "Asal ", nullptr));
        tujuanLabel->setText(QCoreApplication::translate("FormTarif", "Tujuan", nullptr));
        biayaLabel->setText(QCoreApplication::translate("FormTarif", "Biaya Tarif", nullptr));
        pushButton->setText(QCoreApplication::translate("FormTarif", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormTarif", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormTarif", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTarif: public Ui_FormTarif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTARIF_H

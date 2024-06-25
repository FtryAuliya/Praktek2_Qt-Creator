/********************************************************************************
** Form generated from reading UI file 'guiekpedisi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIEKPEDISI_H
#define UI_GUIEKPEDISI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiEkpedisi
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *guiEkpedisi)
    {
        if (guiEkpedisi->objectName().isEmpty())
            guiEkpedisi->setObjectName("guiEkpedisi");
        guiEkpedisi->resize(577, 300);
        pushButton = new QPushButton(guiEkpedisi);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 160, 93, 29));

        retranslateUi(guiEkpedisi);

        QMetaObject::connectSlotsByName(guiEkpedisi);
    } // setupUi

    void retranslateUi(QWidget *guiEkpedisi)
    {
        guiEkpedisi->setWindowTitle(QCoreApplication::translate("guiEkpedisi", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("guiEkpedisi", "Form Barang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guiEkpedisi: public Ui_guiEkpedisi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIEKPEDISI_H

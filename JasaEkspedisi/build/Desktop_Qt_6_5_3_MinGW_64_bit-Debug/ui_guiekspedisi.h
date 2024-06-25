/********************************************************************************
** Form generated from reading UI file 'guiekspedisi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIEKSPEDISI_H
#define UI_GUIEKSPEDISI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiEkspedisi
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *guiEkspedisi)
    {
        if (guiEkspedisi->objectName().isEmpty())
            guiEkspedisi->setObjectName("guiEkspedisi");
        guiEkspedisi->resize(698, 371);
        centralwidget = new QWidget(guiEkspedisi);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 110, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 110, 121, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 110, 131, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 110, 131, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(40, 180, 93, 29));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(160, 180, 121, 29));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(320, 180, 131, 29));
        guiEkspedisi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(guiEkspedisi);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 698, 26));
        guiEkspedisi->setMenuBar(menubar);
        statusbar = new QStatusBar(guiEkspedisi);
        statusbar->setObjectName("statusbar");
        guiEkspedisi->setStatusBar(statusbar);

        retranslateUi(guiEkspedisi);

        QMetaObject::connectSlotsByName(guiEkspedisi);
    } // setupUi

    void retranslateUi(QMainWindow *guiEkspedisi)
    {
        guiEkspedisi->setWindowTitle(QCoreApplication::translate("guiEkspedisi", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("guiEkspedisi", "Form Barang", nullptr));
        pushButton_2->setText(QCoreApplication::translate("guiEkspedisi", "Form Pegawai", nullptr));
        pushButton_3->setText(QCoreApplication::translate("guiEkspedisi", "Form Pelanggan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("guiEkspedisi", "Form Pengiriman", nullptr));
        pushButton_5->setText(QCoreApplication::translate("guiEkspedisi", "Form Kurir", nullptr));
        pushButton_6->setText(QCoreApplication::translate("guiEkspedisi", "Form Tarif", nullptr));
        pushButton_7->setText(QCoreApplication::translate("guiEkspedisi", "Form Tracking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guiEkspedisi: public Ui_guiEkspedisi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIEKSPEDISI_H

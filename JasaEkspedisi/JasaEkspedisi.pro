QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    biaya.cpp \
    formbarang.cpp \
    formkurir.cpp \
    formpegawai.cpp \
    formpelanggan.cpp \
    formpengiriman.cpp \
    formtarif.cpp \
    formtracking.cpp \
    guiekspedisi.cpp \
    main.cpp

HEADERS += \
    biaya.h \
    formbarang.h \
    formkurir.h \
    formpegawai.h \
    formpelanggan.h \
    formpengiriman.h \
    formtarif.h \
    formtracking.h \
    guiekspedisi.h

FORMS += \
    formbarang.ui \
    formkurir.ui \
    formpegawai.ui \
    formpelanggan.ui \
    formpengiriman.ui \
    formtarif.ui \
    formtracking.ui \
    guiekspedisi.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

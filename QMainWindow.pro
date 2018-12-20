#-------------------------------------------------
#
# Project created by QtCreator 2018-09-19T13:10:33
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QMainWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    subwindow.cpp \
    lastwindow.cpp

HEADERS  += mainwindow.h \
    subwindow.h \
    lastwindow.h

FORMS    += mainwindow.ui \
    subwindow.ui \
    lastwindow.ui

RESOURCES += \
    pictures.qrc

#-------------------------------------------------
#
# Project created by QtCreator 2018-09-19T13:10:33
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += sql
TARGET = QMainWindow
TEMPLATE = app
UI_DIR=../qtcreator_Footstepsmap
SOURCES += main.cpp\
        mainwindow.cpp \
    subwindow.cpp \
    lastwindow.cpp \
    user.cpp
RC_ICONS = favicon.ico
RC_FILE = logo.rc
HEADERS  += mainwindow.h \
    subwindow.h \
    lastwindow.h \
    usercontainer.h

FORMS    += mainwindow.ui \
    subwindow.ui \
    lastwindow.ui


RESOURCES += \
    src.qrc

DISTFILES += \
    image/green_round.png

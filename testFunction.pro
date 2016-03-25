#-------------------------------------------------
#
# Project created by QtCreator 2016-03-24T17:43:20
#
#-------------------------------------------------

QT       += core gui



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testFunction

    target.path = /usr/sbin

INSTALLS += target
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mythread.cpp \
    mydata.cpp

HEADERS  += mainwindow.h \
    mythread.h \
    mydata.h

FORMS    += mainwindow.ui

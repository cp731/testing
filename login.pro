#-------------------------------------------------
#
# Project created by QtCreator 2016-10-16T18:09:59
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sqlite3.c \
    profilepage.cpp

HEADERS  += mainwindow.h \
    sqlite3.h \
    profilepage.h

FORMS    += mainwindow.ui \
    profilepage.ui

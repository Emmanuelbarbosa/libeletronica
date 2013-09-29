#-------------------------------------------------
#
# Project created by QtCreator 2013-09-22T18:20:06
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Thevenin
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    libs/componente.cpp \
    libs/resistor.cpp \

HEADERS += \
    libs/componente.h \
    libs/resistor.h

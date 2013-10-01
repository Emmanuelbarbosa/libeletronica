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
    libs/fonte.cpp \
    libs/circuito.cpp \
    libs/circuitoserie.cpp \
    libs/circuitoparalelo.cpp

HEADERS += \
    libs/componente.h \
    libs/resistor.h \
    libs/fonte.h \
    libs/circuito.h \
    libs/circuitoserie.h \
    libs/circuitoparalelo.h

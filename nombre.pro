
QT -= gui
TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
QMAKE_CXXFLAGS_RELEASE += -fPIC

TARGET = testNombre

SOURCES += main.cpp \
    nombre.cpp

HEADERS += \
    nombre.h

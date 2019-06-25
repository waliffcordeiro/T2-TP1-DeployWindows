#-------------------------------------------------
#
# Project created by QtCreator 2019-05-08T07:36:22
#
#-------------------------------------------------

QT       += core gui
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SistemaIngresso
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
QMAKE_CXXFLAGS += -lpthread -ldl
LIBS +=

SOURCES += \
        source/controladora.cpp \
        source/main.cpp \
        source/viewUsuario.cpp \
        source/Entidades.cpp \
        source/Dominios.cpp \
        source/Model.cpp \
        source/ModelUsuario.cpp \
        source/ModelVendas.cpp \
        source/ModelAutenticacao.cpp \
        source/ModelEventos.cpp \
        source/Builder.cpp \
        source/viewAutenticacao.cpp \
        source/viewEventos.cpp \
        source/viewVendas.cpp \
        lib/sqlite3.c

HEADERS += \
        include/controladora.h \
        include/Entidades.h \
        include/Dominios.h \
        include/Model.h \
        include/ModelUsuario.h \
        include/ModelAutenticacao.h \
        include/ModelVendas.h \
        include/ModelEventos.h \
        include/Builder.h \
        include/viewUsuario.h \
        include/viewAutenticacao.h \
        include/viewEventos.h \
        include/viewVendas.h \
        lib/sqlite3.h

FORMS += \
        ui/controladora.ui \
        ui/viewUsuario.ui \
        ui/viewAutenticacao.ui \
        ui/viewEventos.ui \
        ui/viewVendas.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

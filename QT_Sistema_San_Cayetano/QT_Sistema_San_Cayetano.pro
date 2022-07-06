QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrador.cpp \
    cliente.cpp \
    gestorclientes.cpp \
    gestorproductos.cpp \
    gestorventas.cpp \
    main.cpp \
    mainwindow.cpp \
    producto.cpp \
    registroclientes.cpp \
    registrostock.cpp \
    venta.cpp

HEADERS += \
    administrador.h \
    cliente.h \
    gestorclientes.h \
    gestorproductos.h \
    gestorventas.h \
    mainwindow.h \
    producto.h \
    registroclientes.h \
    registrostock.h \
    venta.h

FORMS += \
    mainwindow.ui \
    registroclientes.ui \
    registrostock.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

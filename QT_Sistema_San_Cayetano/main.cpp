#include "mainwindow.h"
#include "administrador.h"
#include "basededatos.h"

#include <QDebug>
#include <QMessageBox>
#include <QApplication>
#include <QStyleFactory>
#include <QSystemTrayIcon>

#include <QFile>

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    //** agrego estilos

    app.setStyle(QStyleFactory::create("Fusion"));

    QFile styleSheetFile("../Perstfic.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);

    //** fin de estilos

     //CREO EL ADMINISTRADOR GENERAL y se lo paso a la ventana principal para que pueda operar con el.
    Administrador *administrador = new Administrador();

    MainWindow VentanaPrincipal(administrador,NULL);

    //** agrego iconos

    QIcon icon("../SanCayetanoIMG/icono.ico");
    VentanaPrincipal.setWindowIcon(icon);

    //para abajo a la derecha en windows
    QSystemTrayIcon trayIcon = new QSystemTrayIcon(&VentanaPrincipal);
    trayIcon.setIcon(icon);
    trayIcon.setVisible(true);
    trayIcon.setToolTip("San Cayetano"); // mensajito arriba al pararse sobre el icono

    //** fin de iconos

    VentanaPrincipal.show();

    auto retorno = app.exec();

    delete administrador;// libero la memoria antes de terminar el programa

    return retorno;
}

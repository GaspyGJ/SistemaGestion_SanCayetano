#include "mainwindow.h"
#include "administrador.h"
#include "basededatos.h"

#include <QDebug>
#include <QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{



    QApplication a(argc, argv);

     //CREO EL ADMINISTRADOR GENERAL y se lo paso a la ventana principal para que pueda operar con el.
    Administrador *administrador = new Administrador();

    MainWindow w(administrador,NULL);

    w.show();

    return a.exec();
}

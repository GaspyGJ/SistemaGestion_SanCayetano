#include "mainwindow.h"
#include "administrador.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    //CREO EL ADMINISTRADOR GENERAL y se lo paso a la ventana principal para que pueda operar con el.
    Administrador *administrador = new Administrador();

    QApplication a(argc, argv);
    MainWindow w(administrador,NULL);

    w.show();
    return a.exec();
}

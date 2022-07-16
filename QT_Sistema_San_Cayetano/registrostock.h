#ifndef REGISTROSTOCK_H
#define REGISTROSTOCK_H

#include <QMainWindow>
#include "administrador.h"

namespace Ui {
class RegistroStock;
}

class RegistroStock : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroStock(Administrador *administrador,QWidget *parent = nullptr);
    ~RegistroStock();

private slots:

    //Funciones con los Widgets
     void on_pushButton_5_clicked();

    //

    void rellenarTableProduct();

    void on_btn_ActualizarStock_clicked();

    void on_btn_ActualizarPrecio_clicked();

private:
     Ui::RegistroStock *uiRegistroStock;

     Administrador *administrador;

     int ultimaColumnaConDatos;

     enum Columna{
         NOMBRE ,PRECIO,CANTIDAD , FECHA_INCORPORACION
     };
};

#endif // REGISTROSTOCK_H

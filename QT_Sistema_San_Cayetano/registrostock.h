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

     void on_btn_NuevoProducto_clicked();



    //

    void UpdateComboProduct(); // toma el ultimo producto agregado y lo aniade al combo

    void UpdateTableProduct();

    //HACER
    //void actualizarTabla();// Rellenar la tabla al abrir la ventana o al modificar/eliminar algun producto.

    void on_btn_ActualizarStock_clicked();

private:
    Ui::RegistroStock *uiRegistroStock;

     Administrador *administrador;



     int ultimaColumnaConDatos;

     enum Columna{
         NOMBRE , CANTIDAD , FECHA_INCORPORACION , PROVEEDORES
     };
};

#endif // REGISTROSTOCK_H

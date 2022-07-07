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
    void on_pushButton_5_clicked();

    void on_btn_NuevoProducto_clicked();

    void add_Last_Producto_To_Tabla();

    //HACER
    void actualizarTabla();// Rellenar la tabla al abrir la ventana o al modificar/eliminar algun producto.

private:
    Ui::RegistroStock *uiRegistroStock;

     Administrador *administrador;



     int ultimaColumnaConDatos;

     enum Columna{
         NOMBRE , CANTIDAD , FECHA_INCORPORACION , PROVEEDORES
     };
};

#endif // REGISTROSTOCK_H

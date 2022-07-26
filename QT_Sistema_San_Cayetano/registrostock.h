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

    //setters
    void setValidaciones();

    void inicializarTabla();
    void rellenarTableProduct();

signals:

    void precioActualizado();


private slots:

    //eventos clicked

    void on_btn_ActualizarStock_clicked();

    void on_btn_ActualizarPrecio_clicked();

    void on_btn_Volver_clicked();

    void on_btn_GenerarPDF_Stock_clicked();

private:

    Ui::RegistroStock *uiRegistroStock; // puntero a la interfaz grafica

    Administrador *administrador;

    int ultimaFilaConDatos; //contiene la ultima fila de la tabla con datos cargados , sirve para ir cargando los datos en secuencia.

    enum Columna{
        ID,NOMBRE,PRECIO,CANTIDAD ,FECHA_INCORPORACION //enum para mejor legibilidad del ingreso de datos en la tabla
    };
};

#endif // REGISTROSTOCK_H

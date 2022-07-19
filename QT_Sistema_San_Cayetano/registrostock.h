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

    void setValidaciones();

    void inicializarTabla();

    void rellenarTableProduct();

    void on_btn_ActualizarStock_clicked();

    void on_btn_ActualizarPrecio_clicked();

    void on_btn_Volver_clicked();

private:
    Ui::RegistroStock *uiRegistroStock;

    Administrador *administrador;

    int ultimaFilaConDatos;

    enum Columna{
        ID,NOMBRE,PRECIO,CANTIDAD ,FECHA_INCORPORACION
    };
};

#endif // REGISTROSTOCK_H

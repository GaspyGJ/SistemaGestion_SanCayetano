#ifndef REGISTROCLIENTES_H
#define REGISTROCLIENTES_H

#include <QMainWindow>
#include "administrador.h"

namespace Ui {
class RegistroClientes;
}

class RegistroClientes : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroClientes(Administrador *administrador,QWidget *parent = nullptr);
    ~RegistroClientes();

    void setValidaciones();

    void inicializarTabla();

    void rellenarTableClientes();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::RegistroClientes *uiRegistroClientes;

    Administrador *administrador;

    int ultimaFilaConDatos;

    enum Columna{
       ID,NOMBRE,DIRECCION,TELEFONO
    };

};

#endif // REGISTROCLIENTES_H

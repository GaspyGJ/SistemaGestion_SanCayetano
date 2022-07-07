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

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::RegistroClientes *uiRegistroClientes;

    Administrador *administrador;
};

#endif // REGISTROCLIENTES_H

#ifndef NUEVOPRODUCTO_H
#define NUEVOPRODUCTO_H

#include <QMainWindow>
#include "administrador.h"

namespace Ui {
class NuevoProducto;
}

class NuevoProducto : public QMainWindow
{
    Q_OBJECT

public:
    explicit NuevoProducto(Administrador *administrador,QWidget *parent = nullptr);
    ~NuevoProducto();

private slots:
    void on_btn_cancelar_clicked();

    void on_btn_Aceptar_clicked();

private:
    Ui::NuevoProducto *ui;
    Administrador *administrador;
};

#endif // NUEVOPRODUCTO_H

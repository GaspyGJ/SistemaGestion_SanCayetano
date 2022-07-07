#include "nuevoproducto.h"
#include "ui_nuevoproducto.h"

NuevoProducto::NuevoProducto(Administrador *administrador,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NuevoProducto)
{
    ui->setupUi(this);

    this->administrador=administrador;

}

NuevoProducto::~NuevoProducto()
{
    delete ui;
}

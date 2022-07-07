#include "nuevoproducto.h"
#include "ui_nuevoproducto.h"

NuevoProducto::NuevoProducto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NuevoProducto)
{
    ui->setupUi(this);
}

NuevoProducto::~NuevoProducto()
{
    delete ui;
}

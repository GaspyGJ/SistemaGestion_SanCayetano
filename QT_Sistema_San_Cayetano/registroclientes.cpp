#include "registroclientes.h"
#include "ui_registroclientes.h"

RegistroClientes::RegistroClientes(QWidget *parent) :
    QMainWindow(parent),
    uiRegistroClientes(new Ui::RegistroClientes)
{
    uiRegistroClientes->setupUi(this);

    /*Para que las Columans de las tablas sea dinamica*/
    uiRegistroClientes->tablaClientes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiRegistroClientes->tablaClientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

RegistroClientes::~RegistroClientes()
{
    delete uiRegistroClientes;
}

void RegistroClientes::on_pushButton_4_clicked()
{
    this->~RegistroClientes();
}


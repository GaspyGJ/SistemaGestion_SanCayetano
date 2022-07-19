#include "administrador.h"

#include <QMessageBox>

Administrador::Administrador()
{

   this->gestorClientes = new GestorClientes();

   this->gestorProductos  = new GestorProductos();

   this->gestorVentas  = new GestorVentas();

}

Administrador::~Administrador()
{
    delete this->gestorClientes;

    delete this->gestorProductos;

    delete this->gestorVentas;
}

GestorClientes *Administrador::getGestorClientes(){

    return this->gestorClientes;
}

GestorProductos *Administrador::getGestorProductos(){
      return this->gestorProductos;
}

GestorVentas *Administrador::getGestorVentas(){

    return this->gestorVentas;
}




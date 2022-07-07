#include "gestorventas.h"

#include "venta.h"

GestorVentas::GestorVentas(){ }

void GestorVentas::agregarVenta(unsigned int IDcliente,unsigned int IDproducto,short cantidad){

    this->ultimoID+=1;
    Venta *v = new Venta(this->ultimoID,IDcliente,IDproducto,cantidad);
    this->vecVentas.push_back(v);

}

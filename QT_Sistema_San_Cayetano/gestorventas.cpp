#include "gestorventas.h"

GestorVentas::GestorVentas(){ }

void GestorVentas::agregarVenta(Venta venta){
    this->vecVentas.push_back(venta);
}

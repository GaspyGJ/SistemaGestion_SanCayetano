#ifndef VENTA_H
#define VENTA_H


#include "cliente.h"
#include "producto.h"

class Venta
{
public:
    Venta(unsigned int IDcliente,unsigned int IDproducto,short cantidad);
    ~Venta();

    unsigned int getIDCliente();
    unsigned int getIDproducto();
    short getCantidad();
    double getPrecioTotal();

    void setIDCliente(unsigned int cliente);
    void setIDProducto(unsigned int producto);
    void setCantidad(short cantidad);
    void setPrecioTotal(double precioTotal);

private:

    unsigned int IDcliente;
    unsigned int IDproducto;
    short cantidad;
    double precioTotal;

};

#endif // VENTA_H

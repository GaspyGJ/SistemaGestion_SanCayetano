#ifndef VENTA_H
#define VENTA_H


#include "cliente.h"
#include "producto.h"

class Venta
{
public:
    Venta(unsigned int ID,unsigned int IDcliente,unsigned int IDproducto,short cantidad);
    ~Venta();

    unsigned int getIDCliente();
    unsigned int getIDproducto();
    short getCantidad();
    double getPrecioTotal();
    unsigned int getID();

    void setIDCliente(unsigned int cliente);
    void setIDProducto(unsigned int producto);
    void setCantidad(short cantidad);
    void setPrecioTotal(double precioTotal);
    void setID(unsigned int ID);

private:

    unsigned int ID;
    unsigned int IDcliente;
    unsigned int IDproducto;
    short cantidad;
    double precioTotal;

};

#endif // VENTA_H

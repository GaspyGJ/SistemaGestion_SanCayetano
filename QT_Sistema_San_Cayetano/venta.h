#ifndef VENTA_H
#define VENTA_H


#include "cliente.h"
#include "producto.h"

class Venta
{
public:

    Venta(unsigned int ID,QString Producto,QString Cliente,double precio_Producto,short cantidad_Producto,QString fecha_Venta,QString hora_Venta);
    ~Venta();

    //getters
    unsigned int getID();
    QString  getCliente();
    QString  getProducto();
    short getCantidad();
    double getPrecio_Producto();
    double getPrecioTotal();
    QString getFecha_Venta();
    QString getHora_Venta();

    //setters
    void setID(unsigned int ID);
    void setCliente(QString cliente);
    void setProducto(QString producto);
    void setCantidad(short cantidad);
    void setPrecio_Prodcuto(double precio_Producto);
    void setPrecioTotal(double precioTotal);
    void setFecha_Venta(QString fecha_Venta);
    void setHora_Venta(QString hora_Venta);



private:
    unsigned int ID;

    QString nombre_Cliente,nombre_Producto;

    short cantidad_Producto;

    double precio_Producto , precioTotal;

    QString fecha_Venta , hora_Venta;

};

#endif // VENTA_H

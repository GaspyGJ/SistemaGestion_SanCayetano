#ifndef GESTORPRODUCTOS_H
#define GESTORPRODUCTOS_H

#include "producto.h"

class GestorProductos
{
public:
    GestorProductos();


    void agregarProducto(QString nombre,short peso,double precio);

    short buscarProducto(unsigned int ID); // devuelve la posicion de vecProductos donde esta el de ID, si no esta retorna -1

    void modificarNombre(unsigned int ID, QString nombre);

    void modificarProveedor(unsigned int ID,QString proveedor);

    void modificarPeso(unsigned int ID,short peso);

    void modificarPrecio(unsigned int ID,double precio);

    void modificarFechaUltimaIncorporacion(unsigned int ID,QDate fecha);

private:

    QVector <Producto *> vecProductos;

    unsigned int ultimoID;
};

#endif // GESTORPRODUCTOS_H

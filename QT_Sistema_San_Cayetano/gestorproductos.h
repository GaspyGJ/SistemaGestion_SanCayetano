#ifndef GESTORPRODUCTOS_H
#define GESTORPRODUCTOS_H

#include "producto.h"
#include "basededatos.h"
#include <QVector>

class GestorProductos
{
public:

    GestorProductos();

    void inicializarConBaseDeDatos();

    void agregarProducto(unsigned int id,QString nombre,double precio,int stock,QString fecha_ultima_incorporacion);

    short buscarProducto(unsigned int ID); // devuelve la posicion de vecProductos donde esta el de ID, si no esta retorna -1

    Producto* getProducto(unsigned int ID); //devuelve un puntero al producto

    //void modificarNombre(unsigned int ID, QString nombre);

    // void modificarProveedor(unsigned int ID,QString proveedor);

    // void modificarPeso(unsigned int ID,short peso);

    void modificarCantidad(unsigned int ID,QString cantidad);

    void modificarPrecio(unsigned int ID,QString precio);

    void modificarFechaUltimaIncorporacion(unsigned int ID,QDate fecha);

    //void eliminarProducto(unsigned int ID);

    QVector<unsigned int> getAll_ID_Productos(); //retorna todos los Ids de los productos

private:

    QVector <Producto *> vecProductos;

    BaseDeDatos *db;
};

#endif // GESTORPRODUCTOS_H

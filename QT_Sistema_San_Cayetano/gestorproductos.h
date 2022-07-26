#ifndef GESTORPRODUCTOS_H
#define GESTORPRODUCTOS_H

#include "producto.h"
#include "basededatos.h"
#include <QVector>

class GestorProductos
{
public:

    GestorProductos();

    ~GestorProductos();

    //getters

    Producto* getProducto(unsigned int ID); //devuelve un puntero al producto

    Producto* getProducto(QString nombre);

    QVector<unsigned int> getAll_ID_Productos(); //retorna todos los Ids de los productos

    //buscadores

    short buscarProducto(unsigned int ID); // devuelve la posicion de vecProductos donde esta el de ID, si no esta retorna -1

    short buscarProductoPorNombre(QString nombre); // devuelve la posicion de vecProductos donde esta el de ID, si no esta retorna -1


    //BBDD

    void inicializarConBaseDeDatos(); // ejecuta consulta sql , crea los Productos y los guarda en el vector de productos


    //Creacion / Eliminacion de Productos
    void agregarProducto(unsigned int id,QString nombre,double precio,int stock,QString fecha_ultima_incorporacion);

    /*void eliminarProducto(unsigned int ID); --> no implementada , no resulto necesaria.*/


    //modificacion Productos

    short modificarCantidad(unsigned int ID,QString cantidad);

    short modificarPrecio(unsigned int ID,QString precio);

    void modificarFechaUltimaIncorporacion(unsigned int ID,QDate fecha);


private:

    QVector <Producto *> vecProductos;

    BaseDeDatos *db;
};

#endif // GESTORPRODUCTOS_H

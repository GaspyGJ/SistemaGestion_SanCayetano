#ifndef GESTORVENTAS_H
#define GESTORVENTAS_H

#include "venta.h"
#include "basededatos.h"

class GestorVentas
{
public:

    GestorVentas();

    ~GestorVentas();

    void inicializarTodayConBaseDeDatos(); // ejecuta consulta sql , crea las Ventas DE HOY  y los guarda en el vector

    void agregarVentaToVec(unsigned int ID,short cantidad_Producto,double precio_Producto,QString fecha_Venta,QString hora_Venta,QString nombre_Producto,QString nombre_Cliente);

    short crearVentaToday(short cantidad_Producto,double precio_Producto,QString fecha_Venta,QString hora_Venta,QString nombre_Producto,QString nombre_Cliente);

    short buscarVentaToday(unsigned int ID); // devuelve la posicion de vecVentas donde esta el de ID, si no esta retorna -1

    Venta* getVentaToday(unsigned int ID); //devuelve un puntero a la venta

    short eliminarVenta_Today(unsigned int ID);

    QVector <Venta *> getAll_Ventas_Today(); //retorna todos los Ids de las ventas del dia de hoy

    //void push_VentasToday_To_Ventas(unsigned int ID);// ver FUNCIONAMIENTO DE ESTA FUNCION

private:

   // QVector <Venta *> vecVentasTotales; // registro de todas las ventas

    QVector <Venta *> vecVentasToday; // registro de las ventas de HOY

    BaseDeDatos *db;
};

#endif // GESTORVENTAS_H

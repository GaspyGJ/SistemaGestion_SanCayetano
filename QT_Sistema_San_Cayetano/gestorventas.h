#ifndef GESTORVENTAS_H
#define GESTORVENTAS_H

#include "venta.h"
#include "basededatos.h"

class GestorVentas
{
public:

    GestorVentas();

    void agregarVentaToday(unsigned int IDcliente,unsigned int IDproducto,short cantidad);

    short buscarVentaToday(unsigned int ID); // devuelve la posicion de vecVentas donde esta el de ID, si no esta retorna -1

    Venta* getVentaToday(unsigned int ID); //devuelve un puntero a la venta

    void eliminarVenta_Today(unsigned int ID);

    QVector<unsigned int> getAll_ID_Ventas_Today(); //retorna todos los Ids de las ventas del dia de hoy

    void push_VentasToday_To_Ventas(unsigned int ID);// ver FUNDIONAMIENTO DE ESTA FUNCION

private:

    QVector <Venta *> vecVentas; // registro de todas las ventas

    QVector <Venta *> vecVentasToday; // registro de las ventas de HOY

    unsigned int ultimoID;

    BaseDeDatos *bd;
};

#endif // GESTORVENTAS_H

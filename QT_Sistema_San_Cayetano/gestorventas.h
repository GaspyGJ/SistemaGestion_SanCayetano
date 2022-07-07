#ifndef GESTORVENTAS_H
#define GESTORVENTAS_H

#include "venta.h"

class GestorVentas
{
public:
    GestorVentas();

    void agregarVenta(unsigned int IDcliente,unsigned int IDproducto,short cantidad);

private:

      QVector <Venta *> vecVentas;

      unsigned int ultimoID;
};

#endif // GESTORVENTAS_H

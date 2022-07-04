#ifndef GESTORVENTAS_H
#define GESTORVENTAS_H

#include "venta.h"

class GestorVentas
{
public:
    GestorVentas();

    void agregarVenta(Venta venta);

private:

      QVector <Venta> vecVentas;
};

#endif // GESTORVENTAS_H

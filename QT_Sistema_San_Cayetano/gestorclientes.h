#ifndef GESTORCLIENTES_H
#define GESTORCLIENTES_H


#include "cliente.h"
#include <QVector>

class GestorClientes
{
public:
    GestorClientes();

    void agregarCliente(Cliente cliente);

    short buscarCliente(unsigned int ID); // devuelve la posicion de vecClientes donde esta el de ID, si no esta retorna -1

    void modificarNombre(unsigned int ID, QString nombre);

    void modificarTelefono(unsigned int ID, QString telefono);

    void modificarDireccion(unsigned int ID, QString direccion);

    void eliminarCliente(unsigned int ID);

private:
    QVector<Cliente> vecClientes;

};

#endif // GESTORCLIENTES_H

#ifndef GESTORCLIENTES_H
#define GESTORCLIENTES_H


#include "cliente.h"
#include "basededatos.h"
#include <QVector>

class GestorClientes
{
public:

    GestorClientes();

    void agregarCliente(QString nombre,QString telefono, QString direccion);

    short buscarCliente(unsigned int ID); // devuelve la posicion de vecClientes donde esta el de ID, si no esta retorna -1

    void modificarNombre(unsigned int ID, QString nombre);

    void modificarTelefono(unsigned int ID, QString telefono);

    void modificarDireccion(unsigned int ID, QString direccion);

    void eliminarCliente(unsigned int ID);


    Cliente* getCliente(unsigned int ID); //devuelve un puntero al cliente

    QVector<unsigned int> getAll_ID_Clientes(); //retorna todos los Ids de los clientes

private:

    QVector<Cliente *> vecClientes;

    unsigned int ultimoID;

    BaseDeDatos *bd;

};

#endif // GESTORCLIENTES_H

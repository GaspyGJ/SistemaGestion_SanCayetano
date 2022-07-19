#ifndef GESTORCLIENTES_H
#define GESTORCLIENTES_H


#include "cliente.h"
#include "basededatos.h"
#include <QVector>

class GestorClientes
{
public:

    GestorClientes();

    ~GestorClientes();

    void inicializarConBaseDeDatos();

    void agregarCliente(unsigned int id,QString nombre,QString telefono, QString direccion);

    short buscarCliente(unsigned int ID); // devuelve la posicion de vecClientes donde esta el de ID, si no esta retorna -1

    Cliente* getCliente(unsigned int ID); //devuelve un puntero al cliente


    void modificarNombre(unsigned int ID, QString nombre);

    void modificarTelefono(unsigned int ID, QString telefono);

    void modificarDireccion(unsigned int ID, QString direccion);

    void eliminarCliente(unsigned int ID);


    QVector<unsigned int> getAll_ID_Clientes(); //retorna todos los Ids de los clientes

private:

    QVector<Cliente *> vecClientes;

    BaseDeDatos *db;

};

#endif // GESTORCLIENTES_H

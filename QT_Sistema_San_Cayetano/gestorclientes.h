#ifndef GESTORCLIENTES_H
#define GESTORCLIENTES_H

#include "cliente.h"
#include "basededatos.h"
#include <QVector>

class GestorClientes{

public:

    GestorClientes();

    ~GestorClientes();

    //getters

    Cliente* getCliente(unsigned int ID);

    QVector<unsigned int> getAll_ID_Clientes();

    QVector<Cliente *> getAll_Clientes();


    //buscador

    short buscarCliente(unsigned int ID); // retorna la posicion del cliente en el vector , si no lo encuentra retorna -1

    short buscarClientePorNombre(QString nomrbe); // retorna la posicion del cliente en el vector , si no lo encuentra retorna -1


    //BBDD
    void actualizarGestor(); // limpia el vector de clientes y lo vuelve a cargar

    void inicializarConBaseDeDatos(); // ejecuta consulta sql , crea los Clientes y los guarda en el vector de cleintes


    //--> si retorna short es que retorna -1 si hubo error o 1 si se ejecuto correctamento <--//

    //Creacion/Eliminacion de clientes

    short crearNuevoCliente(QString nombre ,QString direccion , QString telefono);

    void agregarClienteToVec(unsigned int id,QString nombre,Establecimiento *establecimiento);

    short eliminarCliente(unsigned int ID);

    void eliminarClienteToVec(unsigned int ID);

    // modificacion de clientes

    short actualizarCliente(short columna,QString datoViejo,QString datoActualizado,unsigned int ID,QString direccion=""); // direccion valor por defecto = "" ,(si no se le pasa por parametro toma ese)

    short modificarTelefono(unsigned int ID,QString direccion ,QString telefonoViejo, QString telefonoNuevo);

    short modificarNombre(unsigned int id ,QString nombreViejo,QString nombreNuevo);

    short modificarDireccion(unsigned int id,  QString direccionVieja , QString direccionNueva);

    //
    short agregarDireccionToCliente(QString nombreClienteSeleccionado, QString valorDeDireccion);

    short eliminarDireccionToCliente(QString nombreClienteSeleccionado, QString valorDeDireccion);

private:

    QVector<Cliente *> vecClientes;

    BaseDeDatos *db;

};

#endif // GESTORCLIENTES_H

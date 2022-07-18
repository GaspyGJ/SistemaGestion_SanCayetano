#include "gestorclientes.h"
#include <QVector>


GestorClientes::GestorClientes(){}


void GestorClientes::agregarCliente(QString nombre,QString telefono, QString direccion){

    this->ultimoID+=1;

    Cliente *c= new Cliente(this->ultimoID,nombre,telefono,direccion);

    this->vecClientes.push_back(c);

}

short GestorClientes::buscarCliente(unsigned int ID){

    for(int i=0; i<this->vecClientes.length(); i++ ){

        if(this->vecClientes[i]->getID()==ID){
            return i;
        }
    }

    return -1;
}

Cliente* GestorClientes::getCliente(unsigned int ID){
    int pos = this->buscarCliente(ID);
    if(pos!=-1){
        return this->vecClientes[pos];
    }

    return NULL;
}

QVector<unsigned int> GestorClientes::getAll_ID_Clientes(){
    QVector <unsigned int> vID;

    for(int i=0; i<this->vecClientes.length(); i++ ){

        vID.push_back(this->vecClientes[i]->getID());
    }

    return  vID;
}

void GestorClientes::modificarNombre(unsigned int ID, QString nombre){

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        this->vecClientes[posCliente]->setNombre(nombre);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
        // TIRAR UN ERROR
    }


}
void GestorClientes::modificarTelefono(unsigned int ID, QString telefono){

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        this->vecClientes[posCliente]->setTelefono(telefono);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
        // TIRAR UN ERROR
    }



}
void GestorClientes::modificarDireccion(unsigned int ID, QString direccion){

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        this->vecClientes[posCliente]->setDireccion(direccion);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
        // TIRAR UN ERROR
    }

}

void GestorClientes::eliminarCliente(unsigned int ID){

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        //lo elimino del vector
        this->vecClientes.erase(this->vecClientes.begin()+posCliente);

        //Elimino el Objeto especifico
        Cliente *c = this->getCliente(ID);
        c->~Cliente();
    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
        // TIRAR UN ERROR
    }
}

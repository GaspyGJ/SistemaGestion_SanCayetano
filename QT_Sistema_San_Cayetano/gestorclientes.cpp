//@@  El telefono o direccion , debe tener algun formato (???

#include "gestorclientes.h"
#include <QVector>


GestorClientes::GestorClientes(){

    this->inicializarConBaseDeDatos();

}

GestorClientes::~GestorClientes(){
    //@@ esto es necesario ??? igual no estoy eliminando el vector del todo, nose
    for(int i=0; i<this->vecClientes.length(); i++ ){
        delete this->vecClientes[i];
    }

}


void GestorClientes::inicializarConBaseDeDatos(){

    {
        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();

        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        //@@ HACER LA CONSULTA CORRESPONDIENT
        consulta->prepare("SELECT C.id_Cliente,C.nombre,T.telefono,D.direccion FROM (Clientes C LEFT JOIN TelefonosC T ON  C.id_Cliente=T.id_Cliente) LEFT JOIN DireccionC D ON T.direccion=D.direccion;");

        if( ! consulta->exec() ){
            qDebug()<<"Error al ejecutar la consulta SQL GESTOR CLIENTE";
        }

        while( consulta->next() ){ // mientras la consulta tenga datos sigo leyendo (fila por fila)


            // el mismo cliente pero tiene dos direcciones --> distintos objetos

            unsigned int ID =consulta->value("id_Cliente").toUInt();
            QString nombre =consulta->value("nombre").toString();
            QString telefono = consulta->value("telefono").toString();
            QString direccion =consulta->value("direccion").toString();

            agregarCliente(ID,nombre,telefono,direccion);

           qDebug()<<"Se agrego a la lista cliente :"<<nombre<<"\n con ID:"<<ID<<"\n con la direccion de : "<<direccion<<"\n con el telefono: "<<telefono<<Qt::endl;
        }

        delete consulta;

    }

    this->db->cerrar();

    delete this->db;

    this->db = nullptr;
}

void GestorClientes::agregarCliente(unsigned int id,QString nombre,QString telefono, QString direccion){

    // el mismo cliente pero tiene dos direcciones --> distintos objetos

    Cliente *c= new Cliente(id,nombre,telefono,direccion);

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

//void GestorClientes::eliminarCliente(unsigned int ID){
//
//}

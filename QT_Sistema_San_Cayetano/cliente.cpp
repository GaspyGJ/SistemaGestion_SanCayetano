#include "cliente.h"


Cliente::Cliente(unsigned int id,QString nombre,QString telefono, QString direccion)
{
    this->setID(id);
    this->setNombre(nombre);
    this->setTelefono(telefono);
    this->setDireccion(direccion);

}

Cliente::~Cliente(){
    delete this;
}

//setters
void Cliente::setNombre(QString nombre){
    this->nombre=nombre;
}
void Cliente::setTelefono(QString telefono){
    this->telefono=telefono;
}
void Cliente::setDireccion(QString direccion){
    this->direccion=direccion;
}
void Cliente::setID(unsigned int id){
    this->ID=id;
}


//getters
QString Cliente::getNombre(){
    return this->nombre;
}
QString Cliente::getTelefono(){
    return this->telefono;
}
QString Cliente::getDireccion(){
    return this->direccion;
}
unsigned int Cliente::getID(){
    return this->ID;
}

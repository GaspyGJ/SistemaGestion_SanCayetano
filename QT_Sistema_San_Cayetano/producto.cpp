#include "producto.h"

Producto::Producto(unsigned int ID,QString nombre,double precio){
    this->setID(ID);
    this->setNombre(nombre);
    //this->setPeso(peso);
    this->setPrecio(precio);
    this->setCantidad(0);
}


unsigned int Producto::getID(){
    return this->ID;
}

QString Producto::getNombre(){
    return this->nombre;
}

double Producto::getPrecio(){
    return this->precio;
}

int Producto::getCantidad(){
    return this->cantidad;
}

QString Producto::getFechaUltimaIncorporacion(){
    return this->fechaUltimaIncorporacion;
}


void Producto::setID(unsigned int id){
    this->ID=id;
}

void Producto::setNombre(QString nombre){
    this->nombre=nombre;
}

void Producto::setPrecio(double precio){
    this->precio=precio;
}

void Producto::setCantidad(int cantidad){
    this->cantidad=cantidad;
}

void Producto::setFechaUltimaIncorporacion(QString fecha){
    this->fechaUltimaIncorporacion=fecha;
}

#include "producto.h"

Producto::Producto(unsigned int ID,QString nombre,short peso,double precio){
    this->setNombre(nombre);
    this->setPeso(peso);
    this->setPrecio(precio);
    this->setID(ID);
    this->setCantidad(0);
}

Producto::~Producto(){
    delete this;
}

QString Producto::getNombre(){
    return this->nombre;
}
QString Producto::getProveedor(){
    return this->nombre;
}
short Producto::getPeso(){
    return this->peso;
}
double Producto::getPrecio(){
    return this->precio;
}
QString Producto::getFechaUltimaIncorporacion(){
    return this->nombre;
}

int Producto::getCantidad(){
    return this->cantidad;
}

unsigned int Producto::getID(){
    return this->ID;
}




void Producto::setNombre(QString nombre){
    this->nombre=nombre;
}
void Producto::setProveedor(QString proveedor){
    this->proveedor=proveedor;
}
void Producto::setPeso(short peso){
    this->peso=peso;
}
void Producto::setPrecio(double precio){
    this->precio=precio;
}
void Producto::setCantidad(int cantidad){
    this->cantidad=cantidad;
}
void Producto::setFechaUltimaIncorporacion(QDate fecha){
     this->FechaUltimaIncorporacion=fecha;
}
void Producto::setID(unsigned int id){
       this->ID=id;
}

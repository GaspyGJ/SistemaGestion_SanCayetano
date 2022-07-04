#include "producto.h"

Producto::Producto(QString nombre,QString proveedor){
    setNombre(nombre);
    setProveedor(proveedor);
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
void Producto::setFechaUltimaIncorporacion(QDate fecha){
     this->FechaUltimaIncorporacion=fecha;
}
void Producto::setID(unsigned int id){
       this->ID=id;
}

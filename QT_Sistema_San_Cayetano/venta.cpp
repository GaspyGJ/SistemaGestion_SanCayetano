#include "venta.h"


Venta::Venta(unsigned int ID,unsigned int IDcliente,unsigned int IDproducto,short cantidad){

    this->setIDCliente(IDcliente);
    this->setIDProducto(IDproducto);
    this->setCantidad(cantidad);
    this->setID(ID);

}

Venta::~Venta(){}

unsigned int Venta::getIDCliente(){
    return this->IDcliente;
}
unsigned int Venta::getIDproducto(){
    return this->IDproducto;
}
short Venta::getCantidad(){
    return this->cantidad;
}
double Venta::getPrecioTotal(){
    return this->precioTotal;
}

unsigned int Venta::getID(){
    return this->ID;
}

void Venta::setIDCliente(unsigned int IDcliente){
    this->IDcliente=IDcliente;
}
void Venta::setIDProducto(unsigned int IDproducto){
    this->IDproducto=IDproducto;
}
void Venta::setCantidad(short cantidad){
    this->cantidad=cantidad;
}
void Venta::setPrecioTotal(double precioTotal){
    this->precioTotal=precioTotal;
}

void Venta::setID(unsigned int ID){
    this->ID=ID;
}

#include "venta.h"



Venta::Venta(unsigned int ID,QString Producto,QString Cliente,double precio_Producto,short cantidad_Producto,QString fecha_Venta,QString hora_Venta){
    this->setID(ID);
    this->setCliente(Cliente);
    this->setProducto(Producto);
    this->setPrecio_Prodcuto(precio_Producto);
    this->setCantidad(cantidad_Producto);
    this->setPrecioTotal(this->precio_Producto * this->cantidad_Producto);
    this->setFecha_Venta(fecha_Venta);
    this->setHora_Venta(hora_Venta);
}

Venta::~Venta(){}

unsigned int Venta::getID(){
    return this->ID;
}
QString Venta::getCliente(){
    return this->nombre_Cliente;
}
QString Venta::getProducto(){
    return this->nombre_Producto;
}
double Venta::getPrecio_Producto(){
    return this->precio_Producto;
}
short Venta::getCantidad(){
    return this->cantidad_Producto;
}
double Venta::getPrecioTotal(){
    return this->precioTotal;
}
QString Venta::getFecha_Venta(){
    return this->fecha_Venta;
}
QString Venta::getHora_Venta(){
    return this->hora_Venta;
}


void Venta::setID(unsigned int ID){
    this->ID=ID;
}
void Venta::setCliente(QString cliente){
    this->nombre_Cliente=cliente;
}
void Venta::setProducto(QString producto){
    this->nombre_Producto=producto;
}
void  Venta::setPrecio_Prodcuto(double precio_Producto){
    this->precio_Producto=precio_Producto;
}
void Venta::setCantidad(short cantidad){
    this->cantidad_Producto=cantidad;
}
void Venta::setPrecioTotal(double precioTotal){
    this->precioTotal=precioTotal;
}
void  Venta::setFecha_Venta(QString fecha_Venta){
    this->fecha_Venta=fecha_Venta;
}
void  Venta::setHora_Venta(QString hora_Venta){
    this->hora_Venta=hora_Venta;
}

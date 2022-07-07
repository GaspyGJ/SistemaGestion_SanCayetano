#include "gestorproductos.h"

GestorProductos::GestorProductos(){ }

void GestorProductos::agregarProducto(QString nombre,short peso,double precio){
    //tendria q crearse aca el Producto creo

    this->ultimoID+=1;
    Producto *p = new Producto(this->ultimoID,nombre,peso,precio);
    this->vecProductos.push_back(p);


}
//LA FUNCION DE BUSCAR SE PODRIA GENERALIZAR, YA Q ES IGUAL A LA FUNCION EN CLIENTE
short GestorProductos::buscarProducto(unsigned int ID){

    for(int i=0; i<this->vecProductos.length(); i++ ){

        if(this->vecProductos[i]->getID()==ID){
            return i;
        }
    }

    return -1;
}

void GestorProductos::modificarNombre(unsigned int ID, QString nombre){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setNombre(nombre);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}

void GestorProductos::modificarProveedor(unsigned int ID,QString proveedor){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setNombre(proveedor);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}

void GestorProductos::modificarPeso(unsigned int ID,short peso){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setPeso(peso);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}

void GestorProductos::modificarPrecio(unsigned int ID,double precio){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setPrecio(precio);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}

void GestorProductos::modificarFechaUltimaIncorporacion(unsigned int ID,QDate fecha){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setFechaUltimaIncorporacion(fecha);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}

#include "gestorproductos.h"

GestorProductos::GestorProductos(){ }

void GestorProductos::agregarProducto(QString nombre,short peso,double precio){

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

Producto* GestorProductos::getProducto(unsigned int ID){

    int pos = this->buscarProducto(ID);
    if(pos!=-1){
        return this->vecProductos[pos];
    }

    return NULL;
}


QVector<unsigned int> GestorProductos::getAll_ID_Productos(){

    QVector <unsigned int> vID;

    for(int i=0; i<this->vecProductos.length(); i++ ){

        vID.push_back(this->vecProductos[i]->getID());
    }

    return  vID;
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


void GestorProductos::eliminarProducto(unsigned int ID){

    int posProducto = this->buscarProducto(ID);

    if(posProducto!=-1){

       //Elimina el producto del vector
        this->vecProductos.erase(this->vecProductos.begin() + posProducto);

        //Elimino el Objeto especifico
        Producto *p = this->getProducto(ID);
        p->~Producto();
    }
    else{
        qDebug("No existe el Producto");
    }


}

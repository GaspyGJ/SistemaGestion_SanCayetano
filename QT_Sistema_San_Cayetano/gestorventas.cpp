#include "gestorventas.h"

#include "venta.h"

GestorVentas::GestorVentas(){
    this->db= new BaseDeDatos();
    //this->inicializarConBaseDeDatos();
}

void GestorVentas::agregarVentaToday(unsigned int IDcliente,unsigned int IDproducto,short cantidad){

    this->ultimoID+=1;
    Venta *v = new Venta(this->ultimoID,IDcliente,IDproducto,cantidad);
    this->vecVentasToday.push_back(v);

}

GestorVentas::~GestorVentas(){
    delete this->db;
}


short GestorVentas::buscarVentaToday(unsigned int ID){ // devuelve la posicion de vecVentas donde esta el de ID, si no esta retorna -1
    for(int i=0; i<this->vecVentasToday.length(); i++ ){

        if(this->vecVentasToday[i]->getID()==ID){
            return i;
        }
    }

    return -1;
}

Venta* GestorVentas::getVentaToday(unsigned int ID){//devuelve un puntero a la venta

    int pos = this->buscarVentaToday(ID);
    if(pos!=-1){
        return this->vecVentasToday[pos];
    }

    return NULL;
}

void GestorVentas::eliminarVenta_Today(unsigned int ID){

    int posVenta = this->buscarVentaToday(ID);

    if(posVenta!=-1){

        //Elimina el producto del vector
        this->vecVentasToday.erase(this->vecVentasToday.begin()+posVenta);

        //Elimino el Objeto especifico
        Venta *v = this->getVentaToday(ID);
        v->~Venta();
    }
    else{
        qDebug("No existe la Venta");
    }

}

QVector<unsigned int> GestorVentas::getAll_ID_Ventas_Today(){//retorna todos los Ids de las ventas del dia de hoy

    QVector <unsigned int> vID;

    for(int i=0; i<this->vecVentasToday.length(); i++ ){

        vID.push_back(this->vecVentasToday[i]->getID());
    }

    return  vID;

}

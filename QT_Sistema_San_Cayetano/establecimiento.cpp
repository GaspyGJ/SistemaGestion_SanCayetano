#include "establecimiento.h"
#include "qdebug.h"

Establecimiento::Establecimiento(QString direccion ,QString telefono){

    //qDebug()<<"Se creo un establecimiento con direccion = "<<direccion;

    setDireccion(direccion);

    this->vecTelefonos.push_back(telefono);

}

QString Establecimiento::getDireccion(){
        return this->direccion;
}
QStringList Establecimiento::get_All_Telefonos(){
       return this->vecTelefonos;
}
void Establecimiento::setDireccion(QString direccion){
     this->direccion=direccion;
}


void Establecimiento::setTelefono(QString telefono){
     this->vecTelefonos.push_back(telefono);
     //qDebug()<<"En Establecimiento  --> Se agrego un telefono nuevo"<<get_All_Telefonos();;

}

void Establecimiento::actualizarTelefono(QString telefonoViejo, QString telefonoNuevo){

    if(telefonoViejo=="Sin Telefono"){
            this->vecTelefonos.push_back(telefonoNuevo);
    }
    else{
       // qDebug()<<"VECTOR DE TELEFONOS = "<<this->vecTelefonos;
           this->vecTelefonos[this->vecTelefonos.indexOf(telefonoViejo)]= telefonoNuevo;
    }



}


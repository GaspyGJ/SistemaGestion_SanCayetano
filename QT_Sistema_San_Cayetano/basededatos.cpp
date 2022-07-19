#include "basededatos.h"

BaseDeDatos::BaseDeDatos(){}

short BaseDeDatos::Conectar(){

    short retorno=1;

    if( ! QSqlDatabase::isDriverAvailable("QSQLITE") ){

        qDebug()<<"Error : QSQLITE drivers no disponibles";

        retorno = -1;
    }

    else { // no hay problemas de drivers

        this->baseDatos=QSqlDatabase::addDatabase("QSQLITE");

        this->baseDatos.setDatabaseName("../BBDD/SanCayetano_BBDD.db");

    }

    return retorno;
}

short BaseDeDatos::abrir(){

    if( ! this->baseDatos.open() ){// si no se pudo abrir

        qDebug()<< this->baseDatos.lastError();

        qDebug()<<"Error : QSQLITE no se pudo abrir";

        return -1;
    }

    return 1;
}

void BaseDeDatos::cerrar(){

    {this->baseDatos.close();}

    this->baseDatos.removeDatabase("QSQLITE");
}


QSqlDatabase BaseDeDatos::getbaseDatos(){
    return this->baseDatos;
}

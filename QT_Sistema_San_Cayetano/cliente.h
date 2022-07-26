#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <QVector>

#include "establecimiento.h"

class Cliente
{
public:

    Cliente(unsigned int id,QString nombre,Establecimiento *establecimiento);

    //getters
    unsigned int getID();
    QString getNombre();
    Establecimiento* getEstablecimiento(QString direccion);

    QVector <Establecimiento *> getAll_Establecimientos();

    //setters
    void setID(unsigned int id);
    void setNombre(QString nombre);
    void setEstablecimiento(QString direccion,QString telefono);

private:

    unsigned int  ID;

    QString nombre;

    QVector <Establecimiento *> vecEstablecimientos;
};

#endif // CLIENTE_H

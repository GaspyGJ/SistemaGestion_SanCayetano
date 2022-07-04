#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente
{
public:
    Cliente(unsigned int id,QString nombre,QString telefono, QString direccion);
    ~Cliente();

    QString getNombre();
    QString getTelefono();
    QString getDireccion();
    unsigned int getID();


    void setNombre(QString nombre);
    void setID(unsigned int id);
    void setTelefono(QString telefono);
    void setDireccion(QString direccion);

private:

    unsigned int  ID;
    QString nombre;
    QString telefono;
    QString direccion;

};

#endif // CLIENTE_H

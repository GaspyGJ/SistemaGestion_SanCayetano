#ifndef ESTABLECIMIENTO_H
#define ESTABLECIMIENTO_H

#include <QString>
#include <QVector> //lo necesita QStringList

class Establecimiento
{
public:
    Establecimiento(QString direccion ,QString telefono);

    //getters
    QString getDireccion();
    QStringList get_All_Telefonos();

    //setters
    void setDireccion(QString direccion);
    void setTelefono(QString telefono);


    void actualizarTelefono(QString telefonoViejo, QString telefonoNuevo);


private:

    QString direccion;

    QStringList vecTelefonos;

};

#endif // ESTABLECIMIENTO_H

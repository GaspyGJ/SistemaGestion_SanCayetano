#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<QString>
#include<QDate>

class Producto
{
public:

    Producto(unsigned int ID,QString nombre,double precio);

    unsigned int getID();
    QString getNombre();
    double getPrecio();
    int getCantidad();
    QString getFechaUltimaIncorporacion();

    void setID(unsigned int ID);
    void setNombre(QString nombre);
    void setPrecio(double precio);
    void setCantidad(int cantidad);
    void setFechaUltimaIncorporacion(QString fecha);

private:

    unsigned int ID;
    QString nombre;
    double precio;
    int cantidad;
    QString fechaUltimaIncorporacion;

};

#endif // PRODUCTO_H

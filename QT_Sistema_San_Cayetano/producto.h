#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<QString>
#include<QDate>

class Producto
{
public:

    Producto(unsigned int ID,QString nombre,double precio);

    //getters
    unsigned int getID();
    QString getNombre(); 
    double getPrecio();
    int getCantidad();
    QString getFechaUltimaIncorporacion();

    //setters
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
    QString fechaUltimaIncorporacion; // registra la fecha de la ultima vez que se actualizo el Stock

};

#endif // PRODUCTO_H

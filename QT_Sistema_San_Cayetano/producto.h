#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<QString>
#include<QDate>

class Producto
{
public:

    Producto(unsigned int ID,QString nombre,short peso,double precio);
    ~Producto();

    QString getNombre();
    QString getProveedor();
    short getPeso();
    double getPrecio();
    QString getFechaUltimaIncorporacion();
    unsigned int getID();
    int getCantidad();

    void setNombre(QString nombre);
    void setProveedor(QString proveedor);
    void setPeso(short peso);
    void setPrecio(double precio);
    void setFechaUltimaIncorporacion(QDate fecha);
    void setID(unsigned int ID);
    void setCantidad(int cantidad);


private:

    unsigned int ID;
    QString nombre;
    QString proveedor;
    short peso;
    double precio;
    int cantidad;
    QDate FechaUltimaIncorporacion;

};

#endif // PRODUCTO_H

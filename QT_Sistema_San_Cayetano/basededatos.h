#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H


#include <QMessageBox>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class BaseDeDatos
{
public:
    BaseDeDatos();

    short Conectar();

    QSqlDatabase getbaseDatos();

    short abrir();

    void cerrar();

private:
    QSqlDatabase baseDatos;
};

#endif // BASEDEDATOS_H

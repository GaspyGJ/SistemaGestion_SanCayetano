#include "gestorventas.h"
#include "gestorproductos.h"
#include "venta.h"

GestorVentas::GestorVentas(){
    this->inicializarTodayConBaseDeDatos();
}

void GestorVentas::inicializarTodayConBaseDeDatos(){

    {   this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();


        QSqlQuery *consulta0= new QSqlQuery(this->db->getbaseDatos());
        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        consulta0->prepare("select * from sqlite_sequence  where name = 'Ventas';");
        consulta0->exec();

        QDate *fechaHoy = new QDate();
        QString fecha_venta= fechaHoy->currentDate().toString("dd-MM-yyyy");
        consulta->prepare("select * from ventas where fecha_Venta='"+fecha_venta+"';");

        qDebug()<<"Se ejecuto la consulta = "<<"select * from ventas where fecha_Venta='"+fecha_venta+"';";

        if( ! consulta->exec() ){
            qDebug()<<"El Gestor Ventas dice :\n Error al ejecutar la consulta SQL GESTOR VENTAS";
            qDebug()<<this->db->getbaseDatos().lastError();
        }

        while( consulta->next() ){ // mientras la consulta tenga datos sigo leyendo (fila por fila)

            unsigned int ID = consulta->value("id_Venta").toUInt();
            short cantidad_Producto =consulta->value("cantidad_Producto").toInt();
            double precio_Producto=consulta->value("precio_Producto").toDouble();
            QString fecha_Venta=consulta->value("fecha_Venta").toString();
            QString hora_Venta=consulta->value("hora_Venta").toString();
            QString nombre_Producto=consulta->value("nombre_Producto").toString();
            QString nombre_Cliente=consulta->value("nombre_Cliente").toString();

            this->agregarVentaToVec( ID ,cantidad_Producto,precio_Producto,fecha_Venta,hora_Venta,nombre_Producto,nombre_Cliente);
        }

        delete consulta;
        delete fechaHoy;

    }

    this->db->cerrar();

    delete this->db;

    this->db = nullptr;
}

void GestorVentas::agregarVentaToVec(unsigned int ID,short cantidad_Producto,double precio_Producto,QString fecha_Venta,QString hora_Venta,QString nombre_Producto,QString nombre_Cliente){

    Venta *v = new Venta(ID,nombre_Producto,nombre_Cliente,precio_Producto,cantidad_Producto,fecha_Venta,hora_Venta);

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

short GestorVentas::crearVentaToday(short cantidad_Producto,double precio_Producto,QString fecha_Venta,QString hora_Venta,QString nombre_Producto,QString nombre_Cliente){

    short retorno = -1;


    // Actualizo el telefono en la BBDD
    this->db= new BaseDeDatos();

    this->db->Conectar();

    this->db->abrir();

    QSqlQuery *consulta0= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

    consulta0->prepare("select * from sqlite_sequence  where name = 'Ventas';");
    consulta0->exec();

    QString ID="Sin ID";
    while( consulta0->next() ){
        ID = QString::number( consulta0->value("seq").toUInt() + 1 );
    }

    QString query="INSERT INTO Ventas(cantidad_Producto,precio_Producto,fecha_Venta,hora_Venta,nombre_Producto,nombre_Cliente) VALUES ("+
            QString::number(cantidad_Producto)+","+QString::number(precio_Producto)+",'"+fecha_Venta+"','"+hora_Venta+"','"+
            nombre_Producto+"','"+nombre_Cliente+"');";


    qDebug()<<"La consulta de agregar venta se ejecuto --> "<<query;
    consulta->prepare(query);

    this->db->getbaseDatos().transaction(); //empiezo la transaccion

    if( ! consulta->exec() ){
        qDebug()<<"El Gestor Ventas dice :\nError al ejecutar la consulta SQL agregar venta ,";
        qDebug()<<"Ultimo Error de BBDD = "<<this->db->getbaseDatos().lastError();

        QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Agregar Venta");

        delete consulta0;
        delete consulta;

        this->db->cerrar();

        delete this->db;

        this->db = nullptr;

        retorno = -1;
    }
    else{
        //se ejecuto correctamente

        //Fin de la actualizacion con la BBBDD

        //QMessageBox::information(0,"OK" , "Se agrego correctamente la venta");

        this->db->getbaseDatos().commit(); // confirmo la transaccion

        delete consulta0;
        delete consulta;

        this->db->cerrar();

        delete this->db;

        this->db = nullptr;

        //agrego la venta al gestor

        unsigned int id_Venta= ID.toUInt();

        Venta *v = new Venta(id_Venta,nombre_Producto,nombre_Cliente,precio_Producto,cantidad_Producto,fecha_Venta,hora_Venta);

        this->vecVentasToday.push_back(v);

        retorno = 1;

    }

return retorno;
}

short GestorVentas::eliminarVenta_Today(unsigned int ID){

    short retorno;

    this->db= new BaseDeDatos();

    this->db->Conectar();

    this->db->abrir();

   int posVenta = this->buscarVentaToday(ID);

    if(posVenta!=-1){

        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        QString eliminarVenta = "DELETE FROM Ventas Where id_Venta ="+QString::number(ID)+";";

        qDebug()<<"La consulta que se ejecuto = "<<eliminarVenta;

        this->db->getbaseDatos().transaction();

        consulta->prepare(eliminarVenta);
        if( ! consulta->exec()){

            qDebug()<<"El Gestor Ventas dice :\nError al ejecutar la consulta SQL GestorVenta (elimnarVenta)";
            qDebug()<<"El Gestor Ventas dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar Venta");

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            delete consulta;

            retorno = -1;
        }
        else{
            //Elimino el Objeto especifico //esto es necesario???
            Venta *v = this->getVentaToday(ID);
            v->~Venta();

            //Elimina la venta del vector
            QVector<Venta *>::iterator i =this->vecVentasToday.begin();
            this->vecVentasToday.erase(i+posVenta);

            this->db->getbaseDatos().commit();
            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            delete consulta;

            retorno = 1;
        }

    }
    else{

        qDebug("El Gestor Venta dice :\nEl ID de la Venta no se encontro en el vector de Ventas");
        QMessageBox::critical(0,"Error" , "El ID de la venta no fue enconontrado");

        retorno = -1;
    }



return retorno;
}

QVector <Venta *>  GestorVentas::getAll_Ventas_Today(){
    return  this->vecVentasToday;
}

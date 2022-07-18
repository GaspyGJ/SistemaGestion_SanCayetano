//@@ FALTA QUE LA BASE DE DATOS SE "Desconecte" CREO
// @@ EN LA BASE DE DATOS BROWSER SE REGISTRA EL MODIFICAR PRECIO ???
#include "gestorproductos.h"

#include "basededatos.h"


GestorProductos::GestorProductos(){

    this->db= new BaseDeDatos();

    this->inicializarConBaseDeDatos();
}

void GestorProductos::inicializarConBaseDeDatos(){

    this->db->Conectar();

    this->db->abrir();

    QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

    consulta->prepare("select * from Productos order by id_Producto");

    if( ! consulta->exec() ){
        qDebug()<<"Error al ejecutar la consulta SQL";
    }

    while( consulta->next() ){ // mientras la consulta tenga datos sigo leyendo (fila por fila)

        unsigned int ID =consulta->value("id_Producto").toUInt();
        QString nombre =consulta->value("nombre").toString();
        double precio = consulta->value("precio").toDouble();
        int stock = consulta->value("cant_Stock").toInt();
        QString fecha_ultima_incorporacion =consulta->value("fecha_Ultima_Incorporacion").toString();

        agregarProducto(ID,nombre,precio,stock,fecha_ultima_incorporacion);

        qDebug()<<"Se agrego el producto :"<<nombre<<"\n con el precio de : "<<precio<<Qt::endl;
    }

    delete consulta;

    this->db->cerrar();
}


void GestorProductos::agregarProducto(unsigned int id,QString nombre,double precio,int stock,QString fecha_ultima_incorporacion){ // agrega un producto al vector de productos

    Producto *p = new Producto(id,nombre,precio);
    p->setCantidad(stock);
    p->setFechaUltimaIncorporacion(fecha_ultima_incorporacion);

    this->vecProductos.push_back(p);
}

//LA FUNCION DE BUSCAR SE PODRIA GENERALIZAR, YA Q ES IGUAL A LA FUNCION EN CLIENTE
short GestorProductos::buscarProducto(unsigned int ID){

    for(int i=0; i<this->vecProductos.length(); i++ ){

        if(this->vecProductos[i]->getID()==ID){
            return i;
        }
    }

    return -1;
}

Producto* GestorProductos::getProducto(unsigned int ID){

    int pos = this->buscarProducto(ID);
    if(pos!=-1){
        return this->vecProductos[pos];
    }

    return NULL;
}


QVector<unsigned int> GestorProductos::getAll_ID_Productos(){

    QVector <unsigned int> vID;

    for(int i=0; i<this->vecProductos.length(); i++ ){

        vID.push_back(this->vecProductos[i]->getID());
    }

    return  vID;
}


void GestorProductos::modificarPrecio(unsigned int ID,QString precio){

    short posProducto = this->buscarProducto(ID);

    qDebug()<<"La fila es" << ID;

    if ( posProducto != -1){

        // Actualizo el precio en la BBDD

        this->db->abrir();
        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        QString query = "update Productos set precio ="+precio+" where id_Producto="+QString::number(ID);
        consulta->prepare(query);

        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){
            qDebug()<<"Error al ejecutar la consulta SQL";
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Precio Productos");
            this->db->cerrar();
            delete consulta;

        }
        else{

            this->db->getbaseDatos().commit(); // confirmo la transaccion
            this->db->cerrar();
            delete consulta;

            //Fin de la actualizacion con la BBBDD

            //Cambio el valor en el vector actual de productos
            this->vecProductos[posProducto]->setPrecio(precio.toDouble());


            QMessageBox::information(0,"OK" , "Se actualizo correctamente el precio del producto");
        }
    }
    else{
        qDebug("El ID del Producto no se encontro en el vector de Productos 1");
         QMessageBox::critical(0,"Error" , "El ID del Producto no fue enconontrado");
    }

}

void GestorProductos::modificarCantidad(unsigned int ID,QString cantidad){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        // Actualizo el stock en la BBDD

        this->db->abrir();
        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        QString query = "update Productos set cant_Stock="+cantidad+" where id_Producto="+QString::number(ID)+";";

        consulta->prepare(query);

        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){
            qDebug()<<"Error al ejecutar la consulta SQL";
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Cantidad Productos");
            this->db->cerrar();

            delete consulta;

        }
        else{

            QDate *fecha = new QDate();

            qDebug()<< fecha->currentDate().toString("dd-MM-yyyy");

            QString query2 = "update Productos set fecha_Ultima_Incorporacion='"+fecha->currentDate().toString("dd-MM-yyyy")+"' where id_Producto="+QString::number(ID)+";";

            consulta->prepare(query2);

             if( ! consulta->exec() ){

                 qDebug()<<"Error al ejecutar la consulta SQL";
                 qDebug()<<"El error de la  consulta 2 es = "<<this->db->getbaseDatos().lastError();
                 QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Fecha incorporacion");
                 this->db->cerrar();

                 delete fecha;
                 delete consulta;

             }
             else{

                 this->db->getbaseDatos().commit(); // confirmo la transaccion
                 this->db->cerrar();

                 delete fecha;
                 delete consulta;

                 //Fin de la actualizacion con la BBBDD

                 //Cambio el valor en el vector actual de productos
                 this->vecProductos[posProducto]->setCantidad(cantidad.toInt());
                 this->vecProductos[posProducto]->setFechaUltimaIncorporacion(fecha->currentDate().toString("dd-MM-yyyy"));


                 QMessageBox::information(0,"OK" , "Se actualizo correctamente la cantidad de stock del producto");
             }

        }
    }
    else{
        qDebug("El ID del Producto no se encontro en el vector de Productos");
         QMessageBox::critical(0,"Error" , "El ID del Producto no fue enconontrado");
    }

}

/*void GestorProductos::eliminarProducto(unsigned int ID){

    int posProducto = this->buscarProducto(ID);

    if(posProducto!=-1){

        //Elimina el producto del vector
        this->vecProductos.erase(this->vecProductos.begin() + posProducto);

        //Elimino el Objeto especifico
        Producto *p = this->getProducto(ID);
        p->~Producto();
    }
    else{
        qDebug("No existe el Producto");
    }


}*/


/*void GestorProductos::modificarNombre(unsigned int ID, QString nombre){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setNombre(nombre);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
        // TIRAR UN ERROR
    }

}*/

/*void GestorProductos::modificarPeso(unsigned int ID,short peso){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setPeso(peso);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}*/

/*void GestorProductos::modificarProveedor(unsigned int ID,QString proveedor){

    short posProducto = this->buscarProducto(ID);

    if ( posProducto != -1){

        this->vecProductos[posProducto]->setNombre(proveedor);

    }
    else{
        qDebug("El ID del cliente no se encontro en el registro de clientes");
         // TIRAR UN ERROR
    }

}*/

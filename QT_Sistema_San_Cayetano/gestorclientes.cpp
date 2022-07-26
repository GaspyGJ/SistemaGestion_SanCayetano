//@@ falta que la base de "desconecte" creo
#include "gestorclientes.h"
#include "registroclientes.h"

#include <QVector>
#include <QMessageBox>


GestorClientes::GestorClientes(){

    this->inicializarConBaseDeDatos();

}

GestorClientes::~GestorClientes(){
    //@@ esto es necesario ??? igual no estoy eliminando el vector del todo, nose
    for(int i=0; i<this->vecClientes.length(); i++ ){
        delete this->vecClientes[i];
    }

}

void GestorClientes::inicializarConBaseDeDatos(){

    {
        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();


        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        //@@ HACER LA CONSULTA CORRESPONDIENT


        consulta->prepare("select C.id_Cliente,C.nombre,D.direccion,T.telefono from (Clientes C left join DireccionC D on C.id_Cliente=D.id_Cliente) left join TelefonosD T on D.direccion=T.direccion and D.id_Cliente=T.id_Cliente;");

        if( ! consulta->exec() ){
            qDebug()<<"El Gestor Cliente dice :\n Error al ejecutar la consulta SQL GESTOR CLIENTE";
            qDebug()<<this->db->getbaseDatos().lastError();
        }

        while( consulta->next() ){ // mientras la consulta tenga datos sigo leyendo (fila por fila)

            unsigned int ID =consulta->value("id_Cliente").toUInt();
            QString nombre =consulta->value("nombre").toString();
            QString direccion =consulta->value("direccion").toString();
            QString telefono = consulta->value("telefono").toString();

            if( this->buscarCliente(ID)==1){//ya existe el cliente


                if(this->getCliente(ID)->getEstablecimiento(direccion)!=NULL){ // si existe establecimiento con esa direccion
                    this->getCliente(ID)->getEstablecimiento(direccion)->setTelefono(telefono);
                    //qDebug()<<"El Gestor Cliente dice :\nSe agrego un telefono al Establecimiento de direccion:"<<direccion<<"\n del cliente : "<<nombre;
                }
                else{
                    this->getCliente(ID)->setEstablecimiento(direccion,telefono);
                    //qDebug()<<"El Gestor Cliente dice :\nSe agrego un Establecimiento con direccion y telefono:"<<direccion+","+telefono<<"\n al cliente : "<<nombre;
                }
            }
            else{

                Establecimiento *establecimiento = new Establecimiento(direccion,telefono);

                agregarClienteToVec(ID,nombre,establecimiento);

                //qDebug()<<"El Gestor Cliente dice :\nSe agrego a la lista cliente :"<<nombre<<"\n con ID:"<<ID<<"\n Establecimiento con la direccion de : "<<direccion<<"\n con el telefono: "<<telefono<<Qt::endl;
            }
        }

        delete consulta;

    }

    this->db->cerrar();

    delete this->db;

    this->db = nullptr;
}

void GestorClientes::agregarClienteToVec(unsigned int id,QString nombre,Establecimiento *establecimiento){

    // el mismo cliente pero tiene dos direcciones --> distintos objetos

    Cliente *c= new Cliente(id,nombre,establecimiento);

    this->vecClientes.push_back(c);

}

void GestorClientes::eliminarClienteToVec(unsigned int ID){

    //@@ porque la advertencia ??????

    short pos = this->buscarCliente(ID);

    //QVector<Cliente *>::const_iterator i =this->vecClientes.begin();  --> no muestra la advertencia

    QVector<Cliente *>::iterator i =this->vecClientes.begin();

    this->vecClientes.erase(i+pos);

}

short GestorClientes::buscarCliente(unsigned int ID){// retorna la posicion o retorna -1

    for(int i=0; i<this->vecClientes.length(); i++ ){

        if(this->vecClientes[i]->getID()==ID){
            return i;
        }
    }

    return -1;
}

short GestorClientes::buscarClientePorNombre(QString nombre){

    for(int i=0; i<this->vecClientes.length(); i++ ){

        if(this->vecClientes[i]->getNombre()==nombre){
            return i;
        }
    }

    return -1;
}

Cliente* GestorClientes::getCliente(unsigned int ID){

    int pos = this->buscarCliente(ID);
    if(pos!=-1){
        return this->vecClientes[pos];
    }

    return NULL;

}

QVector<unsigned int> GestorClientes::getAll_ID_Clientes(){
    QVector <unsigned int> vID;

    for(int i=0; i<this->vecClientes.length(); i++ ){

        vID.push_back(this->vecClientes[i]->getID());
    }

    return  vID;
}

QVector<Cliente *> GestorClientes::getAll_Clientes(){
    return this->vecClientes;
}

short GestorClientes::crearNuevoCliente(QString nombre ,QString direccion , QString telefono){ // retorna 1 si se creo en la BBDD correctamente

    //PRIMERO LO AGREGAMOS A LA BBDD

    this->db= new BaseDeDatos();

    this->db->Conectar();

    this->db->abrir();



    QSqlQuery *consulta00= new QSqlQuery(this->db->getbaseDatos());

    QSqlQuery *consulta0= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta2= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta3= new QSqlQuery(this->db->getbaseDatos());

    //@@ HACER LA CONSULTA CORRESPONDIENT

    QString ID="Sin ID";
    consulta00->prepare("select * from sqlite_sequence  where name = 'Clientes';");
    consulta00->exec();

    while( consulta00->next() ){ // mientras la consulta tenga datos sigo leyendo (fila por fila)

        ID = QString::number( consulta00->value("seq").toInt() +1 );

        //qDebug()<<consulta00->value("seq").toString();
        //qDebug()<<"El Gestor Cliente dice :\nEl id del cliente a crear es = "<<ID;

    }

    QString insertPragma = "PRAGMA foreign_keys = ON;";

    QString insertCliente = "INSERT INTO Clientes (nombre) VALUES ('"+nombre+"');";

    QString insertDireccionC = "INSERT INTO DireccionC (id_Cliente,direccion) VALUES ( "+ID+",'"+direccion+"');";

    QString insertTelefonoD = "INSERT INTO TelefonosD (id_Cliente,direccion,telefono) VALUES ( "+ID+",'"+direccion+"','"+telefono+"');";


    consulta0->prepare(insertPragma);
    consulta0->exec();

    this->db->getbaseDatos().transaction();

    consulta->prepare(insertCliente);
    consulta2->prepare(insertDireccionC);
    consulta3->prepare(insertTelefonoD);


    if( ! consulta->exec() ){

        qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (crearNuevoCliente) --> insertCliente, El ID del cliente era"<<ID;
        qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError().text();
        QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Crear Nuevo Cliente");

        return -1;
    }

    else if( ! consulta2->exec() ){

        qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (crearNuevoCliente) --> insertDireccion, El ID del cliente era"<<ID;
        qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
        QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Crear Nuevo Cliente");

        return -1;
    }
    else if ( ! consulta3->exec()){
        qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (crearNuevoCliente) --> insertTelefono, El ID del cliente era"<<ID;
        qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
        QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Crear Nuevo Cliente");

        return -1;
    }
    else{

        this->db->getbaseDatos().commit();

        delete consulta00;
        delete consulta;
        delete consulta2;
        delete consulta3;

        this->db->cerrar();

        delete this->db;

        this->db = nullptr;

        //AHORA LO AGREGAMOS EN EL VECTOR DEL GESTOR
        Establecimiento *establecimiento = new Establecimiento(direccion,telefono);

        agregarClienteToVec(ID.toUInt(),nombre,establecimiento);

        return 1;
    }

}

short GestorClientes::eliminarCliente(unsigned int ID){

    //PRIMERO LO ELIMINAMOS DE LA BBDD

    short retorno = -1;

    this->db= new BaseDeDatos();

    this->db->Conectar();

    this->db->abrir();

    QSqlQuery *consulta0= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta2= new QSqlQuery(this->db->getbaseDatos());
    QSqlQuery *consulta3= new QSqlQuery(this->db->getbaseDatos());

    QString insertPragma = "PRAGMA foreign_keys = ON;";

    QString eliminarCliente = "DELETE FROM Clientes Where id_Cliente ="+QString::number(ID)+";";

    QString eliminarDireccion = "DELETE FROM DireccionC Where id_Cliente ="+QString::number(ID)+";";

    QString eliminarTelefono = "DELETE FROM TelefonosD Where id_Cliente ="+QString::number(ID)+";";

    consulta0->prepare(insertPragma);
    consulta0->exec();


    if(this->buscarCliente(ID) != -1){
        QString nombreCliente = this->getCliente(ID)->getNombre();

        if ( QMessageBox::question(0, "Pregunta", "Desea eliminar relamente el cliente "+nombreCliente+" de la base de datos?") == QMessageBox::Yes) {

            qDebug()<<"La consulta a ejecutar fue = "<<eliminarTelefono<<" \n"<<eliminarDireccion<<"\n"<<eliminarCliente;

            this->db->getbaseDatos().transaction();

            consulta->prepare(eliminarTelefono);

            consulta2->prepare(eliminarDireccion);

            consulta3->prepare(eliminarCliente);


            if( ! consulta->exec() ){

                qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (elimnarCliente) --> Eliminar TELEFONO";
                qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
                QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar TELEFONO");

                delete consulta0;
                delete consulta;
                delete consulta2;
                delete consulta3;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                retorno = -1;
            }

            else if( ! consulta2->exec() ){

                qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (crearNuevoCliente) --> Eliminar DIRECCION";
                qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
                QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar DIRECCION");

                delete consulta0;
                delete consulta;
                delete consulta2;
                delete consulta3;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                return -1;
            }
            else if( ! consulta3->exec() ){

                qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL GestorCliente (crearNuevoCliente) --> Eliminar CLIENTE";
                qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
                QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar CLIENTE");

                delete consulta0;
                delete consulta;
                delete consulta2;
                delete consulta3;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                retorno = -1;
            }
            else{

                this->db->getbaseDatos().commit();

                delete consulta0;
                delete consulta;
                delete consulta2;
                delete consulta3;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                //AHORA Eliminamos el cliente del vec de clientes

                eliminarClienteToVec(ID);

                retorno = 1;

            }
        }
    }
    else{

        qDebug("El Gestor Cliente dice :\nEl ID del Cliente no se encontro en el vector de Clientes");
        QMessageBox::critical(0,"Error" , "El ID del Cliente no fue enconontrado");

        retorno = -1;
    }

    return retorno;
}

short GestorClientes::actualizarCliente(short columna,QString datoViejo,QString datoActualizado,unsigned int ID,QString direccion){

    short retorno;

    switch(columna){
    case RegistroClientes::NOMBRE : retorno  = modificarNombre(ID,datoViejo,datoActualizado); break;
    case RegistroClientes::DIRECCION : retorno  = modificarDireccion(ID,datoViejo,datoActualizado); break;
    case RegistroClientes::TELEFONO : retorno  = modificarTelefono(ID,direccion,datoViejo,datoActualizado); break;
    default : retorno = -2;
    }


    return retorno;
}

short GestorClientes::modificarTelefono(unsigned int ID,QString direccion ,QString telefonoViejo, QString telefonoNuevo){

    short retorno;

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        // Actualizo el telefono en la BBDD

        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();

        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());

        QString query;

        if(telefonoViejo=="Sin Telefono"){

            if(direccion==""){
                //qDebug()<<"Se ejecuto LA DE SIN TELEFONO SIN DIRECCION";
                query = "update TelefonosD set telefono= '"+telefonoNuevo+"' where (telefono='' or telefono is Null) and ( direccion='' or direccion is Null ) and id_Cliente="+QString::number(ID)+";";
            }
            else{
                //qDebug()<<"Se ejecuto LA DE SIN TELEFONO CON DIRECCION";
                query = "update TelefonosD set telefono= '"+telefonoNuevo+"' where (telefono='' or telefono is Null) and direccion='"+direccion+"' and id_Cliente="+QString::number(ID)+";";
            }

        }
        else{

            if(direccion==""){
                //qDebug()<<"Se ejecuto LA DE CON TELEFONO SIN DIRECCION";
                query = "update TelefonosD set telefono= '"+telefonoNuevo+"' where telefono='"+telefonoViejo+"' and ( direccion='' or direccion is Null ) and id_Cliente="+QString::number(ID)+";";
            }
            else{
                //qDebug()<<"Se ejecuto LA DE CON TELEFONO CON DIRECCION";
                query = "update TelefonosD set telefono= '"+telefonoNuevo+"' where telefono='"+telefonoViejo+"' and direccion='"+direccion+"' and id_Cliente="+QString::number(ID)+";";
            }

        }

        qDebug()<<"consulta ejecutada = "<<query;
        consulta->prepare(query);

        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){


            qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL modificar Telefono";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Telefono Cliente");

            delete consulta;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            retorno = -1;

        }
        else{

            this->db->getbaseDatos().commit(); // confirmo la transaccion

            delete consulta;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            //Fin de la actualizacion con la BBBDD

            //Cambio el valor en el vector actual de clientes
            foreach(Establecimiento *e,this->getCliente(ID)->getAll_Establecimientos()){

                if(e->getDireccion()==direccion){

                    e->actualizarTelefono(telefonoViejo,telefonoNuevo);

                }
            }




            QMessageBox::information(0,"OK" , "Se actualizo correctamente el telefono del cliente");

            retorno = 1;
        }
    }
    else{
        qDebug("El Gestor Cliente dice :\nEl ID del Cliente no se encontro en el vector de Clientes 2");
        QMessageBox::critical(0,"Error" , "El ID del Cliente no fue enconontrado");

        retorno = -1;
    }

    return retorno;

}

short GestorClientes::modificarDireccion(unsigned int ID,QString direccionVieja,QString direccionNueva){

    short retorno;

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        // Actualizo el telefono en la BBDD

        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();

        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());
        QSqlQuery *consulta2= new QSqlQuery(this->db->getbaseDatos());

        QString query1,query2;


        if(direccionVieja=="Sin Direccion"){
            //qDebug()<<"Se ejecuto LA DE SIN DIRECCION";
            query1 = "update DireccionC set direccion= '"+direccionNueva+"' where (direccion='' or direccion is Null) and id_Cliente="+QString::number(ID)+";";

            query2 = "update TelefonosD set direccion= '"+direccionNueva+"' where (direccion='' or direccion is Null) and id_Cliente="+QString::number(ID)+";";
        }
        else{
            //qDebug()<<"Se ejecuto LA DE CON DIRECCION";
            query1 = "update DireccionC set direccion= '"+direccionNueva+"' where direccion='"+direccionVieja+"' and id_Cliente="+QString::number(ID)+";";

            query2 = "update TelefonosD set direccion= '"+direccionNueva+"' where  direccion='"+direccionVieja+"' and id_Cliente="+QString::number(ID)+";";
        }

        consulta->prepare(query1);
        consulta2->prepare(query2);


        qDebug()<<"consulta ejecutada ="<<query1;
        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){

            qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL modificar direccion cambiar direccion";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Direccion Cliente");

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            retorno = -1;

        }
        else if(! consulta2->exec()){

            qDebug()<<"El Gestor Cliente dice :\Error al ejecutar la consulta SQL modificar direccion cambiar en telefonos";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Direccion Cliente");

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            retorno = -1;
        }
        else{
            //Cambio el valor en el vector actual de clientes

            if(direccionVieja=="Sin Direccion"){
                direccionVieja="";
            }


            foreach(Establecimiento *e,this->getCliente(ID)->getAll_Establecimientos()){

                if(e->getDireccion()==direccionVieja){
                    e ->setDireccion(direccionNueva);
                }

            }

            this->db->getbaseDatos().commit(); // confirmo la transaccion

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            //Fin de la actualizacion con la BBBDD

            QMessageBox::information(0,"OK" , "Se actualizo correctamente la direccion del cliente");

            retorno = 1;
        }
    }
    else{
        qDebug("El Gestor Cliente dice :\El ID del Cliente no se encontro en el vector de Clientes 2");
        QMessageBox::critical(0,"Error" , "El ID del Cliente no fue enconontrado");

        retorno = -1;
    }

    return retorno;



}

short GestorClientes::modificarNombre(unsigned int ID,QString nombreViejo,QString nombreNuevo){

    short retorno;

    short posCliente = this->buscarCliente(ID);

    if ( posCliente != -1){

        // Actualizo el telefono en la BBDD

        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();

        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());



        QString query = "update Clientes set nombre= '"+nombreNuevo+"' where nombre='"+nombreViejo+"';";
        consulta->prepare(query);


        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){

            qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL modificar nombre";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();

            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Update Nombre Cliente");

            delete consulta;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            retorno = -1;

        }
        else{

            this->db->getbaseDatos().commit(); // confirmo la transaccion

            delete consulta;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            //Fin de la actualizacion con la BBBDD

            //Cambio el valor en el vector actual de clientes
            this->vecClientes[posCliente]->setNombre(nombreNuevo);

            QMessageBox::information(0,"OK" , "Se actualizo correctamente el nombre del cliente");

            retorno = 1;
        }
    }
    else{
        qDebug("El Gestor Cliente dice :\nEl ID del Cliente no se encontro en el vector de Clientes 2");
        QMessageBox::critical(0,"Error" , "El ID del Cliente no fue enconontrado");

        retorno = -1;
    }

    return retorno;


}

short GestorClientes::agregarDireccionToCliente(QString nombreClienteSeleccionado,QString valorDeDireccion){

    short retorno;

    short posCliente=-1;
    short contador=0;

    foreach(Cliente *c , this->getAll_Clientes() ){

        if(c->getNombre() == nombreClienteSeleccionado){
            posCliente = contador;
            break;
        }
        contador++;
    }

    if ( posCliente != -1){

        if(valorDeDireccion==""){

            qDebug()<<"El Gestor Cliente dice :\nNo se puede agregar direccion ,el campo de direccion esta vacio";

            QMessageBox::critical(0,"Error de Base de Datos","Agrege un valor en el campo de direccion");

            return -1;

        }
        else{

            //@@ NO VERIFICO QUE LA DIRECCION QUE INGRESE NO ESTE REPETIDA CON ALGUNA YA EXISTENTE. DEBERIA HACERLO

            // Actualizo el telefono en la BBDD

            this->db= new BaseDeDatos();

            this->db->Conectar();

            this->db->abrir();

            QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());                         //creo q deberia ser asi
                                                                                                  //this->getAll_Clientes().contains(posCliente)->getID()
            QString query = "insert into DireccionC(id_Cliente,direccion) values("+QString::number( this->getAll_Clientes()[posCliente]->getID() )+", '"+valorDeDireccion+"');";

            qDebug()<<"consulta ejecutada = "<<query;

            consulta->prepare(query);


            this->db->getbaseDatos().transaction(); //empiezo la transaccion

            if( ! consulta->exec() ){


                qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL agregar Direccion";
                qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();
                QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Agregar Direccion a Cliente");

                delete consulta;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                retorno = -1;

            }
            else{

                this->db->getbaseDatos().commit(); // confirmo la transaccion

                delete consulta;

                this->db->cerrar();

                delete this->db;

                this->db = nullptr;

                //Fin de la actualizacion con la BBBDD

                //Agrego un establecimiento a ese cliente.  //direccion , telefono = vacio
                this->vecClientes[posCliente]->setEstablecimiento(valorDeDireccion,"");

                QMessageBox::information(0,"OK" , "Se agrego correctamente la direccion del cliente");

                retorno = 1;
            }


        }

    }
    else{
        qDebug()<<"El Gestor Cliente dice :\nError no se encontro el cliente para agregar la direccion";

        retorno = -1 ;
    }

    return retorno;
}

short GestorClientes::eliminarDireccionToCliente(QString nombreClienteSeleccionado,QString valorDeDireccion){

    short retorno=-1;
    short posCliente=-1;
    short contador=0;

    foreach(Cliente *c , this->getAll_Clientes() ){

        if(c->getNombre() == nombreClienteSeleccionado){
            posCliente = contador;
            break;
        }
        qDebug()<<"Pos Cliente = "<<posCliente;
        qDebug()<<"Contador = "<<contador;
        contador++;
    }


    if ( posCliente != -1){


        // Actualizo el telefono en la BBDD

        this->db= new BaseDeDatos();

        this->db->Conectar();

        this->db->abrir();


        QSqlQuery *consulta= new QSqlQuery(this->db->getbaseDatos());
        QSqlQuery *consulta2= new QSqlQuery(this->db->getbaseDatos());

                                                                                                                        //this->getAll_Clientes().contains(posCliente)->getID()
        QString eliminarDireccion = "DELETE FROM DireccionC Where direccion='"+valorDeDireccion+"' and id_Cliente ="+QString::number( this->getAll_Clientes()[posCliente]->getID() )+";";

        QString eliminarTelefonoAsociadoADireccion = "DELETE FROM TelefonosD Where direccion='"+valorDeDireccion+"' and id_Cliente ="+QString::number( this->getAll_Clientes()[posCliente]->getID() )+";";


        consulta->prepare(eliminarTelefonoAsociadoADireccion);

        consulta2->prepare(eliminarDireccion);


        this->db->getbaseDatos().transaction(); //empiezo la transaccion

        if( ! consulta->exec() ){



            qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL eliminar telefono asociado a eliminar direccion";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();

            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar telefono asociado a direccion");

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;


            retorno = -1;
        }
        else if( ! consulta2->exec() ){

            qDebug()<<"El Gestor Cliente dice :\nError al ejecutar la consulta SQL eliminar direccion";
            qDebug()<<"El Gestor Cliente dice :\nUltimo Error de BBDD = "<<this->db->getbaseDatos().lastError();

            QMessageBox::critical(0,"Error de Base de Datos","Error al ejecutar la consulta SQL Eliminar direccion");

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            retorno = -1;

        }
        else{

            this->db->getbaseDatos().commit(); // confirmo la transaccion

            delete consulta;
            delete consulta2;

            this->db->cerrar();

            delete this->db;

            this->db = nullptr;

            //Fin de la actualizacion con la BBBDD

            //Cambio el valor en el vector actual de clientes
            //this->vecClientes[posCliente]->setNombre(nombreNuevo);

            QMessageBox::information(0,"OK" , "Se elimino correctamente el nombre la direccion");

            retorno = 1;
        }
    }
    else{
        qDebug("El Gestor Cliente dice :\nEl ID del Cliente no se encontro en el vector de Clientes 2");
        QMessageBox::critical(0,"Error" , "El ID del Cliente no fue enconontrado");

        retorno = -1;
    }

    return retorno;


}

void GestorClientes::actualizarGestor(){

    this->vecClientes.clear();

    this->inicializarConBaseDeDatos();

}



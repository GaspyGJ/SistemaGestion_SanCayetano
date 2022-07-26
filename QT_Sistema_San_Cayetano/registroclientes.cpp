//@@ DEBERIA CENTRAR LOS ITEMS DE LAS COLUMNAS PERO NO ENCONTRE MANERA
//los new QTableWidget ... deberia aplicarles delete???

//@@ TENDRIA Q TENER UN REGISTRO EN LA BDD CON QUE Y CUANDO SE HICIERON CAMBIOS ????

//HACER LAS VERIFICACIONES DE LOS INPUTS ....
//los inputs de telefono , VERIFICACION que se puedan agregar solo numeros , '+' y '( )'

#include "registroclientes.h"
#include "ui_registroclientes.h"

RegistroClientes::RegistroClientes(Administrador *administrador,QWidget *parent):QMainWindow(parent),uiRegistroClientes(new Ui::RegistroClientes){

    uiRegistroClientes->setupUi(this);

    setWindowTitle("Registro de Clientes");

    this->administrador = administrador;

    this->inicializarTabla();

    this->inicializarComboBox();

    this->setValidaciones();

}


RegistroClientes::~RegistroClientes(){
    delete uiRegistroClientes;
}

void RegistroClientes::setValidaciones(){
}

void RegistroClientes::inicializarComboBox(){


    this->uiRegistroClientes->comboBox_seleccionarCliente->clear();
    //inicializar combo box

    this->uiRegistroClientes->comboBox_seleccionarCliente->addItem("------");

    QStringList nombresClientes;

    foreach(Cliente *c, this->administrador->getGestorClientes()->getAll_Clientes() ){

        nombresClientes.push_back(c->getNombre());
    }

    nombresClientes.removeDuplicates();

    foreach(QString nombre, nombresClientes ){
        this->uiRegistroClientes->comboBox_seleccionarCliente->addItem(nombre);
    }



}


void RegistroClientes::inicializarTabla(){

    //### Inicializacion sobre la tabla
    this->ultimaFilaConDatos=-1;

    //agrego a la tabla los datos de los productos registrados en el gestor
    this->rellenarTableClientes();

    //Para que las Columans de las tablas sea de vista dinamica
    uiRegistroClientes->table_Clientes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    uiRegistroClientes->table_Clientes->horizontalHeader()->setSectionResizeMode(ID,QHeaderView::Fixed);
    uiRegistroClientes->table_Clientes->resizeColumnToContents(ID);

    // uiRegistroClientes->table_Clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //para que la seleccion sea de la fila entera
    uiRegistroClientes->table_Clientes->setSelectionBehavior(QAbstractItemView::SelectRows);

    //para que no aparezca el numero de la fila como una columna mas
    uiRegistroClientes->table_Clientes->verticalHeader()->setVisible(false);

    //### Fin de la inicializacion sobre la tabla

}


void RegistroClientes::rellenarTableClientes(){ // toma los clientes del gestor y los coloca en la tabla

    //DESACTIVAR SIGNALS --
    bool oldState = uiRegistroClientes->table_Clientes->blockSignals(true);

    uiRegistroClientes->table_Clientes->setRowCount(0); // elimino las posibles filas (esto es mas que nada para cuando elimino un Cliente)

    //@@debo eliminar estos punteros???
    GestorClientes *GC=this->administrador->getGestorClientes();

    unsigned nroFila = this->ultimaFilaConDatos;

    foreach(Cliente *c ,GC->getAll_Clientes()){


        QString identificador  = QString::number(c->getID());
        QString nombreCliente=  c->getNombre();
        QString direccionCliente;


        foreach(Establecimiento *e , c->getAll_Establecimientos()){ // osea por cada direccion del cliente hacer esto

            direccionCliente = e->getDireccion();

            if(direccionCliente==""){
                direccionCliente="Sin Direccion";
            }

            //qDebug()<<"El Cliente :"<<nombreCliente<<"\n con ID:"<<identificador<<"\n con la direccion de : "<<direccionCliente<<Qt::endl;

            QStringList telefonosCliente = e->get_All_Telefonos();

            QString telefonoCliente="";

            bool bandera=false;

            foreach(QString t , telefonosCliente){ // por cada telefono hacer esto

                if(t!=""){
                    telefonoCliente=telefonoCliente+t+" , ";
                }
                else{
                    bandera=true;
                }
            }

            if(bandera==true){
                telefonoCliente="Sin Telefono";
            }
            else{
                telefonoCliente.resize(telefonoCliente.length()-3);
            }

            //qDebug()<<"Registro Stock dice: ";
            //qDebug()<<"Se agrego a la TABLA cliente :"<<nombreCliente<<"\n con ID:"<<identificador<<"\n con la direccion de : "<<direccionCliente<<"\n con el telefono: "<<telefonoCliente<<Qt::endl;


            nroFila+=1;

            uiRegistroClientes->table_Clientes->insertRow(nroFila );

            uiRegistroClientes->table_Clientes->setItem(nroFila ,
                                                        ID,
                                                        new QTableWidgetItem(identificador));
            uiRegistroClientes->table_Clientes->setItem(nroFila ,
                                                        NOMBRE,
                                                        new QTableWidgetItem(nombreCliente));
            uiRegistroClientes->table_Clientes->setItem(nroFila ,
                                                        TELEFONO,
                                                        new QTableWidgetItem(telefonoCliente));
            uiRegistroClientes->table_Clientes->setItem(nroFila ,
                                                        DIRECCION,
                                                        new QTableWidgetItem(direccionCliente));
        }


    }

    //HABILITO LAS SENIALES
        uiRegistroClientes->table_Clientes->blockSignals(oldState);

}

void RegistroClientes::on_btn_CrearCliente_clicked(){


    //@@AGREGAR LAS VALIDACIONES de los inputs

    QString nombre = uiRegistroClientes->input_Nombre->text();

    QString direccion = uiRegistroClientes->input_Direccion->text();

    QString telefono = uiRegistroClientes->input_Telefono->text();


    if(nombre != "" ){
        if( this->administrador->getGestorClientes()->crearNuevoCliente(nombre,direccion,telefono) == 1 ){

            this->rellenarTableClientes();

            //qDebug()<<"El Cliente se creo Correctamente";

            QMessageBox::information(0,"OK" , "El Cliente se creo Correctamente");

            uiRegistroClientes->input_Nombre->clear();
            uiRegistroClientes->input_Telefono->clear();
            uiRegistroClientes->input_Direccion->clear();

            this->inicializarComboBox();
           // this->rellenarTableClientes();


        }
        else{
            //qDebug()<<"El Cliente NO se creo";
            QMessageBox::critical(0,"Error" , "El Cliente NO se creo Correctamente");
        }
    }
    else{
         QMessageBox::critical(0,"Error" , "Coloque un Nombre para el Cliente");
    }




}

void RegistroClientes::on_btn_EliminarCliente_clicked(){

    QString nombreClienteSeleccionado = uiRegistroClientes->comboBox_seleccionarCliente->currentText();

    unsigned int id=-1;

    foreach(Cliente *c ,this->administrador->getGestorClientes()->getAll_Clientes()){
        if(nombreClienteSeleccionado==c->getNombre()){
            id= c->getID();
            break;
        }
    }

    if( this->administrador->getGestorClientes()->eliminarCliente(id) == 1 ){

        //qDebug()<<"El Cliente se elimino Correctamente";

        this->administrador->getGestorClientes()->actualizarGestor();
        this->inicializarComboBox();
        this->rellenarTableClientes();


        QMessageBox::information(0,"OK" , "El Cliente se elimino Correctamente");

        uiRegistroClientes->input_Nombre->clear();
        uiRegistroClientes->input_Telefono->clear();
        uiRegistroClientes->input_Direccion->clear();
    }
    else{
        //qDebug()<<"El Cliente NO se elimino";
        QMessageBox::critical(0,"Error" , "El Cliente NO se elimino");
    }

}

void RegistroClientes::on_btn_AgregarDireccion_clicked(){


    QString nombreClienteSeleccionado = uiRegistroClientes->comboBox_seleccionarCliente->currentText();

    //COLOCAR NOMBRE DE LA DIRECCION
    QString valorDeDireccion = uiRegistroClientes->input_AgregarDireccion->text();


    if(this->administrador->getGestorClientes()->agregarDireccionToCliente(nombreClienteSeleccionado,valorDeDireccion) == 1){

        //qDebug()<<"Se agrego la direccion Correctamente";

        //this->rellenarTableClientes();

        QMessageBox::information(0,"OK" , "Se agrego la direccion Correctamente");

        uiRegistroClientes->input_AgregarDireccion->clear();

        //PROBANDO
        this->administrador->getGestorClientes()->actualizarGestor();

        this->rellenarTableClientes();

    }
    else{

        //qDebug()<<"NO se agrego la direccion Correctamente";

        QMessageBox::critical(0,"Error" ,"NO se agrego la direccion Correctamente");

    }



}

void RegistroClientes::on_btn_EliminarDireccion_clicked(){

    QMessageBox::information(0,"No implementado" , "Esta opcion no fue implementada todavia.");

    //DESCOMENTAR SI ES Q LO IMPLEMETNO

   /* QString nombreClienteSeleccionado = uiRegistroClientes->comboBox_seleccionarCliente->currentText();
    //@@@@@ DEBE APARECER UNA OPCION PARA SELECCIONAR QUE DIRECCION QUIERO ELIMINAR , UNA VEZ SELECCIONADA --> SIGO
    //FALTA SACAR EL VALOR DE LA DIRECCION NOMAS

    QString valorDeDireccion="aaaa";

    if(this->administrador->getGestorClientes()->eliminarDireccionToCliente(nombreClienteSeleccionado,valorDeDireccion) == 1){

        //qDebug()<<"Se elimino la direccion Correctamente";


        QMessageBox::information(0,"OK" , "Se elimino la direccion Correctamente");

        //PROBANDO

        this->administrador->getGestorClientes()->actualizarGestor();
        this->rellenarTableClientes();

    }
    else{

        //qDebug()<<"NO se elimino la direccion Correctamente";

        QMessageBox::critical(0,"Error" ,"NO se elimino la direccion Correctamente");

    }*/


}
void RegistroClientes::on_btn_GenerarPDF_Clientes_clicked(){
    QMessageBox::information(0,"No implementado" , "Esta opcion no fue implementada todavia.");
}

void RegistroClientes::on_table_Clientes_itemSelectionChanged(){ // para q cuando cambie de fila seleccionada , guarde los datos de la fila para actualizarlo si hay fallas

    int filaSeleccionada = uiRegistroClientes->table_Clientes->currentRow();

    //Guardo el valor anterior del item por si hay alguna falla al actualizarlo.

    qDebug()<<"Fila"<<filaSeleccionada;

    this->valoresAnterioresDelItem.clear();

    QString valorViejo;

    valorViejo = uiRegistroClientes->table_Clientes->model()->index(filaSeleccionada,NOMBRE).data().toString();

    this->valoresAnterioresDelItem.push_back(valorViejo);

    valorViejo = uiRegistroClientes->table_Clientes->model()->index(filaSeleccionada,TELEFONO).data().toString();

    this->valoresAnterioresDelItem.push_back(valorViejo);

    valorViejo = uiRegistroClientes->table_Clientes->model()->index(filaSeleccionada,DIRECCION).data().toString();

     this->valoresAnterioresDelItem.push_back(valorViejo);

    //qDebug()<< this->valoresAnterioresDelItem[NOMBRE-1]<<" , "<<this->valoresAnterioresDelItem[TELEFONO-1]<<" , "<<this->valoresAnterioresDelItem[DIRECCION-1];
    //Guardo el valor anterior del item por si hay alguna falla al actualizarlo.
}

void RegistroClientes::on_table_Clientes_itemChanged(QTableWidgetItem *item){

    int filaSeleccionada = uiRegistroClientes->table_Clientes->currentRow();

    unsigned int id = uiRegistroClientes->table_Clientes->model()->index(filaSeleccionada,ID).data().toUInt();

    QString direccion = uiRegistroClientes->table_Clientes->model()->index(filaSeleccionada,DIRECCION).data().toString();

    if(direccion=="Sin Direccion"){
        direccion="";
    }

    int columnaActualizar = uiRegistroClientes->table_Clientes->currentColumn();


    switch(columnaActualizar){

    case NOMBRE:     if( item->text()!="" ){

            if( this->administrador->getGestorClientes()->actualizarCliente( NOMBRE ,this->valoresAnterioresDelItem[NOMBRE-1] ,item->text(), id) == 1 ){

                qDebug()<<"El nombre del Cliente se actualizo Correctamente";

                this->inicializarComboBox();
                //this->rellenarTableClientes();

            }
            else{
                qDebug()<<"El Cliente NO se actualizo Correctamente";


                QMessageBox::critical(0,"Error" , "El Cliente NO se actualizo Correctamente");

                //DESACTIVAR SIGNALS --
                bool oldState = uiRegistroClientes->table_Clientes->blockSignals(true);

                uiRegistroClientes->table_Clientes->setItem(filaSeleccionada ,
                                                            NOMBRE,
                                                            new QTableWidgetItem( this->valoresAnterioresDelItem[NOMBRE-1] ));

                //ACTIVAR SIGNALS --
                uiRegistroClientes->table_Clientes->blockSignals(oldState);

            }

        }
        else{
            qDebug()<<"El Cliente NO se actualizo Correctamente";


            QMessageBox::critical(0,"Error" , "El nombre del Cliente NO puede estar vacio");

            //DESACTIVAR SIGNALS --
            bool oldState = uiRegistroClientes->table_Clientes->blockSignals(true);

            uiRegistroClientes->table_Clientes->setItem(filaSeleccionada ,
                                                        NOMBRE,
                                                        new QTableWidgetItem( this->valoresAnterioresDelItem[NOMBRE-1] ));

            //ACTIVAR SIGNALS --
            uiRegistroClientes->table_Clientes->blockSignals(oldState);

        }

        break;


    case DIRECCION:     if( this->administrador->getGestorClientes()->actualizarCliente( DIRECCION ,this->valoresAnterioresDelItem[DIRECCION-1] ,item->text(), id)  == 1 ){

            qDebug()<<"La direccion del Cliente se actualizo Correctamente";

        }
        else{
            qDebug()<<"El Cliente NO se actualizo Correctamente";

            QMessageBox::critical(0,"Error" , "La direccion del Cliente NO se actualizo");

            //DESACTIVAR SIGNALS --
            bool oldState = uiRegistroClientes->table_Clientes->blockSignals(true);

            uiRegistroClientes->table_Clientes->setItem(filaSeleccionada ,
                                                        DIRECCION,
                                                        new QTableWidgetItem( this->valoresAnterioresDelItem[DIRECCION-1] ));


            //ACTIVAR SIGNALS --
            uiRegistroClientes->table_Clientes->blockSignals(oldState);


        }

        break;

    case TELEFONO:     if( this->administrador->getGestorClientes()->actualizarCliente( TELEFONO ,this->valoresAnterioresDelItem[TELEFONO-1] ,item->text(), id , direccion ) == 1 ){

            qDebug()<<"El telefono del Cliente se actualizo Correctamente";


        }
        else{
            qDebug()<<"El Cliente NO se actualizo Correctamente";

            QMessageBox::critical(0,"Error" , "El telefono del Cliente NO se actualizo");

            //DESACTIVAR SIGNALS --
            bool oldState = uiRegistroClientes->table_Clientes->blockSignals(true);

            uiRegistroClientes->table_Clientes->setItem(filaSeleccionada ,
                                                        TELEFONO,
                                                        new QTableWidgetItem( this->valoresAnterioresDelItem[TELEFONO-1] ));

            //ACTIVAR SIGNALS --
            uiRegistroClientes->table_Clientes->blockSignals(oldState);


        }

        break;

        //default: //qDebug()<<"Error: No se encontro Columna para modificar";

    }

    this->administrador->getGestorClientes()->actualizarGestor();
    this->rellenarTableClientes();// no puedo volver a rellenarla porq al rellenarla vuelve a esta funcion porq se cambia el valor de los items

}

void RegistroClientes::on_btn_Volver_clicked(){

    this->administrador->getGestorClientes()->actualizarGestor();

    this->actualizacionNombre_or_Direcciones(); // envio senial a la ventana principal para actualizarr los combo box

    this->~RegistroClientes();
}



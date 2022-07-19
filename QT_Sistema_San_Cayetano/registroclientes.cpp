#include "registroclientes.h"
#include "ui_registroclientes.h"

RegistroClientes::RegistroClientes(Administrador *administrador,QWidget *parent):QMainWindow(parent),uiRegistroClientes(new Ui::RegistroClientes){

    uiRegistroClientes->setupUi(this);

    setWindowTitle("Registro de Clientes");

    this->administrador = administrador;

    this->inicializarTabla();

    this->setValidaciones();

}


RegistroClientes::~RegistroClientes(){
    delete uiRegistroClientes;
}

void RegistroClientes::setValidaciones(){

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

    uiRegistroClientes->table_Clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //para que la seleccion sea de la fila entera
    uiRegistroClientes->table_Clientes->setSelectionBehavior(QAbstractItemView::SelectRows);

    //para que no aparezca el numero de la fila como una columna mas
    uiRegistroClientes->table_Clientes->verticalHeader()->setVisible(false);

    //### Fin de la inicializacion sobre la tabla

}

void RegistroClientes::rellenarTableClientes(){ // toma los clientes del gestor y los coloca en la tabla

    //@@debo eliminar estos punteros???
    GestorClientes *GC=this->administrador->getGestorClientes();
    auto IDs=GC->getAll_ID_Clientes();

    qDebug()<<IDs;

    unsigned nroFila = this->ultimaFilaConDatos;

    foreach(unsigned int id ,IDs){
        Cliente *c = GC->getCliente(id);

        QString identificador  = QString::number(c->getID());
        QString nombreCliente=  c->getNombre();
        QString direccionCliente = c->getDireccion();
        QString telefonoCliente = c->getTelefono();

        nroFila+=1;

        qDebug()<<"Se agrego a la TABLAcliente :"<<nombreCliente<<"\n con ID:"<<identificador<<"\n con la direccion de : "<<direccionCliente<<"\n con el telefono: "<<telefonoCliente<<Qt::endl;


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

void RegistroClientes::on_pushButton_4_clicked()
{
    this->~RegistroClientes();
}


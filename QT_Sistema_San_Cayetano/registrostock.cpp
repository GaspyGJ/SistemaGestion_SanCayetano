#include "registrostock.h"
#include "ui_registrostock.h"

#include "nuevoproducto.h"

RegistroStock::RegistroStock(Administrador *administrador,QWidget *parent) :
    QMainWindow(parent),
    uiRegistroStock( new Ui::RegistroStock)
{
    uiRegistroStock->setupUi(this);

    /*Para que las Columans de las tablas sea dinamica*/
    uiRegistroStock->table_Stock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiRegistroStock->table_Stock->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->ultimaColumnaConDatos=-1; // la tabla empieza sin datos

    this->administrador=administrador;

}

RegistroStock::~RegistroStock(){
    delete uiRegistroStock;
}

void RegistroStock::on_pushButton_5_clicked(){
 this->~RegistroStock();
}


void RegistroStock::on_btn_NuevoProducto_clicked(){

    NuevoProducto *ventanaNP = new NuevoProducto(this->administrador,this);

    connect( ventanaNP , SIGNAL(ProductoCreadoCorrectamente()) , this , SLOT(add_Last_Producto_To_Tabla()) ); // cuando se cierre

    ventanaNP->show();

}

void RegistroStock::add_Last_Producto_To_Tabla(){// toma el ultimo producto de la lista del gestor y lo coloca en la tabla

    unsigned int IDultimoProducto = this->administrador->getGestorProductos()->getLastID();

    QString nombreProducto =  this->administrador->getGestorProductos()->getProducto(IDultimoProducto)->getNombre();


    uiRegistroStock->table_Stock->insertRow(this->ultimaColumnaConDatos+1);

    uiRegistroStock->table_Stock->setItem(this->ultimaColumnaConDatos+1,
                                          NOMBRE,
                                          new QTableWidgetItem(nombreProducto));

    this->ultimaColumnaConDatos+=1;
}


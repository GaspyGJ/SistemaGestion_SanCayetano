#include "registrostock.h"
#include "ui_registrostock.h"

#include "nuevoproducto.h"

RegistroStock::RegistroStock(Administrador *administrador,QWidget *parent) :
    QMainWindow(parent),
    uiRegistroStock( new Ui::RegistroStock)
{
    uiRegistroStock->setupUi(this);

    this->administrador=administrador; // le asigno el administrador


    //DEBERIA CARGAR LA TABLA CON LOS DATOS SACADOS DE LA BBDD
    this->ultimaColumnaConDatos=-1; // la tabla empieza sin datos por ahora

    //TENGO Q CARGAR EL COMBO BOX DE PRODUCTO TAMBIEN CON LA BBDD


    /*Para que las Columans de las tablas sea dinamica*/
    uiRegistroStock->table_Stock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiRegistroStock->table_Stock->setEditTriggers(QAbstractItemView::NoEditTriggers);



}
RegistroStock::~RegistroStock(){
    delete uiRegistroStock;
}


void RegistroStock::on_pushButton_5_clicked(){
 this->~RegistroStock();
}


void RegistroStock::on_btn_NuevoProducto_clicked(){

    NuevoProducto *ventanaNP = new NuevoProducto(this->administrador,this);

    connect( ventanaNP , SIGNAL(ProductoCreadoCorrectamente()) , this , SLOT(UpdateTableProduct()) ); // cuando se cierre

    connect( ventanaNP , SIGNAL(ProductoCreadoCorrectamente()) , this , SLOT(UpdateComboProduct()) ); // cuando se cierre

    ventanaNP->show();

}

void RegistroStock::UpdateTableProduct(){// toma el ultimo producto de la lista del gestor y lo coloca en la tabla

    unsigned int IDultimoProducto = this->administrador->getGestorProductos()->getLastID();

    QString nombreProducto =  this->administrador->getGestorProductos()->getProducto(IDultimoProducto)->getNombre();


    uiRegistroStock->table_Stock->insertRow(this->ultimaColumnaConDatos+1);

    uiRegistroStock->table_Stock->setItem(this->ultimaColumnaConDatos+1,
                                          NOMBRE,
                                          new QTableWidgetItem(nombreProducto));

    this->ultimaColumnaConDatos+=1;
}

void RegistroStock::UpdateComboProduct(){ // toma el ultimo producto de la lista del gestor y lo coloca en el combo box

   /* ESTO SERIA PARA CUNANDO INICIALIZE CON LA BBDD
    * GestorProductos *GP = this->administrador->getGestorProductos();
    foreach( unsigned int producto ,GP->getAll_ID_Productos()){

        uiRegistroStock->select_Producto->addItem( GP->getProducto(producto)->getNombre() );
    }*/

    GestorProductos *GP = this->administrador->getGestorProductos();

   uiRegistroStock->select_Producto->addItem( GP->getProducto(GP->getLastID())->getNombre());

}


void RegistroStock::on_btn_ActualizarStock_clicked(){

    // FALTA HACER PARA OBTENER CUAL PRODUCTO ES, ACA LO HAGO SIEMPRE PARA EL ULTIMO PRODUCTO AGREGADO

    QString cantidadProdcuto =  uiRegistroStock->input_Cantidad->text();

    uiRegistroStock->table_Stock->setItem(this->ultimaColumnaConDatos,
                                          CANTIDAD,
                                          new QTableWidgetItem(cantidadProdcuto));


}


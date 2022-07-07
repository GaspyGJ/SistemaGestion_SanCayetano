#include "registrostock.h"
#include "ui_registrostock.h"

#include "nuevoproducto.h"

RegistroStock::RegistroStock(Administrador *administrador,QWidget *parent) :
    QMainWindow(parent),
    uiRegistroStock( new Ui::RegistroStock)
{
    uiRegistroStock->setupUi(this);

    /*Para que las Columans de las tablas sea dinamica*/
    uiRegistroStock->tablaStock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiRegistroStock->tablaStock->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->administrador=administrador;
}

RegistroStock::~RegistroStock()
{
    delete uiRegistroStock;
}

void RegistroStock::on_pushButton_5_clicked()
{
 this->~RegistroStock();
}


void RegistroStock::on_btn_NuevoProducto_clicked(){

    NuevoProducto *ventanaNP = new NuevoProducto(this->administrador,this);

    ventanaNP->show();

}


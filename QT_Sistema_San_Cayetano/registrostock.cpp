/* @@ Creo q la mayoria de las verificaciones de los inppues ya esta hecha
 * faltaria por ejemplo : cuando en cantidad se ingresa 0000... --> solo se coloque 0 y no 0000...
 * LA VALIDACION DE CANTIDAD (ENTERA) --> ACEPTA , (COMAS)  VERIFICAR ESO , PARA QUE NO LAS ACEPTE
 *
 * EL ID DEL PRODUCTO DEBERIA ESTAR EN LA TABLA , Y SACAR LOS NUMEROS DE LA FILA DE LA TABLA
*/

#include "registrostock.h"
#include "ui_registrostock.h"

#include "nuevoproducto.h"
#include <QMessageBox>

RegistroStock::RegistroStock(Administrador *administrador,QWidget *parent) :
    QMainWindow(parent),
    uiRegistroStock( new Ui::RegistroStock)
{
    uiRegistroStock->setupUi(this);

    this->administrador=administrador; // le asigno el administrador

    //##Inicializacion Validaciones Sobre los Inputs

    //validator(minimo,maximo,decimales,padre de la validacion)
    QDoubleValidator *validatorDOUBLE = new QDoubleValidator(0.00,5000.00,2,this);
    validatorDOUBLE->setNotation(QDoubleValidator::StandardNotation); // esto porq daba problemas con las notaciones con comas

    QIntValidator *validatorINT = new QIntValidator(0,5000,this);

    uiRegistroStock->input_Precio->setValidator( validatorDOUBLE );

    uiRegistroStock->input_Cantidad->setValidator( validatorINT );


    //## Fin de la inicializacion Validaciones Sobre los Inputs


    //### Inicializacion sobre la tabla

    this->ultimaColumnaConDatos=-1;

    //agrego a la tabla los datos de los productos registrados en el gestor
    this->rellenarTableProduct();

    //Para que las Columans de las tablas sea de vista dinamica
    uiRegistroStock->table_Stock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiRegistroStock->table_Stock->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //para que la seleccion sea de la fila entera
    uiRegistroStock->table_Stock->setSelectionBehavior(QAbstractItemView::SelectRows);

    //### Fin de la inicializacion sobre la tabla
}

RegistroStock::~RegistroStock(){
    delete uiRegistroStock;
}


void RegistroStock::on_pushButton_5_clicked(){
    this->~RegistroStock();
}


void RegistroStock::rellenarTableProduct(){//agarra todos los productos del gestor y los coloca en la tabla

    GestorProductos *GP=this->administrador->getGestorProductos();
    auto IDs=GP->getAll_ID_Productos();

    unsigned nroFila = this->ultimaColumnaConDatos;

    foreach(unsigned int id ,IDs){
        Producto *p = GP->getProducto(id);

        QString nombreProducto =  p->getNombre();
        QString precioProducto = QString::number(p->getPrecio()) +" $";
        QString cantidadProducto = QString::number( p->getCantidad() );
        QString fechaProducto = p->getFechaUltimaIncorporacion();

        qDebug()<<"La fecha del producto es"<<fechaProducto;
        nroFila+=1;

        uiRegistroStock->table_Stock->insertRow(nroFila );

        uiRegistroStock->table_Stock->setItem(nroFila ,
                                              NOMBRE,
                                              new QTableWidgetItem(nombreProducto));

        uiRegistroStock->table_Stock->setItem(nroFila ,
                                              PRECIO,
                                              new QTableWidgetItem(precioProducto));
        uiRegistroStock->table_Stock->setItem(nroFila ,
                                              CANTIDAD,
                                              new QTableWidgetItem(cantidadProducto));
        uiRegistroStock->table_Stock->setItem(nroFila,
                                              FECHA_INCORPORACION,
                                              new QTableWidgetItem(fechaProducto));

    }

}

void RegistroStock::on_btn_ActualizarStock_clicked(){

    int filaSeleccionada = uiRegistroStock->table_Stock->currentRow();
    QString stockAnterior = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,CANTIDAD).data().toString();
    QString nombreProducto = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,NOMBRE).data().toString();


    if(filaSeleccionada !=-1){

        QString nuevaCantidad = uiRegistroStock->input_Cantidad->text().replace(',','.');

        if(nuevaCantidad!=""){

            QMessageBox::StandardButton vConfirmacion = QMessageBox::question( this,"Actualizar Stock",
                                                                               "Se modificara el stock de "+nombreProducto+"\n Stock Anterior : "
                                                                               + stockAnterior + "\n Stock Actualizado : "+ nuevaCantidad,
                                                                               QMessageBox::Cancel|QMessageBox::Yes);

            if (vConfirmacion == QMessageBox::Yes){

                                                                            //+1 Porq las filas empiezan en 0 y el id en 1
                this->administrador->getGestorProductos()->modificarCantidad(filaSeleccionada+1,nuevaCantidad);

                uiRegistroStock->table_Stock->setItem(filaSeleccionada ,
                                                      CANTIDAD,
                                                      new QTableWidgetItem(nuevaCantidad));

                QDate *fecha = new QDate();
                uiRegistroStock->table_Stock->setItem(filaSeleccionada ,
                                                      FECHA_INCORPORACION,
                                                      new QTableWidgetItem( fecha->currentDate().toString("dd-MM-yyyy") ));
                delete fecha;

                //por si se habia puesto rojo antes
                uiRegistroStock->label_Cantidad->setStyleSheet("#label_Cantidad{color: rgb(0, 0, 0);}");
            }
        }
        else{
            uiRegistroStock->label_Cantidad->setStyleSheet("#label_Cantidad{color: rgb(255, 0, 0);}");
            QMessageBox::warning( this,"Error al actualizar Stock", "Coloque un valor en la casilla de 'Cantidad' ");
        }


        uiRegistroStock->input_Cantidad->setText("");
    }

    else{
        QMessageBox::warning( this,"Error al actualizar Stock", "Seleccione una fila a actualizar y rellene la casilla 'Cantidad'");
    }

}


void RegistroStock::on_btn_ActualizarPrecio_clicked(){

    int filaSeleccionada = uiRegistroStock->table_Stock->currentRow();
    QString precioAnterior = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,PRECIO).data().toString();
    QString nombreProducto = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,NOMBRE).data().toString();

    if(filaSeleccionada !=-1){

        QString nuevoPrecio = uiRegistroStock->input_Precio->text().replace(',','.');

        if(nuevoPrecio!=""){

            QMessageBox::StandardButton vConfirmacion = QMessageBox::question( this,"Actualizar Precio",
                                                                               "Se modificara el precio de "+nombreProducto+"\n Precio Anterior : "
                                                                               + precioAnterior + "\n Precio Actualizado : "+ nuevoPrecio + " $",
                                                                               QMessageBox::Cancel|QMessageBox::Yes);

            if (vConfirmacion == QMessageBox::Yes){
                                                                //+1 Porq las filas empiezan en 0 y el id en 1
                this->administrador->getGestorProductos()->modificarPrecio(filaSeleccionada+1,nuevoPrecio);

                uiRegistroStock->table_Stock->setItem(filaSeleccionada ,
                                                      PRECIO,
                                                      new QTableWidgetItem(nuevoPrecio + " $"));

                //por si se habia puesto rojo antes
                uiRegistroStock->label_Precio->setStyleSheet("#label_Precio{color: rgb(0, 0, 0);}");

            }
        }
        else{

            uiRegistroStock->label_Precio->setStyleSheet("#label_Precio{color: rgb(255, 0, 0);}");
            QMessageBox::warning( this,"Error al actualizar Precio  ", "Coloque un valor en la casilla de 'Precio' ");

        }

        uiRegistroStock->input_Precio->setText("");
    }

    else{
        QMessageBox::warning( this,"Error al actualizar Stock", "Seleccione una fila a actualizar y rellene la casilla 'Precio'");
    }

}


//No creo necesaria esta implementacion
/*void RegistroStock::on_btn_NuevoProducto_clicked(){

    NuevoProducto *ventanaNP = new NuevoProducto(this->administrador,this);

    connect( ventanaNP , SIGNAL(ProductoCreadoCorrectamente()) , this , SLOT(UpdateTableProduct()) ); // cuando se cierre

    connect( ventanaNP , SIGNAL(ProductoCreadoCorrectamente()) , this , SLOT(UpdateComboProduct()) ); // cuando se cierre

    ventanaNP->show();

}*/


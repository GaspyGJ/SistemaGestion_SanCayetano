/* @@ Creo q la mayoria de las verificaciones de los inputs ya esta hecha
 *
 * el validatorINT hace cosas raras con las " , " a veces las elimina a veces no. VER ESO
 *
 * DEBERIA CENTRAR LOS ITEMS DE LAS COLUMNAS PERO NO ENCONTRE MANERA
 *
 *
 * los new QTableWidget ... deberia aplicarles delete???
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

    setWindowTitle("Registro de Stock");

    this->administrador=administrador; // le asigno el administrador

    this->setValidaciones();

    this->inicializarTabla();
}


RegistroStock::~RegistroStock(){
    this->administrador=NULL;
    delete uiRegistroStock;
}


void RegistroStock::setValidaciones(){

    //##Inicializacion Validaciones Sobre los Inputs

    //validator(minimo,maximo,decimales,padre de la validacion)
    QDoubleValidator *validatorDOUBLE = new QDoubleValidator(0.00,5000.00,2,this);
    validatorDOUBLE->setNotation(QDoubleValidator::StandardNotation); // esto porq daba problemas con las notaciones con comas

    QIntValidator *validatorINT = new QIntValidator(0,5000,this);

    uiRegistroStock->input_Precio->setValidator( validatorDOUBLE );

    uiRegistroStock->input_Cantidad->setValidator( validatorINT );

    delete validatorINT;
    delete validatorDOUBLE;

    //## Fin de la inicializacion Validaciones Sobre los Inputs

}

void RegistroStock::inicializarTabla(){

    //### Inicializacion sobre la tabla
    this->ultimaColumnaConDatos=-1;

    //agrego a la tabla los datos de los productos registrados en el gestor
    this->rellenarTableProduct();

    //Para que las Columans de las tablas sea de vista dinamica
    uiRegistroStock->table_Stock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    uiRegistroStock->table_Stock->horizontalHeader()->setSectionResizeMode(ID,QHeaderView::Fixed);
    uiRegistroStock->table_Stock->resizeColumnToContents(ID);

    uiRegistroStock->table_Stock->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //para que la seleccion sea de la fila entera
    uiRegistroStock->table_Stock->setSelectionBehavior(QAbstractItemView::SelectRows);

    //para que no aparezca el numero de la fila como una columna mas
    uiRegistroStock->table_Stock->verticalHeader()->setVisible(false);

    //### Fin de la inicializacion sobre la tabla
}

void RegistroStock::on_pushButton_5_clicked(){
    this->~RegistroStock();
}


void RegistroStock::rellenarTableProduct(){//agarra todos los productos del gestor y los coloca en la tabla

    //@@debo eliminar estos punteros???
    GestorProductos *GP=this->administrador->getGestorProductos();
    auto IDs=GP->getAll_ID_Productos();

    unsigned nroFila = this->ultimaColumnaConDatos;

    foreach(unsigned int id ,IDs){
        Producto *p = GP->getProducto(id);

        QString identificador  = QString::number(p->getID());
        QString nombreProducto =  p->getNombre();
        QString precioProducto = QString::number(p->getPrecio()) +" $";
        QString cantidadProducto = QString::number( p->getCantidad() );
        QString fechaProducto = p->getFechaUltimaIncorporacion();

        qDebug()<<"La fecha del producto es"<<fechaProducto;
        nroFila+=1;

        uiRegistroStock->table_Stock->insertRow(nroFila );

        uiRegistroStock->table_Stock->setItem(nroFila ,
                                              ID,
                                              new QTableWidgetItem(identificador));

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
    unsigned int id = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,ID).data().toUInt();
    QString stockAnterior = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,CANTIDAD).data().toString();
    QString nombreProducto = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,NOMBRE).data().toString();


    if(filaSeleccionada !=-1){

        QString nuevaCantidad = uiRegistroStock->input_Cantidad->text();

        if(nuevaCantidad!="" and !nuevaCantidad.contains(',')){

                    //lo cambio de string a entero y de entero a strign para el caso de colocar --> 0000 , se convierte a entero 0 y luego a string 0
                    // en los casos de 01,02,03 --> colocara 1,2,3 respectivamente
            nuevaCantidad = QString::number(nuevaCantidad.toInt());

            QMessageBox::StandardButton vConfirmacion = QMessageBox::question( this,"Actualizar Stock",
                                                                               "Se modificara el stock de "+nombreProducto+"\n Stock Anterior : "
                                                                               + stockAnterior + "\n Stock Actualizado : "+ nuevaCantidad,
                                                                               QMessageBox::Cancel|QMessageBox::Yes);

            if (vConfirmacion == QMessageBox::Yes){

                this->administrador->getGestorProductos()->modificarCantidad(id,nuevaCantidad);

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
            QMessageBox::warning( this,"Error al actualizar Stock", "Coloque un valor correcto en la casilla de 'Cantidad' ");
        }


        uiRegistroStock->input_Cantidad->setText("");
    }

    else{
        QMessageBox::warning( this,"Error al actualizar Stock", "Seleccione una fila a actualizar y rellene la casilla 'Cantidad'");
    }

}


void RegistroStock::on_btn_ActualizarPrecio_clicked(){

    int filaSeleccionada = uiRegistroStock->table_Stock->currentRow();
    unsigned int id = uiRegistroStock->table_Stock->model()->index(filaSeleccionada,ID).data().toUInt();
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

                this->administrador->getGestorProductos()->modificarPrecio(id,nuevoPrecio);

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


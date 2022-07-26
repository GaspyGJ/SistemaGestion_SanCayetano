//@@ EN GRANEL , PODRIA SER QUE SE COMPRE ALGO Q NO ES UN NUMERO ENTERO --> cantidad no deberia ser entero (??.

//@@ nombre de cliente y producto debe ser mas ancho que el resto de columnas

//@@ text alig para la derechaaa --> VER ESTO EN TODAS LAS TABLAS

//@@ VER la ruta de salida del PDF

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "styleitem.h""
#include "tableprinter.h"
#include <QTextTableCell>

#include <QPrinter>
#include <QPainter>

#include <QPdfWriter>
#include <QPrintPreviewDialog>

#include<QWebEngineView>



MainWindow::MainWindow(Administrador *administrador,QWidget *parent):QMainWindow(parent),uiVentanaPrincipal(new Ui::MainWindow)
{
    uiVentanaPrincipal->setupUi(this);

    setWindowTitle("Sistema San Cayetano");

    this->administrador= administrador;

    inicializarTabla();

    inicializarComboBoxes();

    inicializarPrecios();

    setValidaciones();


    QDate *fecha = new QDate();
    uiVentanaPrincipal->label_fechaDeHoy->setText( fecha->currentDate().toString("dd-MM-yyyy") );
    delete fecha;
}

MainWindow::~MainWindow(){
    delete uiVentanaPrincipal;
}


void MainWindow::setValidaciones(){

    //##Inicializacion Validaciones Sobre los Inputs

    QIntValidator *validatorINT = new QIntValidator(0,5000,this);

    uiVentanaPrincipal->input_Cantidad->setValidator( validatorINT );

    //delete validatorINT;

    //## Fin de la inicializacion Validaciones Sobre los Inputs
}

void MainWindow::inicializarTabla(){

    //### Inicializacion sobre la tabla

    this->ultimaFilaConDatos=-1;

    // tuve q hacer esa clase nueva para sobreescribir un metodo de otra clase para poder quitar los "..." de la tabla.
    uiVentanaPrincipal->table_Ventas->setItemDelegate(new StyleItem());

    //altura de cada fila
    QHeaderView *verticalHeader = uiVentanaPrincipal->table_Ventas->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(35);

    //agrego a la tabla los datos de los productos registrados en el gestor
    this->rellenarTableVentasToday();

    //Oculto la columna ID
    uiVentanaPrincipal->table_Ventas->setColumnHidden(ID,true);

    //para que la seleccion sea de la fila entera
    uiVentanaPrincipal->table_Ventas->setSelectionBehavior(QAbstractItemView::SelectRows);

    //para que no aparezca el numero de la fila como una columna mas
    uiVentanaPrincipal->table_Ventas->verticalHeader()->setVisible(false);


    //Disposicion de las columnas
    uiVentanaPrincipal->table_Ventas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiVentanaPrincipal->table_Ventas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    uiVentanaPrincipal->table_Ventas->horizontalHeader()->setSectionResizeMode(CANTIDAD,QHeaderView::Fixed);
    uiVentanaPrincipal->table_Ventas->setColumnWidth(CANTIDAD,100);

    uiVentanaPrincipal->table_Ventas->horizontalHeader()->setSectionResizeMode(PRECIO_UNIDAD,QHeaderView::Fixed);
    uiVentanaPrincipal->table_Ventas->setColumnWidth(PRECIO_UNIDAD,100);

    uiVentanaPrincipal->table_Ventas->horizontalHeader()->setSectionResizeMode(TOTAL,QHeaderView::Fixed);
    uiVentanaPrincipal->table_Ventas->setColumnWidth(TOTAL,100);

    uiVentanaPrincipal->table_Ventas->horizontalHeader()->setSectionResizeMode(HORA,QHeaderView::Fixed);
    uiVentanaPrincipal->table_Ventas->resizeColumnToContents(HORA);


    //para q no se vean los 3 puntitos cuando un elemento es muy grande
    uiVentanaPrincipal->table_Ventas->setTextElideMode(Qt::ElideNone);


    //### Fin de la inicializacion sobre la tabla

}

void MainWindow::rellenarTableVentasToday(){
    //DESACTIVAR SIGNALS --
    bool oldState = uiVentanaPrincipal->table_Ventas->blockSignals(true);

    uiVentanaPrincipal->table_Ventas->setRowCount(0); // elimino las posibles filas (esto es mas que nada para cuando elimino un Cliente)

    //@@debo eliminar estos punteros???
    GestorVentas *GV=this->administrador->getGestorVentas();

    unsigned nroFila = this->ultimaFilaConDatos;

    foreach(Venta *v ,GV->getAll_Ventas_Today()){

        QString id_Venta = QString::number(v->getID());
        QString nombre_cliente  = v->getCliente();
        QString nombre_Producto =  v->getProducto();

        short cantidad_Producto = v->getCantidad();

        double precio_Producto = v->getPrecio_Producto();

        double total = v->getPrecioTotal();

        QString hora_Venta = v->getHora_Venta();

        //qDebug()<<"Registro Ventas dice: ";
        //qDebug()<<"Se agrego a la TABLA cliente :"<<nombreCliente<<"\n con ID:"<<identificador<<"\n con la direccion de : "<<direccionCliente<<"\n con el telefono: "<<telefonoCliente<<Qt::endl;


        nroFila+=1;

        uiVentanaPrincipal->table_Ventas->insertRow(nroFila );

        uiVentanaPrincipal->table_Ventas->setItem(nroFila ,
                                                  NOMBRE_CLIENTE,
                                                  new QTableWidgetItem( nombre_cliente ));

        uiVentanaPrincipal->table_Ventas->setItem(nroFila ,
                                                  NOMBRE_PRODUCTO,
                                                  new QTableWidgetItem( nombre_Producto ));

        uiVentanaPrincipal->table_Ventas->setItem(nroFila ,
                                                  CANTIDAD,
                                                  new QTableWidgetItem( QString::number(cantidad_Producto) ));

        uiVentanaPrincipal->table_Ventas->setItem(nroFila,
                                                  PRECIO_UNIDAD,
                                                  new QTableWidgetItem( QString::number(precio_Producto) ) );

        uiVentanaPrincipal->table_Ventas->setItem(nroFila,
                                                  TOTAL,
                                                  new QTableWidgetItem( QString::number(total) ) );

        uiVentanaPrincipal->table_Ventas->setItem(nroFila,
                                                  HORA,
                                                  new QTableWidgetItem( hora_Venta ) );

        uiVentanaPrincipal->table_Ventas->setItem(nroFila ,
                                                  ID,
                                                  new QTableWidgetItem( id_Venta ));

    }

    //HABILITO LAS SENIALES
    uiVentanaPrincipal->table_Ventas->blockSignals(oldState);

    actualizarTotal(); // actualizo el label del total de todas las ventas
}

void MainWindow::actualizarTotal(){

    double total = 0;

    for(int fila=0; fila<uiVentanaPrincipal->table_Ventas->rowCount() ;fila++){

        total+= uiVentanaPrincipal->table_Ventas->model()->index(fila,TOTAL).data().toDouble();
    }

    uiVentanaPrincipal->label_Total->setText( QString::number(total) );
}

void MainWindow::inicializarComboBoxes(){

    uiVentanaPrincipal->comboBox_Clientes->clear();
    uiVentanaPrincipal->comboBox_Productos->clear();

    auto IDs = this->administrador->getGestorProductos()->getAll_ID_Productos();

    foreach(unsigned id, IDs){
        uiVentanaPrincipal->comboBox_Productos->addItem( this->administrador->getGestorProductos()->getProducto(id)->getNombre() );
    }

    auto IDss = this->administrador->getGestorClientes()->getAll_ID_Clientes();

    foreach(unsigned int id, IDss){

        auto nombre = this->administrador->getGestorClientes()->getCliente(id)->getNombre();
        if(nombre != "Particular"){

            foreach(auto e ,this->administrador->getGestorClientes()->getCliente(id)->getAll_Establecimientos()){
                uiVentanaPrincipal->comboBox_Clientes->addItem( nombre + "\n"+ e->getDireccion());
            }

        }
        else{
            uiVentanaPrincipal->comboBox_Clientes->addItem( nombre );
        }

    }

}

void MainWindow::inicializarPrecios(){

    //TOMO EN CUENTA QUE ESTAN ORDENADOS LOS PRODUCTOS POR ID EN LA VISUALIZACION

    auto IDs = this->administrador->getGestorProductos()->getAll_ID_Productos();

    QString precio;

    foreach(unsigned id, IDs){

        precio = QString::number(this->administrador->getGestorProductos()->getProducto(id)->getPrecio())+ " $";

        switch(id){
        case 1: uiVentanaPrincipal->label_Precio_BolsaHieloRolito4KG->setText(precio); break;
        case 2: uiVentanaPrincipal->label_Precio_BolsaHieloRolito10KG->setText(precio); break;
        case 3: uiVentanaPrincipal->label_Precio_BolsaHieloRolito14KG->setText(precio); break;
        case 4: uiVentanaPrincipal->label_Precio_BolsaHieloMolido14KG->setText(precio); break;
        case 5: uiVentanaPrincipal->label_Precio_AguaDestilada1L->setText(precio); break;
        case 6: uiVentanaPrincipal->label_Precio_AguaDestilada5L->setText(precio); break;
        case 7: uiVentanaPrincipal->label_Precio_Pack8AguaDestilada->setText(precio); break;
        case 8: uiVentanaPrincipal->label_Precio_Pack6AguaDestilada->setText(precio); break;
        case 9: uiVentanaPrincipal->label_Precio_LiquidoRefrigerante1L->setText(precio); break;
        case 10:uiVentanaPrincipal->label_Precio_LiquidoRefrigerante5L->setText(precio); break;
        case 11:uiVentanaPrincipal->label_Precio_Pack6LiquidoRefrigerante->setText(precio); break;
        case 12:uiVentanaPrincipal->label_Precio_AguaDestiladaGranel1L->setText(precio); break;
        case 13:uiVentanaPrincipal->label_Precio_LiquidoRefrigeranteGranel1L->setText(precio); break;

        }
    }

}

void MainWindow::on_btn_AgregarVenta_clicked(){

    if(uiVentanaPrincipal->input_Cantidad->text() != ""){

        short cantidad_Producto = uiVentanaPrincipal->input_Cantidad->text().toShort();

        QString nombre_Cliente = uiVentanaPrincipal->comboBox_Clientes->currentText();

        QString nombre_Producto = uiVentanaPrincipal->comboBox_Productos->currentText();

        unsigned int id_Producto =  this->administrador->getGestorProductos()->buscarProductoPorNombre( nombre_Producto ) + 1;
        double precio_Producto = this->administrador->getGestorProductos()->getProducto(id_Producto)->getPrecio();


        QDateTime *t = new QDateTime();
        QString hora_Venta = t->currentDateTime().toString("hh:mm") + " hrs";
        delete t;

        QString fecha_Venta = uiVentanaPrincipal->label_fechaDeHoy->text();


        if(this->administrador->getGestorVentas()->crearVentaToday(cantidad_Producto,precio_Producto,fecha_Venta,hora_Venta,nombre_Producto,nombre_Cliente) == 1){

            this->rellenarTableVentasToday();

            this->administrador->getGestorProductos()->modificarCantidad(this->administrador->getGestorProductos()->getProducto(nombre_Producto)->getID(),"-"+QString::number(cantidad_Producto) );

            //qDebug()<<"El Cliente se creo Correctamente";

            QMessageBox::information(0,"OK" , "La Venta se creo Correctamente");

            uiVentanaPrincipal->input_Cantidad->clear();


        }
        else{
            //qDebug()<<"El Cliente NO se creo";
            QMessageBox::critical(0,"Error" , "No se creo la Venta correctamente");
        }



    }
    else{
        QMessageBox::critical(0,"Error" , "Rellene la casilla de cantidad antes de agregar una venta");
    }


    //inicializarComboBoxes();

}

void MainWindow::on_btn_EliminarVentaDeTabla_clicked(){


    int filaSeleccionada = uiVentanaPrincipal->table_Ventas->currentRow();

    //@@@@*** Sacar el ID de la VENTA DE ALGUNA FORMA

    unsigned int id= uiVentanaPrincipal->table_Ventas->model()->index(filaSeleccionada,ID).data().toUInt();
    QString nombre_Producto= uiVentanaPrincipal->table_Ventas->model()->index(filaSeleccionada,NOMBRE_PRODUCTO).data().toString();
    QString cantidad_Producto = uiVentanaPrincipal->table_Ventas->model()->index(filaSeleccionada,CANTIDAD).data().toString();

    if( this->administrador->getGestorVentas()->eliminarVenta_Today(id) == 1 ){

        //qDebug()<<"La Venta se elimino Correctamente";

        this->rellenarTableVentasToday();

        this->administrador->getGestorProductos()->modificarCantidad(this->administrador->getGestorProductos()->getProducto(nombre_Producto)->getID(),cantidad_Producto);

        QMessageBox::information(0,"OK" , "La Venta se elimino Correctamente");
    }
    else{
        //qDebug()<<"El Cliente NO se elimino";
        QMessageBox::critical(0,"Error" , "La venta NO se elimino");
    }

}

void MainWindow::on_btn_RegistroStock_clicked(){

    VentanaStock = new RegistroStock(this->administrador,this);

    connect( VentanaStock , SIGNAL(  precioActualizado() )  ,  this  ,  SLOT( inicializarPrecios() ) );

    VentanaStock->show();
}

void MainWindow::on_btn_RegistroClientes_clicked(){

    VentanaCliente = new RegistroClientes(this->administrador,this);

    connect( VentanaCliente , SIGNAL(  actualizacionNombre_or_Direcciones()  )  ,  this  ,  SLOT( inicializarComboBoxes() ) );

    VentanaCliente->show();
}

void MainWindow::on_btn_Salir_clicked(){
    this->~MainWindow();
}

void MainWindow::on_btn_GenerarPDF_TablaVentas_clicked(){

    QString htmlFilas;

    QString casilla;

    for(short f=0; f<uiVentanaPrincipal->table_Ventas->rowCount();f++){
        htmlFilas+= "<tr> <th>"+QString::number(f)+"</th>";
        for(short c=0; c<uiVentanaPrincipal->table_Ventas->columnCount()-1;c++){
            casilla = uiVentanaPrincipal->table_Ventas->model()->index(f,c).data().toString();
            htmlFilas+= "<td>"+casilla+"</td>";
        }
        htmlFilas+="</tr>";
    }

    QString htmlConCss=
            "<!DOCTYPE html>\
            <head>\
            <title>Document</title>\
            <style>\
            table, th, td {\
border: 1px solid;\
    }\
    table{\
width:100%;\
        border-collapse: collapse;\
    }\
    table tr{\
height: 35px;\
border: 1px solid;\
    }\
    table td{\
border: 1px solid;\
        text-align: center;\
    }\
    table #NroColumna{\
width: 2%;\
    }\
    table #HoraRegistro{\
width: 5%;\
    }\
    table #Cliente{\
width: 15%;\
    }\
    table #Producto{\
width: 15%;\
    }\
    table #Cantidad{\
width: 10%;\
    }\
    table #PrecioUnidad{\
width: 10%;\
    }\
    table #PrecioTotal{\
width: 10%;\
    }\
    </style>\
            </head>\
            <body>\
            <table>\
            <thead>\
            <tr>\
            <th id=\"NroColumna\" >#</th>\
            <th id=\"HoraRegistro\">Hora Registro</th>\
            <th id=\"Cliente\">Cliente</th>\
            <th id=\"Producto\">Producto</th>\
            <th id=\"Cantidad\">Cantidad</th>\
            <th id=\"PrecioUnidad\">P. Unidad</th>\
            <th id=\"PrecioTotal\">P. Total</th>\
            </tr>\
            </thead >\
            <tbody>\
            "+htmlFilas+"\
            </tbody>\
            </table>\
            </body>\
            </html>";

 //***********************************METODOS DE IMPRECION QUE FUNCIONA.


    // 1)--------------------------------------------------

            modeloWeb = new QWebEngineView();
    modeloWeb->setHtml(htmlConCss);
    bool ok= connect(modeloWeb, &QWebEngineView::loadFinished, this, [this,htmlConCss](){
        modeloWeb->page()->printToPdf("C:/Users/CompuGaspy/Desktop/Ventas_"+uiVentanaPrincipal->label_fechaDeHoy->text()+".pdf");
        //this->modeloWeb->printToPdf("C:/Users/CompuGaspy/Desktop/Ventas_"+uiVentanaPrincipal->label_fechaDeHoy->text()+".pdf");
        qDebug()<<"Se creo el PDF";
        QMessageBox::information(0,"OK" , "Se creo el PDF correctamente en el escritorio");
    });
    if(ok){
        modeloWeb->setHtml(htmlConCss);
    }

    // 2)--------------------------------------------------


/*
printer = new QPrinter(QPrinter::PrinterResolution);
printer->setOutputFormat(QPrinter::PdfFormat);
printer->setPageSize(QPageSize::A4);
printer->setPageMargins(QMargins(0,0,0,0));
printer->setOutputFileName("C:/Users/CompuGaspy/Desktop/Ventas_"+uiVentanaPrincipal->label_fechaDeHoy->text()+".pdf");
documento.setDocumentMargin(0.0);
documento.setHtml(htmlConCss);
//documento.print(printer);// --> se puede imprimir antes sin el PrintPreviewDialog
QPrintPreviewDialog dialog(printer);
connect(&dialog, &QPrintPreviewDialog::paintRequested, this, [this](){
documento.print(printer);
});
dialog.exec();
*/
    // 3)-------------------------------------------------

/*
QPrintPreviewDialog dialog;
connect(&dialog, SIGNAL(paintRequested(QPrinter*)), this, SLOT(print(QPrinter*)));
dialog.exec();
*/

}

//Esto era probando un metodo de imprecion , q al final no utilizo por ahora. pero lo dejo aca por las dudas
void MainWindow::print(QPrinter *printer) {

    // ------------------ simplest example --------------------------
    QPainter painter;
    if(!painter.begin(printer)) {
        qWarning() << "can't start printer";
        return;
    }
    // print table
    TablePrinter tablePrinter(&painter, printer);
    QVector<int> columnStretch = QVector<int>() << 4 << 10 << 10 << 2 << 2 <<2 << 0;
    if(!tablePrinter.printTable(uiVentanaPrincipal->table_Ventas->model(), columnStretch)) {
        qDebug() << tablePrinter.lastError();
    }
    painter.end();
}




//--------------------EXPORTA A EXEL MEDIANTE CSV  (lo puse aca asi lo puede comprimir en una linea nomas)-----------------------------------------

/*           // [Collect model data to QString]
            QString textData;
            int rows = uiVentanaPrincipal->table_Ventas->rowCount();
            int columns = uiVentanaPrincipal->table_Ventas->columnCount()-1;

            //add the name columns

                textData += "Hora , Nombre-Cliente , Nombre-Producto , Cantidad ,PrecioUnidad ,Total-Venta\n";


            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {

                        QString datoTable = uiVentanaPrincipal->table_Ventas->model()->index(i,j).data().toString().remove("\n");
                        textData += datoTable;
                        textData += ", ";     // for .csv file format
                }
                textData += "\n";             // (optional: for new line segmentation)
            }

            textData += ",,,,, TOTAL = "+uiVentanaPrincipal->label_Total->text()+"\n";

            // [Save to file] (header file <QFile> needed)
            // .csv

            QFile csvFile("../test.csv");
            if(csvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {

                QTextStream out(&csvFile);
                out << textData;

                csvFile.close();
            }

            // .txt
            QFile txtFile("../test.txt");
            if(txtFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {

                QTextStream out(&txtFile);
                out << textData;

                txtFile.close();}
*/





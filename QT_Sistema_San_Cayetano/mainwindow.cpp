#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registroclientes.h"
#include "registrostock.h"

/*MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),uiVentanaPrincipal(new Ui::MainWindow){

    uiVentanaPrincipal->setupUi(this);

    //Para que las Columans de las tablas sea dinamica
    uiVentanaPrincipal->tablaVentas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiVentanaPrincipal->tablaVentas->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
*/

MainWindow::MainWindow(Administrador *administrador,QWidget *parent):QMainWindow(parent),uiVentanaPrincipal(new Ui::MainWindow)
{
    uiVentanaPrincipal->setupUi(this);

    setWindowTitle("Sistema San Cayetano");

    this->administrador= administrador;

    inicializarTabla();

    inicializarComboBoxes();

    inicializarPrecios();

    setValidaciones();
}

MainWindow::~MainWindow(){
    delete uiVentanaPrincipal;
}

void MainWindow::inicializarTabla(){

    //### Inicializacion sobre la tabla

    this->ultimaFilaConDatos=-1; // tendria q ser fila no columna , pero ya fue

    //Para que las Columans de las tablas sea de vista dinamica
    uiVentanaPrincipal->tablaVentas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiVentanaPrincipal->tablaVentas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //para que la seleccion sea de la fila entera
    uiVentanaPrincipal->tablaVentas->setSelectionBehavior(QAbstractItemView::SelectRows);

    //para que no aparezca el numero de la fila como una columna mas
    //uiVentanaPrincipal->tablaVentas->verticalHeader()->setVisible(false);

    //### Fin de la inicializacion sobre la tabla
}

void MainWindow::inicializarComboBoxes(){


    auto IDs = this->administrador->getGestorProductos()->getAll_ID_Productos();

   foreach(unsigned id, IDs){
       uiVentanaPrincipal->comboBox_Producos->addItem( this->administrador->getGestorProductos()->getProducto(id)->getNombre() );
   }


   //PARA CUANDO HAGA LOS CLIENTES
   /*

    auto IDs = this->administrador->getGestorClientes()->getAll_ID_Clientes();

   foreach(unsigned id, IDs){
       uiVentanaPrincipal->comboBox_Clientes->addItem( this->administrador->getGestorClientes()->getCliente(id)->getNombre() );
   }

   */
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

   QDate *fecha = new QDate();

   uiVentanaPrincipal->label_fechaDeHoy->setText( fecha->currentDate().toString("dd-MM-yyyy") );

   delete fecha;
}

void MainWindow::setValidaciones(){

    //##Inicializacion Validaciones Sobre los Inputs

    QIntValidator *validatorINT = new QIntValidator(0,5000,this);

    uiVentanaPrincipal->input_Cantidad->setValidator( validatorINT );

    delete validatorINT;

    //## Fin de la inicializacion Validaciones Sobre los Inputs
}


void MainWindow::on_btn_RegistroStock_clicked()
{
    RegistroStock* VentanaStock = new RegistroStock(this->administrador,this);

    VentanaStock->show();
}


void MainWindow::on_btn_RegistroClientes_clicked(){

    RegistroClientes* VentanaCliente = new RegistroClientes(this->administrador,this);

    VentanaCliente->show();
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registroclientes.h"
#include "registrostock.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , uiVentanaPrincipal(new Ui::MainWindow)
{
    uiVentanaPrincipal->setupUi(this);
    /*Para que las Columans de las tablas sea dinamica*/
    uiVentanaPrincipal->tablaVentas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiVentanaPrincipal->tablaVentas->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::MainWindow(Administrador *administrador,QWidget *parent)
    : QMainWindow(parent)
    , uiVentanaPrincipal(new Ui::MainWindow)
{
    uiVentanaPrincipal->setupUi(this);
    /*Para que las Columans de las tablas sea dinamica*/
    uiVentanaPrincipal->tablaVentas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    uiVentanaPrincipal->tablaVentas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->administrador= administrador;
}


MainWindow::~MainWindow()
{
    delete uiVentanaPrincipal;
}


void MainWindow::on_pushButton_3_clicked()
{
    RegistroClientes* VentanaCliente = new RegistroClientes();

   VentanaCliente->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    RegistroStock* VentanaStock = new RegistroStock();

    VentanaStock->show();
}


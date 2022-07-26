#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "administrador.h"
#include "basededatos.h"

#include "registroclientes.h"
#include "registrostock.h"

#include <QWebEngineView>
#include <QPrinter>
#include <QTextDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Administrador *administrador,QWidget *parent = nullptr);

    ~MainWindow();

    friend class GestorVentas;

private slots:

    void print(QPrinter *printer);

    //inicializadores

    void inicializarTabla();

    void inicializarPrecios();

    void inicializarComboBoxes();

    void setValidaciones();

    void rellenarTableVentasToday();

    //

    void actualizarTotal();

    //eventos clicked

    void on_btn_RegistroStock_clicked();

    void on_btn_RegistroClientes_clicked();

    void on_btn_AgregarVenta_clicked();

    void on_btn_Salir_clicked();

    void on_btn_EliminarVentaDeTabla_clicked();

    void on_btn_GenerarPDF_TablaVentas_clicked();

private:

    /*Los uso par la imprecion de PDF*/
    QWebEngineView *modeloWeb;
    QPrinter *printer;
    QTextDocument documento;
    /*Capaz q alguno no lo uso ahora pero los dejo por las dudas*/

    Ui::MainWindow *uiVentanaPrincipal;

    Administrador *administrador;

    unsigned ultimaFilaConDatos;

    enum Columna{
       HORA,NOMBRE_CLIENTE,NOMBRE_PRODUCTO,CANTIDAD,PRECIO_UNIDAD,TOTAL,ID
    };


    RegistroStock*  VentanaStock;

    RegistroClientes* VentanaCliente;

};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "administrador.h"
#include "basededatos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Administrador *administrador,QWidget *parent = nullptr);

    ~MainWindow();


private slots:

    void inicializarTabla();

    void inicializarPrecios();

    void inicializarComboBoxes();

    void setValidaciones();

    void on_btn_RegistroStock_clicked();

    void on_btn_RegistroClientes_clicked();


private:

    Ui::MainWindow *uiVentanaPrincipal;

    Administrador *administrador;

    unsigned ultimaFilaConDatos;

    enum Columna{
       NOMBRE,PRODUCTO,CANTIDAD,PRECIO_UNIDAD,HORA
    };


};
#endif // MAINWINDOW_H

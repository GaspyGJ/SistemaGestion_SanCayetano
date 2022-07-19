/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox_Clientes;
    QLabel *label_2;
    QComboBox *comboBox_Producos;
    QLabel *label_3;
    QLineEdit *input_Cantidad;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_AgregarVenta;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_EditarVentaDeTabla;
    QPushButton *btn_EliminarVentaDeTabla;
    QFrame *line_4;
    QPushButton *btn_ImprimirTablaVentas;
    QPushButton *btn_GenerarPDF_TablaVentas;
    QPushButton *btn_RegistroStock;
    QPushButton *btn_RegistroClientes;
    QPushButton *btn_Salir;
    QTableWidget *tablaVentas;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_fechaDeHoy;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_Precio_BolsaHieloRolito4KG;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_Precio_BolsaHieloRolito10KG;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_Precio_BolsaHieloRolito14KG;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_Precio_BolsaHieloMolido14KG;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *label_Precio_AguaDestilada1L;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLabel *label_Precio_AguaDestilada5L;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLabel *label_Precio_Pack6AguaDestilada;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLabel *label_Precio_Pack8AguaDestilada;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLabel *label_Precio_LiquidoRefrigerante1L;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLabel *label_Precio_LiquidoRefrigerante5L;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QLabel *label_Precio_Pack6LiquidoRefrigerante;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLabel *label_Precio_AguaDestiladaGranel1L;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLabel *label_Precio_LiquidoRefrigeranteGranel1L;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1500, 700);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_12 = new QHBoxLayout(centralwidget);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(190, 0));
        groupBox->setMaximumSize(QSize(190, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        comboBox_Clientes = new QComboBox(groupBox);
        comboBox_Clientes->setObjectName("comboBox_Clientes");

        verticalLayout->addWidget(comboBox_Clientes);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        comboBox_Producos = new QComboBox(groupBox);
        comboBox_Producos->setObjectName("comboBox_Producos");

        verticalLayout->addWidget(comboBox_Producos);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        input_Cantidad = new QLineEdit(groupBox);
        input_Cantidad->setObjectName("input_Cantidad");

        verticalLayout->addWidget(input_Cantidad);

        verticalSpacer = new QSpacerItem(163, 17, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        btn_AgregarVenta = new QPushButton(groupBox);
        btn_AgregarVenta->setObjectName("btn_AgregarVenta");
        btn_AgregarVenta->setStyleSheet(QString::fromUtf8("margin-top:10px;\n"
"padding-top : 2px;\n"
"padding-bottom : 5px;\n"
"margin-bottom: 5px;"));
        btn_AgregarVenta->setCheckable(false);
        btn_AgregarVenta->setAutoDefault(true);

        verticalLayout->addWidget(btn_AgregarVenta);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(190, 0));
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_EditarVentaDeTabla = new QPushButton(groupBox_2);
        btn_EditarVentaDeTabla->setObjectName("btn_EditarVentaDeTabla");
        btn_EditarVentaDeTabla->setCheckable(false);
        btn_EditarVentaDeTabla->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_EditarVentaDeTabla);

        btn_EliminarVentaDeTabla = new QPushButton(groupBox_2);
        btn_EliminarVentaDeTabla->setObjectName("btn_EliminarVentaDeTabla");
        btn_EliminarVentaDeTabla->setCheckable(false);
        btn_EliminarVentaDeTabla->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_EliminarVentaDeTabla);

        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        btn_ImprimirTablaVentas = new QPushButton(groupBox_2);
        btn_ImprimirTablaVentas->setObjectName("btn_ImprimirTablaVentas");
        btn_ImprimirTablaVentas->setCheckable(false);
        btn_ImprimirTablaVentas->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_ImprimirTablaVentas);

        btn_GenerarPDF_TablaVentas = new QPushButton(groupBox_2);
        btn_GenerarPDF_TablaVentas->setObjectName("btn_GenerarPDF_TablaVentas");
        btn_GenerarPDF_TablaVentas->setCheckable(false);
        btn_GenerarPDF_TablaVentas->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_GenerarPDF_TablaVentas);

        btn_RegistroStock = new QPushButton(groupBox_2);
        btn_RegistroStock->setObjectName("btn_RegistroStock");
        btn_RegistroStock->setCheckable(false);
        btn_RegistroStock->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_RegistroStock);

        btn_RegistroClientes = new QPushButton(groupBox_2);
        btn_RegistroClientes->setObjectName("btn_RegistroClientes");
        btn_RegistroClientes->setCheckable(false);
        btn_RegistroClientes->setAutoDefault(true);

        verticalLayout_2->addWidget(btn_RegistroClientes);


        verticalLayout_3->addWidget(groupBox_2);

        btn_Salir = new QPushButton(centralwidget);
        btn_Salir->setObjectName("btn_Salir");
        btn_Salir->setMinimumSize(QSize(190, 0));
        btn_Salir->setMaximumSize(QSize(190, 16777215));
        btn_Salir->setCheckable(false);
        btn_Salir->setAutoDefault(true);

        verticalLayout_3->addWidget(btn_Salir);


        horizontalLayout_12->addLayout(verticalLayout_3);

        tablaVentas = new QTableWidget(centralwidget);
        if (tablaVentas->columnCount() < 5)
            tablaVentas->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tablaVentas->rowCount() < 31)
            tablaVentas->setRowCount(31);
        tablaVentas->setObjectName("tablaVentas");
        tablaVentas->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tablaVentas->sizePolicy().hasHeightForWidth());
        tablaVentas->setSizePolicy(sizePolicy);
        tablaVentas->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tablaVentas->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tablaVentas->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablaVentas->setShowGrid(true);
        tablaVentas->setGridStyle(Qt::SolidLine);
        tablaVentas->setSortingEnabled(false);
        tablaVentas->setWordWrap(true);
        tablaVentas->setCornerButtonEnabled(true);
        tablaVentas->setRowCount(31);
        tablaVentas->horizontalHeader()->setCascadingSectionResizes(false);
        tablaVentas->horizontalHeader()->setStretchLastSection(false);

        horizontalLayout_12->addWidget(tablaVentas);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        label_fechaDeHoy = new QLabel(layoutWidget);
        label_fechaDeHoy->setObjectName("label_fechaDeHoy");

        horizontalLayout->addWidget(label_fechaDeHoy);

        splitter->addWidget(layoutWidget);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        label_Precio_BolsaHieloRolito4KG = new QLabel(groupBox_3);
        label_Precio_BolsaHieloRolito4KG->setObjectName("label_Precio_BolsaHieloRolito4KG");

        horizontalLayout_2->addWidget(label_Precio_BolsaHieloRolito4KG);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        label_Precio_BolsaHieloRolito10KG = new QLabel(groupBox_3);
        label_Precio_BolsaHieloRolito10KG->setObjectName("label_Precio_BolsaHieloRolito10KG");

        horizontalLayout_3->addWidget(label_Precio_BolsaHieloRolito10KG);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        label_Precio_BolsaHieloRolito14KG = new QLabel(groupBox_3);
        label_Precio_BolsaHieloRolito14KG->setObjectName("label_Precio_BolsaHieloRolito14KG");

        horizontalLayout_4->addWidget(label_Precio_BolsaHieloRolito14KG);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        label_Precio_BolsaHieloMolido14KG = new QLabel(groupBox_3);
        label_Precio_BolsaHieloMolido14KG->setObjectName("label_Precio_BolsaHieloMolido14KG");

        horizontalLayout_5->addWidget(label_Precio_BolsaHieloMolido14KG);


        verticalLayout_4->addLayout(horizontalLayout_5);

        line_5 = new QFrame(groupBox_3);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        label_Precio_AguaDestilada1L = new QLabel(groupBox_3);
        label_Precio_AguaDestilada1L->setObjectName("label_Precio_AguaDestilada1L");

        horizontalLayout_6->addWidget(label_Precio_AguaDestilada1L);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);

        label_Precio_AguaDestilada5L = new QLabel(groupBox_3);
        label_Precio_AguaDestilada5L->setObjectName("label_Precio_AguaDestilada5L");

        horizontalLayout_7->addWidget(label_Precio_AguaDestilada5L);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        horizontalLayout_8->addWidget(label_12);

        label_Precio_Pack6AguaDestilada = new QLabel(groupBox_3);
        label_Precio_Pack6AguaDestilada->setObjectName("label_Precio_Pack6AguaDestilada");

        horizontalLayout_8->addWidget(label_Precio_Pack6AguaDestilada);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        horizontalLayout_9->addWidget(label_13);

        label_Precio_Pack8AguaDestilada = new QLabel(groupBox_3);
        label_Precio_Pack8AguaDestilada->setObjectName("label_Precio_Pack8AguaDestilada");

        horizontalLayout_9->addWidget(label_Precio_Pack8AguaDestilada);


        verticalLayout_4->addLayout(horizontalLayout_9);

        line_3 = new QFrame(groupBox_3);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");

        horizontalLayout_10->addWidget(label_14);

        label_Precio_LiquidoRefrigerante1L = new QLabel(groupBox_3);
        label_Precio_LiquidoRefrigerante1L->setObjectName("label_Precio_LiquidoRefrigerante1L");

        horizontalLayout_10->addWidget(label_Precio_LiquidoRefrigerante1L);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");

        horizontalLayout_11->addWidget(label_15);

        label_Precio_LiquidoRefrigerante5L = new QLabel(groupBox_3);
        label_Precio_LiquidoRefrigerante5L->setObjectName("label_Precio_LiquidoRefrigerante5L");

        horizontalLayout_11->addWidget(label_Precio_LiquidoRefrigerante5L);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");

        horizontalLayout_13->addWidget(label_16);

        label_Precio_Pack6LiquidoRefrigerante = new QLabel(groupBox_3);
        label_Precio_Pack6LiquidoRefrigerante->setObjectName("label_Precio_Pack6LiquidoRefrigerante");

        horizontalLayout_13->addWidget(label_Precio_Pack6LiquidoRefrigerante);


        verticalLayout_4->addLayout(horizontalLayout_13);

        line_6 = new QFrame(groupBox_3);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName("label_18");

        horizontalLayout_14->addWidget(label_18);

        label_Precio_AguaDestiladaGranel1L = new QLabel(groupBox_3);
        label_Precio_AguaDestiladaGranel1L->setObjectName("label_Precio_AguaDestiladaGranel1L");

        horizontalLayout_14->addWidget(label_Precio_AguaDestiladaGranel1L);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");

        horizontalLayout_15->addWidget(label_19);

        label_Precio_LiquidoRefrigeranteGranel1L = new QLabel(groupBox_3);
        label_Precio_LiquidoRefrigeranteGranel1L->setObjectName("label_Precio_LiquidoRefrigeranteGranel1L");

        horizontalLayout_15->addWidget(label_Precio_LiquidoRefrigeranteGranel1L);


        verticalLayout_4->addLayout(horizontalLayout_15);

        splitter->addWidget(groupBox_3);

        horizontalLayout_12->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1500, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btn_AgregarVenta->setDefault(false);
        btn_EditarVentaDeTabla->setDefault(false);
        btn_EliminarVentaDeTabla->setDefault(false);
        btn_ImprimirTablaVentas->setDefault(false);
        btn_GenerarPDF_TablaVentas->setDefault(false);
        btn_RegistroStock->setDefault(false);
        btn_RegistroClientes->setDefault(false);
        btn_Salir->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Agregar Venta", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cliente :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Producto :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cantidad :", nullptr));
        btn_AgregarVenta->setText(QCoreApplication::translate("MainWindow", "Agregar Venta", nullptr));
        groupBox_2->setTitle(QString());
        btn_EditarVentaDeTabla->setText(QCoreApplication::translate("MainWindow", "Editar Venta de Tabla", nullptr));
        btn_EliminarVentaDeTabla->setText(QCoreApplication::translate("MainWindow", "Eliminar Venta de Tabla", nullptr));
        btn_ImprimirTablaVentas->setText(QCoreApplication::translate("MainWindow", "Imprimir Tabla Ventas", nullptr));
        btn_GenerarPDF_TablaVentas->setText(QCoreApplication::translate("MainWindow", "Generar PDF Tabla Ventas", nullptr));
        btn_RegistroStock->setText(QCoreApplication::translate("MainWindow", "Registro Stock", nullptr));
        btn_RegistroClientes->setText(QCoreApplication::translate("MainWindow", "Resgistro Clientes", nullptr));
        btn_Salir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaVentas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaVentas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Producto", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaVentas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Cantidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaVentas->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Precio Unidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaVentas->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Hora", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Fecha de hoy", nullptr));
        label_fechaDeHoy->setText(QCoreApplication::translate("MainWindow", "DD/MM/AA", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Precio Productos", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  4kg -->", nullptr));
        label_Precio_BolsaHieloRolito4KG->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  10kg --> ", nullptr));
        label_Precio_BolsaHieloRolito10KG->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  14kg --> ", nullptr));
        label_Precio_BolsaHieloRolito14KG->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Molido  14kg -->", nullptr));
        label_Precio_BolsaHieloMolido14KG->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Agua destilada 1L --> ", nullptr));
        label_Precio_AguaDestilada1L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Agua destilada 5L --> ", nullptr));
        label_Precio_AguaDestilada5L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Agua destilada Pack 6 de 5L -->", nullptr));
        label_Precio_Pack6AguaDestilada->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Agua destilada Pack 8 de 1L --> ", nullptr));
        label_Precio_Pack8AguaDestilada->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante 1L --> ", nullptr));
        label_Precio_LiquidoRefrigerante1L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante 5L --> ", nullptr));
        label_Precio_LiquidoRefrigerante5L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante Pack 6 de 5L --> ", nullptr));
        label_Precio_Pack6LiquidoRefrigerante->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Agua destilada Granel 1L --> ", nullptr));
        label_Precio_AguaDestiladaGranel1L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante Granel 1L --> ", nullptr));
        label_Precio_LiquidoRefrigeranteGranel1L->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

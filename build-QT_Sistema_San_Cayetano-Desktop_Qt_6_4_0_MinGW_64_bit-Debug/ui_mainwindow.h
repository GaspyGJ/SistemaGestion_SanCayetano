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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QFrame *line_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tablaVentas;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_23;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLabel *label_27;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QLabel *label_31;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLabel *label_33;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(895, 682);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_16 = new QHBoxLayout(centralwidget);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
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

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout->addWidget(comboBox_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout->addWidget(lineEdit_3);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("margin-top:10px;\n"
"padding-top : 2px;\n"
"padding-bottom : 5px;\n"
"margin-bottom: 5px;"));
        pushButton_9->setCheckable(false);

        verticalLayout->addWidget(pushButton_9);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(190, 0));
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setCheckable(false);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setCheckable(false);

        verticalLayout_2->addWidget(pushButton_8);

        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setCheckable(false);

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setCheckable(false);

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCheckable(false);
        pushButton_2->setAutoDefault(true);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCheckable(false);

        verticalLayout_2->addWidget(pushButton_3);


        verticalLayout_3->addWidget(groupBox_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(190, 0));
        pushButton_4->setMaximumSize(QSize(190, 16777215));
        pushButton_4->setCheckable(false);

        verticalLayout_3->addWidget(pushButton_4);


        horizontalLayout_16->addLayout(verticalLayout_3);

        tablaVentas = new QTableWidget(centralwidget);
        if (tablaVentas->columnCount() < 4)
            tablaVentas->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaVentas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tablaVentas->rowCount() < 50)
            tablaVentas->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(15, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(16, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(17, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tablaVentas->setVerticalHeaderItem(18, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tablaVentas->setItem(0, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tablaVentas->setItem(0, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tablaVentas->setItem(0, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tablaVentas->setItem(0, 3, __qtablewidgetitem26);
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
        tablaVentas->setRowCount(50);
        tablaVentas->horizontalHeader()->setCascadingSectionResizes(false);
        tablaVentas->horizontalHeader()->setStretchLastSection(false);

        horizontalLayout_16->addWidget(tablaVentas);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        verticalLayout_4->addLayout(horizontalLayout);

        line_2 = new QFrame(groupBox_3);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName("label_20");

        horizontalLayout_2->addWidget(label_20);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName("label_21");

        horizontalLayout_3->addWidget(label_21);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName("label_22");

        horizontalLayout_4->addWidget(label_22);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName("label_23");

        horizontalLayout_5->addWidget(label_23);


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

        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName("label_24");

        horizontalLayout_6->addWidget(label_24);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName("label_25");

        horizontalLayout_7->addWidget(label_25);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        horizontalLayout_8->addWidget(label_12);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName("label_26");

        horizontalLayout_8->addWidget(label_26);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        horizontalLayout_9->addWidget(label_13);

        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName("label_27");

        horizontalLayout_9->addWidget(label_27);


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

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName("label_28");

        horizontalLayout_10->addWidget(label_28);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");

        horizontalLayout_11->addWidget(label_15);

        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName("label_29");

        horizontalLayout_11->addWidget(label_29);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName("label_17");

        horizontalLayout_12->addWidget(label_17);

        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName("label_30");

        horizontalLayout_12->addWidget(label_30);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");

        horizontalLayout_13->addWidget(label_16);

        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName("label_31");

        horizontalLayout_13->addWidget(label_31);


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

        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName("label_32");

        horizontalLayout_14->addWidget(label_32);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");

        horizontalLayout_15->addWidget(label_19);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName("label_33");

        horizontalLayout_15->addWidget(label_33);


        verticalLayout_4->addLayout(horizontalLayout_15);


        horizontalLayout_16->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 895, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Agregar Venta", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cliente :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Producto :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cantidad :", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Agregar Venta", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Editar Venta de Tabla", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Eliminar Venta de Tabla", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Imprimir Tabla Ventas", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Generar PDF Tabla Ventas", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Gestionar Stock", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Resgistro de Clientes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaVentas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaVentas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Producto", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaVentas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Precio Unidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaVentas->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaVentas->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaVentas->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaVentas->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaVentas->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tablaVentas->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tablaVentas->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tablaVentas->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tablaVentas->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tablaVentas->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tablaVentas->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tablaVentas->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tablaVentas->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tablaVentas->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tablaVentas->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tablaVentas->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tablaVentas->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tablaVentas->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tablaVentas->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "19", nullptr));

        const bool __sortingEnabled = tablaVentas->isSortingEnabled();
        tablaVentas->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem22 = tablaVentas->item(0, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Gaspy Jullier Pepito", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tablaVentas->item(0, 1);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "CARNE DE PIJA", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tablaVentas->item(0, 2);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "83", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tablaVentas->item(0, 3);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "0$", nullptr));
        tablaVentas->setSortingEnabled(__sortingEnabled);

        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Precio Productos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ultima Modificaion :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DD/MM/AA", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  4kg -->", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  10kg --> ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Rolito  14kg --> ", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Bolsa Hielo Molido  10kg -->", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Agua desmineralizada 1L --> ", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Agua desmineralizada 5L --> ", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Agua desmineralizada Pack 6 de 5L -->", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Agua desmineralizada Pack 8 de 1L --> ", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante 1L --> ", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante 5L --> ", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante Pack 8 de 1L --> ", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante Pack 6 de 5L --> ", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Agua Desmineralizada Granel 1L --> ", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Liquido Refrigerante Granel 1L --> ", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "XXX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

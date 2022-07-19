/********************************************************************************
** Form generated from reading UI file 'registroclientes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROCLIENTES_H
#define UI_REGISTROCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistroClientes
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tablaClientes;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegistroClientes)
    {
        if (RegistroClientes->objectName().isEmpty())
            RegistroClientes->setObjectName("RegistroClientes");
        RegistroClientes->resize(755, 584);
        centralwidget = new QWidget(RegistroClientes);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(190, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setMargin(0);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, lineEdit_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, lineEdit);


        verticalLayout->addLayout(formLayout_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setAutoDefault(true);

        verticalLayout->addWidget(pushButton);


        verticalLayout_5->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(190, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_2);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(5, QFormLayout::SpanningRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(2, QFormLayout::SpanningRole, lineEdit_4);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName("pushButton_3");

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton_3);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_5->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setAutoDefault(true);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setAutoDefault(true);

        verticalLayout_2->addWidget(pushButton_8);


        verticalLayout_5->addWidget(groupBox_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(190, 16777215));
        pushButton_4->setAutoDefault(true);

        verticalLayout_5->addWidget(pushButton_4);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        tablaClientes = new QTableWidget(centralwidget);
        if (tablaClientes->columnCount() < 3)
            tablaClientes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaClientes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaClientes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaClientes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tablaClientes->rowCount() < 20)
            tablaClientes->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tablaClientes->setVerticalHeaderItem(19, __qtablewidgetitem22);
        tablaClientes->setObjectName("tablaClientes");
        tablaClientes->setShowGrid(true);

        verticalLayout_4->addWidget(tablaClientes);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);

        RegistroClientes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistroClientes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 755, 21));
        RegistroClientes->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistroClientes);
        statusbar->setObjectName("statusbar");
        RegistroClientes->setStatusBar(statusbar);

        retranslateUi(RegistroClientes);

        QMetaObject::connectSlotsByName(RegistroClientes);
    } // setupUi

    void retranslateUi(QMainWindow *RegistroClientes)
    {
        RegistroClientes->setWindowTitle(QCoreApplication::translate("RegistroClientes", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegistroClientes", "Agregar Cliente", nullptr));
        label->setText(QCoreApplication::translate("RegistroClientes", "Nombre Cliente :", nullptr));
        label_2->setText(QCoreApplication::translate("RegistroClientes", "Telefono : ", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistroClientes", "Agregar Cliente", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RegistroClientes", "Modificar Cliente", nullptr));
        label_3->setText(QCoreApplication::translate("RegistroClientes", "Direccion :", nullptr));
        label_4->setText(QCoreApplication::translate("RegistroClientes", "Telefono : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegistroClientes", "Actualizar Telefono", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RegistroClientes", "Actualizar Direccion", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegistroClientes", "Gestionar Cliente", nullptr));
        pushButton_7->setText(QCoreApplication::translate("RegistroClientes", "Generar PDF Clientes", nullptr));
        pushButton_8->setText(QCoreApplication::translate("RegistroClientes", "Imprimir PDF Clientes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RegistroClientes", "Volver", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaClientes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegistroClientes", "Nombre Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaClientes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RegistroClientes", "Telefono", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaClientes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RegistroClientes", "Direccion", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaClientes->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RegistroClientes", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaClientes->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RegistroClientes", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaClientes->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("RegistroClientes", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaClientes->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("RegistroClientes", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaClientes->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("RegistroClientes", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tablaClientes->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("RegistroClientes", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tablaClientes->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("RegistroClientes", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tablaClientes->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("RegistroClientes", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tablaClientes->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("RegistroClientes", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tablaClientes->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("RegistroClientes", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tablaClientes->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("RegistroClientes", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tablaClientes->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("RegistroClientes", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tablaClientes->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("RegistroClientes", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tablaClientes->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("RegistroClientes", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tablaClientes->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("RegistroClientes", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tablaClientes->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("RegistroClientes", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tablaClientes->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("RegistroClientes", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tablaClientes->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("RegistroClientes", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tablaClientes->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("RegistroClientes", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tablaClientes->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("RegistroClientes", "20", nullptr));
        pushButton_6->setText(QCoreApplication::translate("RegistroClientes", "Generar PDF Ventas Cliente Seleccionado", nullptr));
        pushButton_5->setText(QCoreApplication::translate("RegistroClientes", "Imprimir Ventas Cliente Seleccionado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroClientes: public Ui_RegistroClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCLIENTES_H

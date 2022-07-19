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
    QTableWidget *table_Clientes;
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

        formLayout->setWidget(6, QFormLayout::SpanningRole, pushButton_3);


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
        table_Clientes = new QTableWidget(centralwidget);
        if (table_Clientes->columnCount() < 4)
            table_Clientes->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_Clientes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_Clientes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_Clientes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_Clientes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_Clientes->setObjectName("table_Clientes");

        verticalLayout_4->addWidget(table_Clientes);

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
        QTableWidgetItem *___qtablewidgetitem = table_Clientes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegistroClientes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_Clientes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RegistroClientes", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_Clientes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RegistroClientes", "Telefono", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_Clientes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RegistroClientes", "Direccion", nullptr));
        pushButton_6->setText(QCoreApplication::translate("RegistroClientes", "Generar PDF Ventas Cliente Seleccionado", nullptr));
        pushButton_5->setText(QCoreApplication::translate("RegistroClientes", "Imprimir Ventas Cliente Seleccionado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroClientes: public Ui_RegistroClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCLIENTES_H

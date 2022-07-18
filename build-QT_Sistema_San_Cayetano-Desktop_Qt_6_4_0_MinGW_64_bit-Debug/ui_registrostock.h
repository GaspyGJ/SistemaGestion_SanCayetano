/********************************************************************************
** Form generated from reading UI file 'registrostock.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROSTOCK_H
#define UI_REGISTROSTOCK_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistroStock
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_Precio;
    QLineEdit *input_Precio;
    QPushButton *btn_ActualizarPrecio;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_Cantidad;
    QLineEdit *input_Cantidad;
    QPushButton *btn_ActualizarStock;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_GenerarPDF_Stock;
    QPushButton *btn_imprimirStock;
    QPushButton *pushButton_5;
    QTableWidget *table_Stock;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegistroStock)
    {
        if (RegistroStock->objectName().isEmpty())
            RegistroStock->setObjectName("RegistroStock");
        RegistroStock->resize(940, 410);
        centralwidget = new QWidget(RegistroStock);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(190, 16777215));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_Precio = new QLabel(groupBox);
        label_Precio->setObjectName("label_Precio");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Precio);

        input_Precio = new QLineEdit(groupBox);
        input_Precio->setObjectName("input_Precio");

        formLayout->setWidget(0, QFormLayout::FieldRole, input_Precio);


        verticalLayout_2->addLayout(formLayout);

        btn_ActualizarPrecio = new QPushButton(groupBox);
        btn_ActualizarPrecio->setObjectName("btn_ActualizarPrecio");

        verticalLayout_2->addWidget(btn_ActualizarPrecio);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(10, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_Cantidad = new QLabel(groupBox);
        label_Cantidad->setObjectName("label_Cantidad");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_Cantidad);

        input_Cantidad = new QLineEdit(groupBox);
        input_Cantidad->setObjectName("input_Cantidad");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, input_Cantidad);


        verticalLayout_4->addLayout(formLayout_2);

        btn_ActualizarStock = new QPushButton(groupBox);
        btn_ActualizarStock->setObjectName("btn_ActualizarStock");

        verticalLayout_4->addWidget(btn_ActualizarStock);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        btn_GenerarPDF_Stock = new QPushButton(groupBox_2);
        btn_GenerarPDF_Stock->setObjectName("btn_GenerarPDF_Stock");

        verticalLayout_3->addWidget(btn_GenerarPDF_Stock);

        btn_imprimirStock = new QPushButton(groupBox_2);
        btn_imprimirStock->setObjectName("btn_imprimirStock");

        verticalLayout_3->addWidget(btn_imprimirStock);


        verticalLayout->addWidget(groupBox_2);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(190, 16777215));

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);

        table_Stock = new QTableWidget(centralwidget);
        if (table_Stock->columnCount() < 4)
            table_Stock->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_Stock->setObjectName("table_Stock");

        horizontalLayout->addWidget(table_Stock);

        RegistroStock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistroStock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 940, 17));
        RegistroStock->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistroStock);
        statusbar->setObjectName("statusbar");
        RegistroStock->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_ActualizarStock, btn_GenerarPDF_Stock);
        QWidget::setTabOrder(btn_GenerarPDF_Stock, btn_imprimirStock);
        QWidget::setTabOrder(btn_imprimirStock, pushButton_5);
        QWidget::setTabOrder(pushButton_5, table_Stock);

        retranslateUi(RegistroStock);

        QMetaObject::connectSlotsByName(RegistroStock);
    } // setupUi

    void retranslateUi(QMainWindow *RegistroStock)
    {
        RegistroStock->setWindowTitle(QCoreApplication::translate("RegistroStock", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegistroStock", "Actualizar Stock", nullptr));
        label_Precio->setText(QCoreApplication::translate("RegistroStock", "Precio :", nullptr));
        btn_ActualizarPrecio->setText(QCoreApplication::translate("RegistroStock", "Actualizar Precio", nullptr));
        label_Cantidad->setText(QCoreApplication::translate("RegistroStock", "Cantidad :", nullptr));
        btn_ActualizarStock->setText(QCoreApplication::translate("RegistroStock", "Actualizar Stock", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegistroStock", "Gestionar Stock", nullptr));
        btn_GenerarPDF_Stock->setText(QCoreApplication::translate("RegistroStock", "Generar PDF Stock", nullptr));
        btn_imprimirStock->setText(QCoreApplication::translate("RegistroStock", "Imprimir Stock", nullptr));
        pushButton_5->setText(QCoreApplication::translate("RegistroStock", "Volver", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_Stock->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegistroStock", "Producto", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_Stock->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RegistroStock", "Ultimo Precio Registrado", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_Stock->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RegistroStock", "En Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_Stock->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RegistroStock", "Fecha Ultima Incorporacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroStock: public Ui_RegistroStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROSTOCK_H

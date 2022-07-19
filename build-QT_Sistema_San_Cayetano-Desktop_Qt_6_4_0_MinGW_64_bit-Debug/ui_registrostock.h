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
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_Precio;
    QLineEdit *input_Precio;
    QPushButton *btn_ActualizarPrecio;
    QFormLayout *formLayout_2;
    QLabel *label_Cantidad;
    QLineEdit *input_Cantidad;
    QPushButton *btn_ActualizarStock;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
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
        RegistroStock->resize(1000, 465);
        centralwidget = new QWidget(RegistroStock);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(190, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_Precio = new QLabel(groupBox);
        label_Precio->setObjectName("label_Precio");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Precio);

        input_Precio = new QLineEdit(groupBox);
        input_Precio->setObjectName("input_Precio");

        formLayout->setWidget(1, QFormLayout::SpanningRole, input_Precio);

        btn_ActualizarPrecio = new QPushButton(groupBox);
        btn_ActualizarPrecio->setObjectName("btn_ActualizarPrecio");
        btn_ActualizarPrecio->setAutoDefault(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, btn_ActualizarPrecio);


        verticalLayout_3->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_Cantidad = new QLabel(groupBox);
        label_Cantidad->setObjectName("label_Cantidad");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_Cantidad);

        input_Cantidad = new QLineEdit(groupBox);
        input_Cantidad->setObjectName("input_Cantidad");

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, input_Cantidad);

        btn_ActualizarStock = new QPushButton(groupBox);
        btn_ActualizarStock->setObjectName("btn_ActualizarStock");
        btn_ActualizarStock->setAutoDefault(true);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, btn_ActualizarStock);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        btn_GenerarPDF_Stock = new QPushButton(groupBox_2);
        btn_GenerarPDF_Stock->setObjectName("btn_GenerarPDF_Stock");
        btn_GenerarPDF_Stock->setAutoDefault(true);

        verticalLayout->addWidget(btn_GenerarPDF_Stock);

        btn_imprimirStock = new QPushButton(groupBox_2);
        btn_imprimirStock->setObjectName("btn_imprimirStock");
        btn_imprimirStock->setAutoDefault(true);

        verticalLayout->addWidget(btn_imprimirStock);


        verticalLayout_2->addWidget(groupBox_2);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(190, 16777215));
        pushButton_5->setAutoDefault(true);

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_2);

        table_Stock = new QTableWidget(centralwidget);
        if (table_Stock->columnCount() < 5)
            table_Stock->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_Stock->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_Stock->setObjectName("table_Stock");
        table_Stock->setTextElideMode(Qt::ElideMiddle);

        horizontalLayout->addWidget(table_Stock);

        RegistroStock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistroStock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        RegistroStock->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistroStock);
        statusbar->setObjectName("statusbar");
        RegistroStock->setStatusBar(statusbar);
        QWidget::setTabOrder(input_Precio, btn_ActualizarPrecio);
        QWidget::setTabOrder(btn_ActualizarPrecio, btn_GenerarPDF_Stock);
        QWidget::setTabOrder(btn_GenerarPDF_Stock, btn_imprimirStock);
        QWidget::setTabOrder(btn_imprimirStock, table_Stock);

        retranslateUi(RegistroStock);

        btn_ActualizarPrecio->setDefault(false);
        btn_ActualizarStock->setDefault(false);
        btn_GenerarPDF_Stock->setDefault(false);
        btn_imprimirStock->setDefault(false);
        pushButton_5->setDefault(false);


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
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegistroStock", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_Stock->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RegistroStock", "Producto", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_Stock->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RegistroStock", "Precio", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_Stock->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RegistroStock", "En Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_Stock->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RegistroStock", "Fecha Ultima Incorporacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroStock: public Ui_RegistroStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROSTOCK_H

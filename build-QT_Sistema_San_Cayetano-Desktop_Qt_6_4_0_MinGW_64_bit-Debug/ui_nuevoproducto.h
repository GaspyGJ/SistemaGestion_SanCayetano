/********************************************************************************
** Form generated from reading UI file 'nuevoproducto.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVOPRODUCTO_H
#define UI_NUEVOPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NuevoProducto
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *input_Nombre;
    QLabel *label_3;
    QLineEdit *input_Precio;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_cancelar;
    QPushButton *btn_Aceptar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NuevoProducto)
    {
        if (NuevoProducto->objectName().isEmpty())
            NuevoProducto->setObjectName("NuevoProducto");
        NuevoProducto->resize(211, 148);
        centralwidget = new QWidget(NuevoProducto);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        input_Nombre = new QLineEdit(centralwidget);
        input_Nombre->setObjectName("input_Nombre");

        formLayout->setWidget(0, QFormLayout::FieldRole, input_Nombre);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        input_Precio = new QLineEdit(centralwidget);
        input_Precio->setObjectName("input_Precio");

        formLayout->setWidget(1, QFormLayout::FieldRole, input_Precio);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_cancelar = new QPushButton(centralwidget);
        btn_cancelar->setObjectName("btn_cancelar");

        horizontalLayout->addWidget(btn_cancelar);

        btn_Aceptar = new QPushButton(centralwidget);
        btn_Aceptar->setObjectName("btn_Aceptar");

        horizontalLayout->addWidget(btn_Aceptar);


        verticalLayout->addLayout(horizontalLayout);

        NuevoProducto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NuevoProducto);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 211, 17));
        NuevoProducto->setMenuBar(menubar);
        statusbar = new QStatusBar(NuevoProducto);
        statusbar->setObjectName("statusbar");
        NuevoProducto->setStatusBar(statusbar);

        retranslateUi(NuevoProducto);

        QMetaObject::connectSlotsByName(NuevoProducto);
    } // setupUi

    void retranslateUi(QMainWindow *NuevoProducto)
    {
        NuevoProducto->setWindowTitle(QCoreApplication::translate("NuevoProducto", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("NuevoProducto", "Nombre :", nullptr));
        label_3->setText(QCoreApplication::translate("NuevoProducto", "Precio :", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("NuevoProducto", "Cancelar", nullptr));
        btn_Aceptar->setText(QCoreApplication::translate("NuevoProducto", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NuevoProducto: public Ui_NuevoProducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOPRODUCTO_H

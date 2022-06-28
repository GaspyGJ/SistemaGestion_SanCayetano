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
#include <QtWidgets/QComboBox>
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
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableWidget *tablaStock;
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
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(190, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_3->addWidget(pushButton_4);


        verticalLayout->addWidget(groupBox_2);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(190, 16777215));

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);

        tablaStock = new QTableWidget(centralwidget);
        if (tablaStock->columnCount() < 4)
            tablaStock->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaStock->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaStock->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaStock->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaStock->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tablaStock->rowCount() < 11)
            tablaStock->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tablaStock->setVerticalHeaderItem(10, __qtablewidgetitem14);
        tablaStock->setObjectName("tablaStock");

        horizontalLayout->addWidget(tablaStock);

        RegistroStock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistroStock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 940, 21));
        RegistroStock->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistroStock);
        statusbar->setObjectName("statusbar");
        RegistroStock->setStatusBar(statusbar);
        QWidget::setTabOrder(comboBox, lineEdit);
        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, tablaStock);

        retranslateUi(RegistroStock);

        QMetaObject::connectSlotsByName(RegistroStock);
    } // setupUi

    void retranslateUi(QMainWindow *RegistroStock)
    {
        RegistroStock->setWindowTitle(QCoreApplication::translate("RegistroStock", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegistroStock", "Actualizar Stock", nullptr));
        label->setText(QCoreApplication::translate("RegistroStock", "Producto :", nullptr));
        label_2->setText(QCoreApplication::translate("RegistroStock", "Cantidad :", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistroStock", "Actualizar Stock", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegistroStock", "Gestionar Stock", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RegistroStock", "Generar PDF Stock", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RegistroStock", "Imprimir Stock", nullptr));
        pushButton_5->setText(QCoreApplication::translate("RegistroStock", "Volver", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaStock->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegistroStock", "Producto", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaStock->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RegistroStock", "Cantidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaStock->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RegistroStock", "Fecha Ultima Incorporacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaStock->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RegistroStock", "Proveedores", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaStock->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RegistroStock", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaStock->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("RegistroStock", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaStock->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("RegistroStock", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaStock->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("RegistroStock", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tablaStock->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("RegistroStock", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tablaStock->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("RegistroStock", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tablaStock->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("RegistroStock", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tablaStock->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("RegistroStock", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tablaStock->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("RegistroStock", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tablaStock->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("RegistroStock", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tablaStock->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("RegistroStock", "12", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroStock: public Ui_RegistroStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROSTOCK_H

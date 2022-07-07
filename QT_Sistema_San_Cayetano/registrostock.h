#ifndef REGISTROSTOCK_H
#define REGISTROSTOCK_H

#include <QMainWindow>
#include "administrador.h"

namespace Ui {
class RegistroStock;
}

class RegistroStock : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroStock(Administrador *administrador,QWidget *parent = nullptr);
    ~RegistroStock();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::RegistroStock * uiRegistroStock;

     Administrador *administrador;
};

#endif // REGISTROSTOCK_H

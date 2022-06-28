#ifndef REGISTROCLIENTES_H
#define REGISTROCLIENTES_H

#include <QMainWindow>

namespace Ui {
class RegistroClientes;
}

class RegistroClientes : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroClientes(QWidget *parent = nullptr);
    ~RegistroClientes();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::RegistroClientes *uiRegistroClientes;
};

#endif // REGISTROCLIENTES_H

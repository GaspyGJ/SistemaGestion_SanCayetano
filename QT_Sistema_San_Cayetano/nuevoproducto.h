#ifndef NUEVOPRODUCTO_H
#define NUEVOPRODUCTO_H

#include <QMainWindow>

namespace Ui {
class NuevoProducto;
}

class NuevoProducto : public QMainWindow
{
    Q_OBJECT

public:
    explicit NuevoProducto(QWidget *parent = nullptr);
    ~NuevoProducto();

private:
    Ui::NuevoProducto *ui;
};

#endif // NUEVOPRODUCTO_H

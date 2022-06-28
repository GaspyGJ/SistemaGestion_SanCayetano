#ifndef REGISTROSTOCK_H
#define REGISTROSTOCK_H

#include <QMainWindow>

namespace Ui {
class RegistroStock;
}

class RegistroStock : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroStock(QWidget *parent = nullptr);
    ~RegistroStock();

private:
    Ui::RegistroStock * uiRegistroStock;
};

#endif // REGISTROSTOCK_H

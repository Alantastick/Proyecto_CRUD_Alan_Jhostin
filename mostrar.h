#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <QMainWindow>

namespace Ui {
class Mostrar;
}

class Mostrar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mostrar(QWidget *parent = nullptr);
    ~Mostrar();

private slots:
    void on_btnVolver_clicked();

private:
    Ui::Mostrar *ui;

    void cargarTabla();
};

#endif

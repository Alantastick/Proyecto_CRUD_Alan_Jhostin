#ifndef BUSCAR_H
#define BUSCAR_H

#include <QMainWindow>

namespace Ui {
class Buscar;
}

class Buscar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Buscar(QWidget *parent = nullptr);
    ~Buscar();

private slots:
    void on_btnBuscar_clicked();
    void on_btnLimpiar_clicked();
    void on_btnVolver_clicked();

private:
    Ui::Buscar *ui;

    void limpiarFormulario();
};

#endif // BUSCAR_H

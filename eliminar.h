#ifndef ELIMINAR_H
#define ELIMINAR_H

#include <QMainWindow>

namespace Ui {
class Eliminar;
}

class Eliminar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Eliminar(QWidget *parent = nullptr);
    ~Eliminar();

private slots:
    void on_btnBuscar_clicked();
    void on_btnEliminar_clicked();
    void on_btnLimpiar_clicked();
    void on_btnVolver_clicked();

private:
    Ui::Eliminar *ui;

    void limpiarFormulario();
};

#endif // ELIMINAR_H

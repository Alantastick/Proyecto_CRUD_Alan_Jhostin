#ifndef ACTUALIZAR_H
#define ACTUALIZAR_H

#include <QMainWindow>

namespace Ui {
class Actualizar;
}

class Actualizar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Actualizar(QWidget *parent = nullptr);
    ~Actualizar();

private slots:
    void on_btnBuscar_clicked();
    void on_btnGuardar_clicked();
    void on_btnLimpiar_clicked();
    void on_btnVolver_clicked();
    void on_cmbEspecialidad_currentIndexChanged(int index);

private:
    Ui::Actualizar *ui;

    void limpiarFormulario();
    void cargarEspecialidades();
    void cargarDoctores(QString especialidad);
    bool camposValidos();
};

#endif // ACTUALIZAR_H

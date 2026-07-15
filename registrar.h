#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <QMainWindow>

namespace Ui {
class Registrar;
}

class Registrar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registrar(QWidget *parent = nullptr);
    ~Registrar();

private slots:
    void on_btnVolver_clicked();
    void on_btnLimpiar_clicked();
    void on_btnGuardar_clicked();
    void on_cmbEspecialidad_currentIndexChanged(int index);

private:
    Ui::Registrar *ui;
    bool camposValidos();
    bool cedulaExiste(QString cedula);
    void guardarCita();
    void limpiarFormulario();
    void cargarEspecialidades();
    void cargarDoctores(QString especialidad);

};

#endif // REGISTRAR_H

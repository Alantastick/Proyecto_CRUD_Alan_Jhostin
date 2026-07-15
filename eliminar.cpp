#include "eliminar.h"
#include "ui_eliminar.h"
#include "mainwindow.h"
#include "archivocitas.h"
#include <QMessageBox>

Eliminar::Eliminar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Eliminar)
{
    ui->setupUi(this);
    limpiarFormulario();
}

Eliminar::~Eliminar()
{
    delete ui;
}

void Eliminar::limpiarFormulario()
{
    ui->txtCedula->clear();
    ui->txtNombre->clear();
    ui->txtEspecialidad->clear();
    ui->txtDoctor->clear();

    ui->txtCedula->setFocus();
}

void Eliminar::on_btnBuscar_clicked()
{
    ArchivoCitas archivo;

    QString nombre;
    QString especialidad;
    QString doctor;

    if(archivo.buscar(ui->txtCedula->text(),
                       nombre,
                       especialidad,
                       doctor))
    {
        ui->txtNombre->setText(nombre);
        ui->txtEspecialidad->setText(especialidad);
        ui->txtDoctor->setText(doctor);
    }
    else
    {
        QMessageBox::information(this,
                                 "Eliminar",
                                 "No existe una cita con esa cédula.");

        limpiarFormulario();
    }
}

void Eliminar::on_btnEliminar_clicked()
{
    if(ui->txtCedula->text().isEmpty())
    {
        QMessageBox::warning(this,
                             "Eliminar",
                             "Ingrese una cédula.");

        return;
    }

    QMessageBox::StandardButton respuesta;

    respuesta = QMessageBox::question(
        this,
        "Eliminar",
        "¿Está seguro de eliminar esta cita?",
        QMessageBox::Yes | QMessageBox::No);

    if(respuesta == QMessageBox::Yes)
    {
        ArchivoCitas archivo;

        if(archivo.eliminar(ui->txtCedula->text()))
        {
            QMessageBox::information(this,
                                     "Eliminar",
                                     "La cita fue eliminada correctamente.");

            limpiarFormulario();
        }
        else
        {
            QMessageBox::critical(this,
                                  "Error",
                                  "No se pudo eliminar la cita.");
        }
    }
}

void Eliminar::on_btnLimpiar_clicked()
{
    limpiarFormulario();
}

void Eliminar::on_btnVolver_clicked()
{
    MainWindow*menu=new MainWindow();
    menu->show();
    this->hide();
}


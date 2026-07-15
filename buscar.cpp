#include "buscar.h"
#include "ui_buscar.h"
#include "mainwindow.h"
#include "archivocitas.h"
#include <QMessageBox>

Buscar::Buscar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Buscar)
{
    ui->setupUi(this);
    limpiarFormulario();
}

Buscar::~Buscar()
{
    delete ui;
}

void Buscar::limpiarFormulario()
{
    ui->txtCedula->clear();
    ui->txtNombre->clear();
    ui->txtEspecialidad->clear();
    ui->txtDoctor->clear();

    ui->txtCedula->setFocus();
}

void Buscar::on_btnLimpiar_clicked()
{
    limpiarFormulario();
}

void Buscar::on_btnBuscar_clicked()
{
    QString cedula = ui->txtCedula->text();

    if(cedula.isEmpty())
    {
        QMessageBox::warning(this,
                             "Buscar",
                             "Ingrese una cédula.");

        return;
    }

    ArchivoCitas archivo;

    QString nombre;
    QString especialidad;
    QString doctor;

    if(archivo.buscar(cedula,
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
                                 "Buscar",
                                 "No existe una cita con esa cédula.");

        ui->txtNombre->clear();
        ui->txtEspecialidad->clear();
        ui->txtDoctor->clear();
    }
}

void Buscar::on_btnVolver_clicked()
{
    MainWindow*menu=new MainWindow();
    menu->show();
    this->hide();
}


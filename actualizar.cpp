#include "actualizar.h"
#include "ui_actualizar.h"
#include "mainwindow.h"
#include "archivocitas.h"
#include <QMessageBox>

Actualizar::Actualizar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Actualizar)
{
    ui->setupUi(this);
    cargarEspecialidades();
    limpiarFormulario();
}

Actualizar::~Actualizar()
{
    delete ui;
}

void Actualizar::cargarEspecialidades()
{
    ui->cmbEspecialidad->clear();

    ui->cmbEspecialidad->addItem("Seleccione...");
    ui->cmbEspecialidad->addItem("Cardiología");
    ui->cmbEspecialidad->addItem("Pediatría");
    ui->cmbEspecialidad->addItem("Dermatología");
    ui->cmbEspecialidad->addItem("Medicina General");
}

void Actualizar::cargarDoctores(QString especialidad)
{
    ui->cmbDoctor->clear();

    if(especialidad=="Cardiología")
    {
        ui->cmbDoctor->addItem("Dr. Juan Pérez");
        ui->cmbDoctor->addItem("Dra. Ana López");
    }
    else if(especialidad=="Pediatría")
    {
        ui->cmbDoctor->addItem("Dr. Carlos Ruiz");
        ui->cmbDoctor->addItem("Dra. María Torres");
    }
    else if(especialidad=="Dermatología")
    {
        ui->cmbDoctor->addItem("Dr. José Castro");
        ui->cmbDoctor->addItem("Dra. Laura Gómez");
    }
    else if(especialidad=="Medicina General")
    {
        ui->cmbDoctor->addItem("Dr. Miguel Sánchez");
        ui->cmbDoctor->addItem("Dra. Sofía Morales");
    }
}

void Actualizar::on_cmbEspecialidad_currentIndexChanged(int)
{
    cargarDoctores(ui->cmbEspecialidad->currentText());
}

void Actualizar::limpiarFormulario()
{
    ui->txtCedula->clear();
    ui->txtNombre->clear();
    ui->cmbEspecialidad->setCurrentIndex(0);
    ui->cmbDoctor->clear();

    ui->txtCedula->setFocus();
}

bool Actualizar::camposValidos()
{
    if(ui->txtNombre->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Ingrese el nombre.");
        return false;
    }

    if(ui->cmbEspecialidad->currentIndex()==0)
    {
        QMessageBox::warning(this,"Error","Seleccione una especialidad.");
        return false;
    }

    return true;
}

void Actualizar::on_btnBuscar_clicked()
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

        ui->cmbEspecialidad->setCurrentText(especialidad);

        cargarDoctores(especialidad);

        ui->cmbDoctor->setCurrentText(doctor);
    }
    else
    {
        QMessageBox::information(this,
                                 "Actualizar",
                                 "No existe una cita con esa cédula.");
    }
}

void Actualizar::on_btnGuardar_clicked()
{
    if(!camposValidos())
        return;

    ArchivoCitas archivo;

    if(archivo.actualizar(ui->txtCedula->text(),
                           ui->txtNombre->text(),
                           ui->cmbEspecialidad->currentText(),
                           ui->cmbDoctor->currentText()))
    {
        QMessageBox::information(this,
                                 "Actualizar",
                                 "La cita fue actualizada correctamente.");

        limpiarFormulario();
    }
    else
    {
        QMessageBox::critical(this,
                              "Error",
                              "No se pudo actualizar.");
    }
}

void Actualizar::on_btnLimpiar_clicked()
{
    limpiarFormulario();
}

void Actualizar::on_btnVolver_clicked()
{
    MainWindow*menu=new MainWindow();
    menu->show();
    this->hide();
}


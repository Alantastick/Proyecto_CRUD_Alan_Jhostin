#include "registrar.h"
#include "ui_registrar.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QRegularExpressionValidator>
#include "archivocitas.h"

Registrar::Registrar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Registrar)
{
    ui->setupUi(this);
    QRegularExpression regex("\\d{10}");
    QRegularExpressionValidator *validator= new QRegularExpressionValidator(regex,this);
    ui->txtCedula->setValidator(validator);
    cargarEspecialidades();
    limpiarFormulario();
}

Registrar::~Registrar()
{
    delete ui;
}

void Registrar::cargarEspecialidades()
{
    ui->cmbEspecialidad->clear();

    ui->cmbEspecialidad->addItem("Seleccione...");
    ui->cmbEspecialidad->addItem("Cardiología");
    ui->cmbEspecialidad->addItem("Pediatría");
    ui->cmbEspecialidad->addItem("Dermatología");
    ui->cmbEspecialidad->addItem("Medicina General");
}

void Registrar::cargarDoctores(QString especialidad)
{
    if(especialidad == "Cardiología")
    {
        ui->cmbDoctor->addItem("Dr. Juan Pérez");
        ui->cmbDoctor->addItem("Dra. Ana López");
    }
    else if(especialidad == "Pediatría")
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

void Registrar::on_cmbEspecialidad_currentIndexChanged(int)
{
    cargarDoctores(ui->cmbEspecialidad->currentText());
}

bool Registrar::camposValidos()
{

    if(ui->txtNombre->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Ingrese el nombre.");
        return false;
    }

    if(ui->txtCedula->text().isEmpty())
    {
        QMessageBox::warning(this,"Cédula","Ingrese la cédula.");
        return false;
    }

    if(ui->txtCedula->text().length()!=10)
    {
        QMessageBox::warning(this,
                             "Cédula",
                             "La cédula debe tener exactamente 10 dígitos.");

        return false;
    }

    if(ui->cmbEspecialidad->currentIndex()==0)
    {
        QMessageBox::warning(this,"Error","Seleccione una especialidad.");
        return false;
    }

    return true;
}


void Registrar::guardarCita()
{
    ArchivoCitas archivo;

    bool guardado = archivo.guardar(
        ui->txtCedula->text(),
        ui->txtNombre->text(),
        ui->cmbEspecialidad->currentText(),
        ui->cmbDoctor->currentText());

    if(guardado)
    {
        QMessageBox::information(this,
                                 "Registro",
                                 "La cita se registró correctamente.");

        limpiarFormulario();
    }
    else
    {
        QMessageBox::critical(this,
                              "Error",
                              "No se pudo guardar la cita.");
    }
}

void Registrar::on_btnGuardar_clicked()
{
    if(!camposValidos())
        return;

    ArchivoCitas archivo;

    if(archivo.existeCedula(ui->txtCedula->text()))
    {
        QMessageBox::warning(this,
                             "Registro",
                             "La cédula ya tiene una cita registrada.");

        return;
    }

    guardarCita();
}

void Registrar::limpiarFormulario()
{
    ui->txtNombre->clear();
    ui->txtCedula->clear();
    ui->cmbEspecialidad->setCurrentIndex(0);
    ui->cmbDoctor->clear();
    ui->txtNombre->setFocus();
}

void Registrar::on_btnLimpiar_clicked()
{
    limpiarFormulario();
}
void Registrar::on_btnVolver_clicked()
{
    MainWindow*menu=new MainWindow();
    menu->show();
    this->hide();
}


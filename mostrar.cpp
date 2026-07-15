#include "mostrar.h"
#include "ui_mostrar.h"
#include "mainwindow.h"
#include "archivocitas.h"

Mostrar::Mostrar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mostrar)
{
    ui->setupUi(this);
    cargarTabla();
}

Mostrar::~Mostrar()
{
    delete ui;
}

void Mostrar::cargarTabla()
{
    ArchivoCitas archivo;

    QList<QStringList> citas = archivo.obtenerTodas();

    ui->tabla->setRowCount(citas.size());

    ui->tabla->setColumnCount(4);

    QStringList encabezados;

    encabezados << "Cédula"
                << "Paciente"
                << "Especialidad"
                << "Doctor";

    ui->tabla->setHorizontalHeaderLabels(encabezados);

    for(int fila=0; fila<citas.size(); fila++)
    {
        ui->tabla->setItem(fila,0,new QTableWidgetItem(citas[fila][0]));
        ui->tabla->setItem(fila,1,new QTableWidgetItem(citas[fila][1]));
        ui->tabla->setItem(fila,2,new QTableWidgetItem(citas[fila][2]));
        ui->tabla->setItem(fila,3,new QTableWidgetItem(citas[fila][3]));
    }

    ui->tabla->resizeColumnsToContents();
}

void Mostrar::on_btnVolver_clicked()
{
    MainWindow*menu=new MainWindow();
    menu->show();
    this->hide();
}


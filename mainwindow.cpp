#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "registrar.h"
#include "mostrar.h"
#include "buscar.h"
#include "actualizar.h"
#include "eliminar.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnRegistrar_clicked()
{
    Registrar*registrar=new Registrar();
    registrar->show();
    this->hide();
}


void MainWindow::on_btnMostrar_clicked()
{
    Mostrar*mostrar=new Mostrar();
    mostrar->show();
    this->hide();
}


void MainWindow::on_btnBuscar_clicked()
{
    Buscar*buscar=new Buscar();
    buscar->show();
    this->hide();
}


void MainWindow::on_btnActualizar_clicked()
{
    Actualizar*actualizar=new Actualizar();
    actualizar->show();
    this->hide();
}


void MainWindow::on_btnEliminar_clicked()
{
    Eliminar*eliminar=new Eliminar();
    eliminar->show();
    this->hide();
}


void MainWindow::on_btnSalir_clicked()
{
    QApplication::quit();
}


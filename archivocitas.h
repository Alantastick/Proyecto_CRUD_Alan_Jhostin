#ifndef ARCHIVOCITAS_H
#define ARCHIVOCITAS_H

#include <QString>
#include <QStringList>
#include <QList>

class ArchivoCitas
{
public:
    ArchivoCitas();

    //Registrar una cita
    bool guardar(QString cedula,
                 QString nombre,
                 QString especialidad,
                 QString doctor);

    //Buscar una cita
    bool buscar(QString cedula,
                QString &nombre,
                QString &especialidad,
                QString &doctor);

    //Verificar si una cédula ya existe
    bool existeCedula(QString cedula);

    //Estas funciones las haremos después
    bool actualizar(QString cedula,
                    QString nombre,
                    QString especialidad,
                    QString doctor);

    bool eliminar(QString cedula);

    QList<QStringList> obtenerTodas();

private:
    const QString nombreArchivo = "citas.txt";
};

#endif // ARCHIVOCITAS_H

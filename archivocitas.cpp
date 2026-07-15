#include "archivocitas.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
ArchivoCitas::ArchivoCitas() {}

bool ArchivoCitas::guardar(QString cedula,
                           QString nombre,
                           QString especialidad,
                           QString doctor)
{
    QFile archivo(nombreArchivo);

    if(!archivo.open(QIODevice::Append | QIODevice::Text))
    {
        return false;
    }
    QTextStream salida(&archivo);

    salida << cedula << "|"
           << nombre << "|"
           << especialidad << "|"
           << doctor << "\n";

    archivo.close();

    return true;
}

bool ArchivoCitas::buscar(QString cedula,
                          QString &nombre,
                          QString &especialidad,
                          QString &doctor)
{
    QFile archivo(nombreArchivo);

    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream entrada(&archivo);

    while(!entrada.atEnd())
    {
        QString linea = entrada.readLine();

        QStringList datos = linea.split("|");

        if(datos.size() == 4 && datos[0] == cedula)
        {
            nombre = datos[1];
            especialidad = datos[2];
            doctor = datos[3];

            archivo.close();
            return true;
        }
    }

    archivo.close();

    return false;
}

bool ArchivoCitas::existeCedula(QString cedula)
{
    QFile archivo(nombreArchivo);
    if(!archivo.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return false;
    }
    QTextStream entrada(&archivo);
    while(!entrada.atEnd())
    {
        QString linea = entrada.readLine();
        QStringList datos=linea.split("|");
        if(datos[0]==cedula)
        {
            archivo.close();
            return true;
        }
    }

    archivo.close();
    return false;
}

bool ArchivoCitas::actualizar(QString cedula,
                              QString nombre,
                              QString especialidad,
                              QString doctor)
{
    QFile archivo(nombreArchivo);

    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QStringList lineas;
    QTextStream entrada(&archivo);

    while(!entrada.atEnd())
    {
        QString linea = entrada.readLine();
        QStringList datos = linea.split("|");

        if(datos.size()==4)
        {
            if(datos[0]==cedula)
            {
                linea = cedula + "|" +
                        nombre + "|" +
                        especialidad + "|" +
                        doctor;
            }
        }

        lineas.append(linea);
    }

    archivo.close();

    if(!archivo.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream salida(&archivo);

    for(QString linea : lineas)
    {
        salida << linea << "\n";
    }

    archivo.close();

    return true;
}

bool ArchivoCitas::eliminar(QString cedula)
{
    QFile archivo(nombreArchivo);

    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QStringList lineas;
    bool eliminado = false;

    QTextStream entrada(&archivo);

    while(!entrada.atEnd())
    {
        QString linea = entrada.readLine();
        QStringList datos = linea.split("|");

        if(datos.size() == 4)
        {
            if(datos[0] == cedula)
            {
                eliminado = true;
            }
            else
            {
                lineas.append(linea);
            }
        }
    }

    archivo.close();

    if(!eliminado)
        return false;

    if(!archivo.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream salida(&archivo);

    for(const QString &linea : lineas)
    {
        salida << linea << "\n";
    }

    archivo.close();

    return true;
}

QList<QStringList> ArchivoCitas::obtenerTodas()
{
    QList<QStringList> citas;

    QFile archivo(nombreArchivo);

    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return citas;

    QTextStream entrada(&archivo);

    while(!entrada.atEnd())
    {
        QString linea = entrada.readLine();

        QStringList datos = linea.split("|");

        if(datos.size()==4)
        {
            citas.append(datos);
        }
    }

    archivo.close();

    return citas;
}

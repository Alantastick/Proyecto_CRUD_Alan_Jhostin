/********************************************************************************
** Form generated from reading UI file 'buscar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_H
#define UI_BUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buscar
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *txtCedula;
    QPushButton *btnBuscar;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtNombre;
    QLabel *label_4;
    QLineEdit *txtEspecialidad;
    QLabel *label_5;
    QLineEdit *txtDoctor;
    QPushButton *btnVolver;
    QPushButton *btnLimpiar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Buscar)
    {
        if (Buscar->objectName().isEmpty())
            Buscar->setObjectName("Buscar");
        Buscar->resize(800, 600);
        centralwidget = new QWidget(Buscar);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 50, 631, 441));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(85, 170, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(212, 234, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(148, 202, 255, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(42, 85, 127, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(57, 113, 170, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        QBrush brush7(QColor(170, 212, 255, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush10(QColor(42, 85, 127, 127));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(161, 208, 255, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush11);
#endif
        groupBox->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(true);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 90, 63, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        txtCedula = new QLineEdit(groupBox);
        txtCedula->setObjectName("txtCedula");
        txtCedula->setGeometry(QRect(190, 90, 113, 26));
        txtCedula->setFont(font);
        btnBuscar = new QPushButton(groupBox);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(410, 90, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font2.setBold(true);
        font2.setItalic(false);
        btnBuscar->setFont(font2);
        btnBuscar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #1D6482;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	border-radius: 12ps;\n"
"	padding: 8px 20px;\n"
"} \n"
"QPushButton:hover{\n"
"	background-color: #1E5B82\n"
"}\n"
"QPushBotton:pressed{\n"
"	background-color: #195082\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 20, 301, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setItalic(true);
        label_2->setFont(font3);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 140, 191, 31));
        label_3->setFont(font1);
        txtNombre = new QLineEdit(groupBox);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(120, 170, 211, 26));
        txtNombre->setFont(font);
        txtNombre->setReadOnly(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 210, 101, 20));
        label_4->setFont(font1);
        txtEspecialidad = new QLineEdit(groupBox);
        txtEspecialidad->setObjectName("txtEspecialidad");
        txtEspecialidad->setGeometry(QRect(120, 240, 211, 26));
        txtEspecialidad->setFont(font);
        txtEspecialidad->setReadOnly(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 280, 63, 20));
        label_5->setFont(font1);
        txtDoctor = new QLineEdit(groupBox);
        txtDoctor->setObjectName("txtDoctor");
        txtDoctor->setGeometry(QRect(120, 310, 211, 26));
        txtDoctor->setFont(font);
        txtDoctor->setReadOnly(true);
        btnVolver = new QPushButton(groupBox);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(280, 380, 121, 31));
        btnVolver->setFont(font2);
        btnVolver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #38BDF8;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	border-radius: 12ps;\n"
"	padding: 8px 20px;\n"
"} \n"
"QPushButton:hover{\n"
"	background-color: #7DD3FC\n"
"}\n"
"QPushBotton:pressed{\n"
"	background-color: #0284C7\n"
"}\n"
""));
        btnLimpiar = new QPushButton(groupBox);
        btnLimpiar->setObjectName("btnLimpiar");
        btnLimpiar->setGeometry(QRect(410, 150, 111, 31));
        btnLimpiar->setFont(font2);
        btnLimpiar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #1D6482;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	border-radius: 12ps;\n"
"	padding: 8px 20px;\n"
"} \n"
"QPushButton:hover{\n"
"	background-color: #1E5B82\n"
"}\n"
"QPushBotton:pressed{\n"
"	background-color: #195082\n"
"}\n"
""));
        Buscar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Buscar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Buscar->setMenuBar(menubar);
        statusbar = new QStatusBar(Buscar);
        statusbar->setObjectName("statusbar");
        Buscar->setStatusBar(statusbar);

        retranslateUi(Buscar);

        QMetaObject::connectSlotsByName(Buscar);
    } // setupUi

    void retranslateUi(QMainWindow *Buscar)
    {
        Buscar->setWindowTitle(QCoreApplication::translate("Buscar", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Buscar", "Cedula:", nullptr));
        btnBuscar->setText(QCoreApplication::translate("Buscar", "BUSCAR", nullptr));
        label_2->setText(QCoreApplication::translate("Buscar", "BUSCAR CITA", nullptr));
        label_3->setText(QCoreApplication::translate("Buscar", "Nombre del paciente:", nullptr));
        label_4->setText(QCoreApplication::translate("Buscar", "Especialidad:", nullptr));
        label_5->setText(QCoreApplication::translate("Buscar", "Doctor:", nullptr));
        btnVolver->setText(QCoreApplication::translate("Buscar", "VOLVER", nullptr));
        btnLimpiar->setText(QCoreApplication::translate("Buscar", "LIMPIAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Buscar: public Ui_Buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H

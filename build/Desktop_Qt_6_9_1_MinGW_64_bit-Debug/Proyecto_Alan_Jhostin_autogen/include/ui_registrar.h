/********************************************************************************
** Form generated from reading UI file 'registrar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAR_H
#define UI_REGISTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registrar
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *txtCedula;
    QLabel *label;
    QLineEdit *txtNombre;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnGuardar;
    QPushButton *btnLimpiar;
    QPushButton *btnVolver;
    QComboBox *cmbEspecialidad;
    QComboBox *cmbDoctor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registrar)
    {
        if (Registrar->objectName().isEmpty())
            Registrar->setObjectName("Registrar");
        Registrar->resize(800, 600);
        centralwidget = new QWidget(Registrar);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 70, 641, 201));
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
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 150, 63, 20));
        label_4->setFont(font);
        txtCedula = new QLineEdit(groupBox);
        txtCedula->setObjectName("txtCedula");
        txtCedula->setGeometry(QRect(140, 70, 131, 26));
        txtCedula->setMaxLength(10);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 71, 20));
        label->setFont(font);
        txtNombre = new QLineEdit(groupBox);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(140, 30, 131, 26));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 63, 20));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 111, 21));
        label_3->setFont(font);
        btnGuardar = new QPushButton(groupBox);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(330, 50, 131, 41));
        btnGuardar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FC8E56;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	border-radius: 12ps;\n"
"	padding: 8px 20px;\n"
"} \n"
"QPushButton:hover{\n"
"	background-color: #FC6F3B\n"
"}\n"
"QPushBotton:pressed{\n"
"	background-color: #FC4D1B\n"
"}\n"
""));
        btnLimpiar = new QPushButton(groupBox);
        btnLimpiar->setObjectName("btnLimpiar");
        btnLimpiar->setGeometry(QRect(480, 50, 121, 41));
        btnLimpiar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FC383D;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	border-radius: 12ps;\n"
"	padding: 8px 20px;\n"
"} \n"
"QPushButton:hover{\n"
"	background-color: #FC2A23\n"
"}\n"
"QPushBotton:pressed{\n"
"	background-color: #FC0409\n"
"}\n"
""));
        btnVolver = new QPushButton(groupBox);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(410, 110, 111, 41));
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
        cmbEspecialidad = new QComboBox(groupBox);
        cmbEspecialidad->setObjectName("cmbEspecialidad");
        cmbEspecialidad->setGeometry(QRect(140, 110, 131, 26));
        cmbDoctor = new QComboBox(groupBox);
        cmbDoctor->setObjectName("cmbDoctor");
        cmbDoctor->setGeometry(QRect(140, 150, 131, 26));
        Registrar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registrar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Registrar->setMenuBar(menubar);
        statusbar = new QStatusBar(Registrar);
        statusbar->setObjectName("statusbar");
        Registrar->setStatusBar(statusbar);

        retranslateUi(Registrar);

        QMetaObject::connectSlotsByName(Registrar);
    } // setupUi

    void retranslateUi(QMainWindow *Registrar)
    {
        Registrar->setWindowTitle(QCoreApplication::translate("Registrar", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("Registrar", "Doctor:", nullptr));
        label->setText(QCoreApplication::translate("Registrar", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("Registrar", "Cedula:", nullptr));
        label_3->setText(QCoreApplication::translate("Registrar", "Especialidad:", nullptr));
        btnGuardar->setText(QCoreApplication::translate("Registrar", "GUARDAR", nullptr));
        btnLimpiar->setText(QCoreApplication::translate("Registrar", "LIMPIAR", nullptr));
        btnVolver->setText(QCoreApplication::translate("Registrar", "VOLVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registrar: public Ui_Registrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_H

/********************************************************************************
** Form generated from reading UI file 'actualizar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALIZAR_H
#define UI_ACTUALIZAR_H

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

class Ui_Actualizar
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
    QLabel *label_5;
    QPushButton *btnVolver;
    QPushButton *btnGuardar;
    QComboBox *cmbEspecialidad;
    QComboBox *cmbDoctor;
    QPushButton *btnLimpiar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Actualizar)
    {
        if (Actualizar->objectName().isEmpty())
            Actualizar->setObjectName("Actualizar");
        Actualizar->resize(800, 600);
        centralwidget = new QWidget(Actualizar);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 40, 631, 441));
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
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(true);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 90, 63, 20));
        label->setFont(font);
        txtCedula = new QLineEdit(groupBox);
        txtCedula->setObjectName("txtCedula");
        txtCedula->setGeometry(QRect(180, 90, 113, 26));
        txtCedula->setFont(font);
        btnBuscar = new QPushButton(groupBox);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(410, 90, 121, 31));
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
        label_2->setGeometry(QRect(150, 20, 331, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 140, 151, 31));
        label_3->setFont(font);
        txtNombre = new QLineEdit(groupBox);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(120, 170, 211, 26));
        txtNombre->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 210, 91, 20));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 280, 63, 20));
        label_5->setFont(font);
        btnVolver = new QPushButton(groupBox);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(340, 380, 121, 41));
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
"}"));
        btnGuardar = new QPushButton(groupBox);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(170, 380, 141, 41));
        btnGuardar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        cmbEspecialidad->setGeometry(QRect(120, 240, 211, 26));
        cmbEspecialidad->setFont(font);
        cmbDoctor = new QComboBox(groupBox);
        cmbDoctor->setObjectName("cmbDoctor");
        cmbDoctor->setGeometry(QRect(120, 310, 211, 26));
        cmbDoctor->setFont(font);
        btnLimpiar = new QPushButton(groupBox);
        btnLimpiar->setObjectName("btnLimpiar");
        btnLimpiar->setGeometry(QRect(410, 140, 121, 31));
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
        Actualizar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Actualizar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Actualizar->setMenuBar(menubar);
        statusbar = new QStatusBar(Actualizar);
        statusbar->setObjectName("statusbar");
        Actualizar->setStatusBar(statusbar);

        retranslateUi(Actualizar);

        QMetaObject::connectSlotsByName(Actualizar);
    } // setupUi

    void retranslateUi(QMainWindow *Actualizar)
    {
        Actualizar->setWindowTitle(QCoreApplication::translate("Actualizar", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Actualizar", "Cedula:", nullptr));
        btnBuscar->setText(QCoreApplication::translate("Actualizar", "BUSCAR", nullptr));
        label_2->setText(QCoreApplication::translate("Actualizar", "ACTUALIZAR CITA", nullptr));
        label_3->setText(QCoreApplication::translate("Actualizar", "Paciente Nuevo:", nullptr));
        label_4->setText(QCoreApplication::translate("Actualizar", "Especialidad:", nullptr));
        label_5->setText(QCoreApplication::translate("Actualizar", "Doctor:", nullptr));
        btnVolver->setText(QCoreApplication::translate("Actualizar", "VOLVER", nullptr));
        btnGuardar->setText(QCoreApplication::translate("Actualizar", "GUARDAR", nullptr));
        btnLimpiar->setText(QCoreApplication::translate("Actualizar", "LIMPIAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Actualizar: public Ui_Actualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALIZAR_H

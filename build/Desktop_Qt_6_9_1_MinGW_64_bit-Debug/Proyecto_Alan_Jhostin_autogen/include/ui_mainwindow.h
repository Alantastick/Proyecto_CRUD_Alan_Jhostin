/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnSalir;
    QPushButton *btnRegistrar;
    QPushButton *btnBuscar;
    QLabel *label;
    QPushButton *btnActualizar;
    QPushButton *btnEliminar;
    QPushButton *btnMostrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 30, 531, 461));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(67, 158, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(194, 224, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(130, 191, 255, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(33, 79, 127, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(45, 105, 170, 255));
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
        QBrush brush7(QColor(161, 206, 255, 255));
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
        QBrush brush10(QColor(33, 79, 127, 127));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(143, 197, 255, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush11);
#endif
        groupBox->setPalette(palette);
        groupBox->setAutoFillBackground(true);
        groupBox->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        btnSalir = new QPushButton(groupBox);
        btnSalir->setObjectName("btnSalir");
        btnSalir->setGeometry(QRect(170, 350, 181, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        QBrush brush12(QColor(11, 72, 130, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnSalir->setPalette(palette1);
        btnSalir->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        btnRegistrar = new QPushButton(groupBox);
        btnRegistrar->setObjectName("btnRegistrar");
        btnRegistrar->setGeometry(QRect(150, 100, 221, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnRegistrar->setPalette(palette2);
        btnRegistrar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        btnBuscar = new QPushButton(groupBox);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(150, 200, 221, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        QBrush brush14(QColor(39, 191, 115, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnBuscar->setPalette(palette3);
        btnBuscar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 471, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        btnActualizar = new QPushButton(groupBox);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(150, 250, 221, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnActualizar->setPalette(palette4);
        btnActualizar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        btnEliminar = new QPushButton(groupBox);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(150, 300, 221, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnEliminar->setPalette(palette5);
        btnEliminar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        btnMostrar = new QPushButton(groupBox);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(150, 150, 221, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush12);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush12);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        btnMostrar->setPalette(palette6);
        btnMostrar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0B4882;\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        btnSalir->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
        btnRegistrar->setText(QCoreApplication::translate("MainWindow", "REGISTRAR CITA", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "BUSCAR CITA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SISTEMA DE CITAS", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "ACTUALIZAR CITA", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "ELIMINAR CITA", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "MOSTRAR CITAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

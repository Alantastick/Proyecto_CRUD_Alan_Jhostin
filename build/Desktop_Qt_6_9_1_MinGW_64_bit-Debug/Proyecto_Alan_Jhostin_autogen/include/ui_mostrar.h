/********************************************************************************
** Form generated from reading UI file 'mostrar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_H
#define UI_MOSTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mostrar
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QTableWidget *tabla;
    QPushButton *btnVolver;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mostrar)
    {
        if (Mostrar->objectName().isEmpty())
            Mostrar->setObjectName("Mostrar");
        Mostrar->resize(800, 600);
        centralwidget = new QWidget(Mostrar);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 50, 561, 451));
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
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 401, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        tabla = new QTableWidget(groupBox);
        if (tabla->columnCount() < 4)
            tabla->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tabla->setObjectName("tabla");
        tabla->setGeometry(QRect(30, 90, 501, 251));
        tabla->setFont(font);
        tabla->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tabla->setAlternatingRowColors(true);
        tabla->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tabla->horizontalHeader()->setVisible(true);
        tabla->horizontalHeader()->setCascadingSectionResizes(false);
        tabla->horizontalHeader()->setHighlightSections(true);
        tabla->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabla->horizontalHeader()->setStretchLastSection(true);
        tabla->verticalHeader()->setVisible(true);
        tabla->verticalHeader()->setCascadingSectionResizes(false);
        tabla->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        btnVolver = new QPushButton(groupBox);
        btnVolver->setObjectName("btnVolver");
        btnVolver->setGeometry(QRect(210, 360, 141, 41));
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
"\n"
""));
        Mostrar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mostrar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Mostrar->setMenuBar(menubar);
        statusbar = new QStatusBar(Mostrar);
        statusbar->setObjectName("statusbar");
        Mostrar->setStatusBar(statusbar);

        retranslateUi(Mostrar);

        QMetaObject::connectSlotsByName(Mostrar);
    } // setupUi

    void retranslateUi(QMainWindow *Mostrar)
    {
        Mostrar->setWindowTitle(QCoreApplication::translate("Mostrar", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Mostrar", "CITAS AGENDADAS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabla->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Mostrar", "C\303\251dula", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabla->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Mostrar", "Paciente", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabla->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Mostrar", "Especialidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabla->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Mostrar", "Doctor", nullptr));
        btnVolver->setText(QCoreApplication::translate("Mostrar", "VOLVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mostrar: public Ui_Mostrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_H

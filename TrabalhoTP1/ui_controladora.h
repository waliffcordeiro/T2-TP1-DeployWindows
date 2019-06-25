/********************************************************************************
** Form generated from reading UI file 'controladora.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLADORA_H
#define UI_CONTROLADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controladora
{
public:
    QWidget *centralwidget;
    QPushButton *btnCadastro;
    QPushButton *btnLogin;
    QPushButton *btnEventos;
    QPushButton *btnVendas;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Controladora)
    {
        if (Controladora->objectName().isEmpty())
            Controladora->setObjectName(QString::fromUtf8("Controladora"));
        Controladora->resize(628, 358);
        Controladora->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(Controladora);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnCadastro = new QPushButton(centralwidget);
        btnCadastro->setObjectName(QString::fromUtf8("btnCadastro"));
        btnCadastro->setGeometry(QRect(260, 100, 89, 24));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(260, 140, 89, 25));
        btnEventos = new QPushButton(centralwidget);
        btnEventos->setObjectName(QString::fromUtf8("btnEventos"));
        btnEventos->setGeometry(QRect(260, 180, 89, 25));
        btnVendas = new QPushButton(centralwidget);
        btnVendas->setObjectName(QString::fromUtf8("btnVendas"));
        btnVendas->setGeometry(QRect(260, 220, 89, 25));
        Controladora->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Controladora);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 628, 22));
        Controladora->setMenuBar(menubar);
        statusbar = new QStatusBar(Controladora);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Controladora->setStatusBar(statusbar);

        retranslateUi(Controladora);

        QMetaObject::connectSlotsByName(Controladora);
    } // setupUi

    void retranslateUi(QMainWindow *Controladora)
    {
        Controladora->setWindowTitle(QCoreApplication::translate("Controladora", "Switch Dreams", nullptr));
        btnCadastro->setText(QCoreApplication::translate("Controladora", "Cadastro", nullptr));
        btnLogin->setText(QCoreApplication::translate("Controladora", "Login", nullptr));
        btnEventos->setText(QCoreApplication::translate("Controladora", "Eventos", nullptr));
        btnVendas->setText(QCoreApplication::translate("Controladora", "Vendas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Controladora: public Ui_Controladora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLADORA_H

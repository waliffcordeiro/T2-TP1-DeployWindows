/********************************************************************************
** Form generated from reading UI file 'viewAutenticacao.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWAUTENTICACAO_H
#define UI_VIEWAUTENTICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewAutenticacao
{
public:
    QWidget *centralwidget;
    QPushButton *Login;
    QPushButton *Home;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *CPF;
    QLineEdit *lineCpf;
    QLabel *checkCPF;
    QLabel *Senha;
    QLineEdit *lineSenha;
    QLabel *checkSenha;
    QCheckBox *showPassword;
    QLabel *labelErro;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewAutenticacao)
    {
        if (viewAutenticacao->objectName().isEmpty())
            viewAutenticacao->setObjectName(QString::fromUtf8("viewAutenticacao"));
        viewAutenticacao->resize(628, 358);
        centralwidget = new QWidget(viewAutenticacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Login = new QPushButton(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(210, 210, 80, 25));
        Home = new QPushButton(centralwidget);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(325, 210, 80, 25));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(202, 120, 223, 58));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CPF = new QLabel(layoutWidget);
        CPF->setObjectName(QString::fromUtf8("CPF"));

        gridLayout->addWidget(CPF, 0, 0, 1, 1);

        lineCpf = new QLineEdit(layoutWidget);
        lineCpf->setObjectName(QString::fromUtf8("lineCpf"));
        QFont font;
        font.setKerning(true);
        lineCpf->setFont(font);

        gridLayout->addWidget(lineCpf, 0, 1, 1, 1);

        checkCPF = new QLabel(layoutWidget);
        checkCPF->setObjectName(QString::fromUtf8("checkCPF"));
        checkCPF->setEnabled(true);
        checkCPF->setMinimumSize(QSize(25, 20));
        checkCPF->setMaximumSize(QSize(25, 20));

        gridLayout->addWidget(checkCPF, 0, 2, 1, 1);

        Senha = new QLabel(layoutWidget);
        Senha->setObjectName(QString::fromUtf8("Senha"));

        gridLayout->addWidget(Senha, 1, 0, 1, 1);

        lineSenha = new QLineEdit(layoutWidget);
        lineSenha->setObjectName(QString::fromUtf8("lineSenha"));

        gridLayout->addWidget(lineSenha, 1, 1, 1, 1);

        checkSenha = new QLabel(layoutWidget);
        checkSenha->setObjectName(QString::fromUtf8("checkSenha"));
        checkSenha->setMinimumSize(QSize(25, 20));
        checkSenha->setMaximumSize(QSize(25, 20));

        gridLayout->addWidget(checkSenha, 1, 2, 1, 1);

        showPassword = new QCheckBox(centralwidget);
        showPassword->setObjectName(QString::fromUtf8("showPassword"));
        showPassword->setGeometry(QRect(200, 180, 124, 23));
        labelErro = new QLabel(centralwidget);
        labelErro->setObjectName(QString::fromUtf8("labelErro"));
        labelErro->setGeometry(QRect(190, 260, 231, 17));
        viewAutenticacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewAutenticacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 628, 22));
        viewAutenticacao->setMenuBar(menubar);
        statusbar = new QStatusBar(viewAutenticacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        viewAutenticacao->setStatusBar(statusbar);

        retranslateUi(viewAutenticacao);

        QMetaObject::connectSlotsByName(viewAutenticacao);
    } // setupUi

    void retranslateUi(QMainWindow *viewAutenticacao)
    {
        viewAutenticacao->setWindowTitle(QCoreApplication::translate("viewAutenticacao", "Switch Dreams", nullptr));
        Login->setText(QCoreApplication::translate("viewAutenticacao", "Login", nullptr));
        Home->setText(QCoreApplication::translate("viewAutenticacao", "Home", nullptr));
        CPF->setText(QCoreApplication::translate("viewAutenticacao", "CPF", nullptr));
        checkCPF->setText(QString());
        Senha->setText(QCoreApplication::translate("viewAutenticacao", "Senha", nullptr));
        checkSenha->setText(QString());
        showPassword->setText(QCoreApplication::translate("viewAutenticacao", "Mostrar Senha", nullptr));
        labelErro->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewAutenticacao: public Ui_viewAutenticacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWAUTENTICACAO_H

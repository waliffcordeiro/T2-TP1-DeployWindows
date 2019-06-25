/********************************************************************************
** Form generated from reading UI file 'viewUsuario.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSUARIO_H
#define UI_VIEWUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewUsuario
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *userNotLogado;
    QCheckBox *checkBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *labelCPF;
    QLabel *helpCPF;
    QLineEdit *linecpf;
    QLabel *labelCheckCPF;
    QLabel *labelSenha;
    QLabel *helpSenha;
    QLineEdit *linesenha;
    QLabel *labelCheckSenha;
    QLabel *labelCartao;
    QLabel *helpCartao;
    QLineEdit *linenumero;
    QLabel *labelCheckCartao;
    QLabel *labelCodigo;
    QLabel *helpCodigo;
    QLineEdit *linecodigo;
    QLabel *labelCheckCodigo;
    QLabel *label;
    QLabel *helpValidade;
    QLineEdit *linedata;
    QLabel *labelCheckData;
    QLabel *msg;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *btnRegistrar;
    QPushButton *btnHome;
    QWidget *userLogado;
    QPushButton *buttonDelete;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelUCPF;
    QLabel *labelUCartao;
    QLabel *labelUCodigo;
    QLabel *labelUValidade;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelSetCPF;
    QLabel *labelSetCartao;
    QLabel *labelSetCodigo;
    QLabel *labelSetValidade;
    QPushButton *btnHome_2;
    QLabel *labelMsgPerfil;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *viewUsuario)
    {
        if (viewUsuario->objectName().isEmpty())
            viewUsuario->setObjectName(QString::fromUtf8("viewUsuario"));
        viewUsuario->resize(628, 358);
        centralWidget = new QWidget(viewUsuario);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 621, 311));
        userNotLogado = new QWidget();
        userNotLogado->setObjectName(QString::fromUtf8("userNotLogado"));
        checkBox = new QCheckBox(userNotLogado);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(486, 70, 121, 23));
        layoutWidget = new QWidget(userNotLogado);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(128, 31, 344, 176));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelCPF = new QLabel(layoutWidget);
        labelCPF->setObjectName(QString::fromUtf8("labelCPF"));

        gridLayout_3->addWidget(labelCPF, 0, 0, 1, 1);

        helpCPF = new QLabel(layoutWidget);
        helpCPF->setObjectName(QString::fromUtf8("helpCPF"));
        helpCPF->setMinimumSize(QSize(30, 30));
        helpCPF->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(helpCPF, 0, 1, 1, 1);

        linecpf = new QLineEdit(layoutWidget);
        linecpf->setObjectName(QString::fromUtf8("linecpf"));

        gridLayout_3->addWidget(linecpf, 0, 2, 1, 1);

        labelCheckCPF = new QLabel(layoutWidget);
        labelCheckCPF->setObjectName(QString::fromUtf8("labelCheckCPF"));
        labelCheckCPF->setStyleSheet(QString::fromUtf8("color rgb(78, 154, 6)"));

        gridLayout_3->addWidget(labelCheckCPF, 0, 3, 1, 1);

        labelSenha = new QLabel(layoutWidget);
        labelSenha->setObjectName(QString::fromUtf8("labelSenha"));

        gridLayout_3->addWidget(labelSenha, 1, 0, 1, 1);

        helpSenha = new QLabel(layoutWidget);
        helpSenha->setObjectName(QString::fromUtf8("helpSenha"));
        helpSenha->setMinimumSize(QSize(30, 30));
        helpSenha->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(helpSenha, 1, 1, 1, 1);

        linesenha = new QLineEdit(layoutWidget);
        linesenha->setObjectName(QString::fromUtf8("linesenha"));

        gridLayout_3->addWidget(linesenha, 1, 2, 1, 1);

        labelCheckSenha = new QLabel(layoutWidget);
        labelCheckSenha->setObjectName(QString::fromUtf8("labelCheckSenha"));
        labelCheckSenha->setStyleSheet(QString::fromUtf8("color rgb(78, 154, 6)"));

        gridLayout_3->addWidget(labelCheckSenha, 1, 3, 1, 1);

        labelCartao = new QLabel(layoutWidget);
        labelCartao->setObjectName(QString::fromUtf8("labelCartao"));

        gridLayout_3->addWidget(labelCartao, 2, 0, 1, 1);

        helpCartao = new QLabel(layoutWidget);
        helpCartao->setObjectName(QString::fromUtf8("helpCartao"));
        helpCartao->setMinimumSize(QSize(30, 30));
        helpCartao->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(helpCartao, 2, 1, 1, 1);

        linenumero = new QLineEdit(layoutWidget);
        linenumero->setObjectName(QString::fromUtf8("linenumero"));

        gridLayout_3->addWidget(linenumero, 2, 2, 1, 1);

        labelCheckCartao = new QLabel(layoutWidget);
        labelCheckCartao->setObjectName(QString::fromUtf8("labelCheckCartao"));
        labelCheckCartao->setStyleSheet(QString::fromUtf8("color rgb(78, 154, 6)"));

        gridLayout_3->addWidget(labelCheckCartao, 2, 3, 1, 1);

        labelCodigo = new QLabel(layoutWidget);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));

        gridLayout_3->addWidget(labelCodigo, 3, 0, 1, 1);

        helpCodigo = new QLabel(layoutWidget);
        helpCodigo->setObjectName(QString::fromUtf8("helpCodigo"));
        helpCodigo->setMinimumSize(QSize(30, 30));
        helpCodigo->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(helpCodigo, 3, 1, 1, 1);

        linecodigo = new QLineEdit(layoutWidget);
        linecodigo->setObjectName(QString::fromUtf8("linecodigo"));

        gridLayout_3->addWidget(linecodigo, 3, 2, 1, 1);

        labelCheckCodigo = new QLabel(layoutWidget);
        labelCheckCodigo->setObjectName(QString::fromUtf8("labelCheckCodigo"));
        labelCheckCodigo->setStyleSheet(QString::fromUtf8("color rgb(78, 154, 6)"));

        gridLayout_3->addWidget(labelCheckCodigo, 3, 3, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 4, 0, 1, 1);

        helpValidade = new QLabel(layoutWidget);
        helpValidade->setObjectName(QString::fromUtf8("helpValidade"));
        helpValidade->setMinimumSize(QSize(30, 30));
        helpValidade->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(helpValidade, 4, 1, 1, 1);

        linedata = new QLineEdit(layoutWidget);
        linedata->setObjectName(QString::fromUtf8("linedata"));

        gridLayout_3->addWidget(linedata, 4, 2, 1, 1);

        labelCheckData = new QLabel(layoutWidget);
        labelCheckData->setObjectName(QString::fromUtf8("labelCheckData"));
        labelCheckData->setStyleSheet(QString::fromUtf8("color rgb(78, 154, 6)"));

        gridLayout_3->addWidget(labelCheckData, 4, 3, 1, 1);

        msg = new QLabel(userNotLogado);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(10, 260, 571, 17));
        layoutWidget_2 = new QWidget(userNotLogado);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(220, 220, 168, 27));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        btnRegistrar = new QPushButton(layoutWidget_2);
        btnRegistrar->setObjectName(QString::fromUtf8("btnRegistrar"));
        btnRegistrar->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btnRegistrar, 0, 0, 1, 1);

        btnHome = new QPushButton(layoutWidget_2);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));

        gridLayout_4->addWidget(btnHome, 0, 1, 1, 1);

        stackedWidget->addWidget(userNotLogado);
        userLogado = new QWidget();
        userLogado->setObjectName(QString::fromUtf8("userLogado"));
        buttonDelete = new QPushButton(userLogado);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setGeometry(QRect(430, 230, 80, 25));
        layoutWidget1 = new QWidget(userLogado);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 50, 62, 121));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelUCPF = new QLabel(layoutWidget1);
        labelUCPF->setObjectName(QString::fromUtf8("labelUCPF"));

        verticalLayout->addWidget(labelUCPF);

        labelUCartao = new QLabel(layoutWidget1);
        labelUCartao->setObjectName(QString::fromUtf8("labelUCartao"));

        verticalLayout->addWidget(labelUCartao);

        labelUCodigo = new QLabel(layoutWidget1);
        labelUCodigo->setObjectName(QString::fromUtf8("labelUCodigo"));

        verticalLayout->addWidget(labelUCodigo);

        labelUValidade = new QLabel(layoutWidget1);
        labelUValidade->setObjectName(QString::fromUtf8("labelUValidade"));

        verticalLayout->addWidget(labelUValidade);

        layoutWidget2 = new QWidget(userLogado);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 50, 141, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelSetCPF = new QLabel(layoutWidget2);
        labelSetCPF->setObjectName(QString::fromUtf8("labelSetCPF"));

        verticalLayout_2->addWidget(labelSetCPF);

        labelSetCartao = new QLabel(layoutWidget2);
        labelSetCartao->setObjectName(QString::fromUtf8("labelSetCartao"));

        verticalLayout_2->addWidget(labelSetCartao);

        labelSetCodigo = new QLabel(layoutWidget2);
        labelSetCodigo->setObjectName(QString::fromUtf8("labelSetCodigo"));
        labelSetCodigo->setWordWrap(false);

        verticalLayout_2->addWidget(labelSetCodigo);

        labelSetValidade = new QLabel(layoutWidget2);
        labelSetValidade->setObjectName(QString::fromUtf8("labelSetValidade"));

        verticalLayout_2->addWidget(labelSetValidade);

        btnHome_2 = new QPushButton(userLogado);
        btnHome_2->setObjectName(QString::fromUtf8("btnHome_2"));
        btnHome_2->setGeometry(QRect(330, 230, 80, 25));
        labelMsgPerfil = new QLabel(userLogado);
        labelMsgPerfil->setObjectName(QString::fromUtf8("labelMsgPerfil"));
        labelMsgPerfil->setGeometry(QRect(50, 190, 551, 21));
        stackedWidget->addWidget(userLogado);
        viewUsuario->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(viewUsuario);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 628, 22));
        viewUsuario->setMenuBar(menuBar);
        mainToolBar = new QToolBar(viewUsuario);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        viewUsuario->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(viewUsuario);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        viewUsuario->setStatusBar(statusBar);

        retranslateUi(viewUsuario);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(viewUsuario);
    } // setupUi

    void retranslateUi(QMainWindow *viewUsuario)
    {
        viewUsuario->setWindowTitle(QCoreApplication::translate("viewUsuario", "Switch Dreams", nullptr));
        checkBox->setText(QCoreApplication::translate("viewUsuario", "Mostrar Senha", nullptr));
        labelCPF->setText(QCoreApplication::translate("viewUsuario", "CPF", nullptr));
        helpCPF->setText(QString());
        linecpf->setText(QString());
        labelCheckCPF->setText(QString());
        labelSenha->setText(QCoreApplication::translate("viewUsuario", "Senha", nullptr));
        helpSenha->setText(QString());
        linesenha->setText(QString());
        labelCheckSenha->setText(QString());
        labelCartao->setText(QCoreApplication::translate("viewUsuario", "Cart\303\243o de Cr\303\251dito", nullptr));
        helpCartao->setText(QString());
        linenumero->setText(QString());
        labelCheckCartao->setText(QString());
        labelCodigo->setText(QCoreApplication::translate("viewUsuario", "C\303\263digo de Seguran\303\247a", nullptr));
        helpCodigo->setText(QString());
        linecodigo->setText(QString());
        labelCheckCodigo->setText(QString());
        label->setText(QCoreApplication::translate("viewUsuario", "Validade", nullptr));
        helpValidade->setText(QString());
        linedata->setText(QString());
        labelCheckData->setText(QString());
        msg->setText(QString());
        btnRegistrar->setText(QCoreApplication::translate("viewUsuario", "Registrar", nullptr));
        btnHome->setText(QCoreApplication::translate("viewUsuario", "Home", nullptr));
        buttonDelete->setText(QCoreApplication::translate("viewUsuario", "Delete", nullptr));
        labelUCPF->setText(QCoreApplication::translate("viewUsuario", "CPF", nullptr));
        labelUCartao->setText(QCoreApplication::translate("viewUsuario", "Cart\303\243o", nullptr));
        labelUCodigo->setText(QCoreApplication::translate("viewUsuario", "C\303\263digo", nullptr));
        labelUValidade->setText(QCoreApplication::translate("viewUsuario", "Validade", nullptr));
        labelSetCPF->setText(QCoreApplication::translate("viewUsuario", "CPF", nullptr));
        labelSetCartao->setText(QCoreApplication::translate("viewUsuario", "Cart\303\243o", nullptr));
        labelSetCodigo->setText(QCoreApplication::translate("viewUsuario", "Codigo", nullptr));
        labelSetValidade->setText(QCoreApplication::translate("viewUsuario", "Validade", nullptr));
        btnHome_2->setText(QCoreApplication::translate("viewUsuario", "Home", nullptr));
        labelMsgPerfil->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewUsuario: public Ui_viewUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSUARIO_H

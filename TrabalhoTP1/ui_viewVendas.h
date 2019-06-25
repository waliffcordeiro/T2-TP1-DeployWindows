/********************************************************************************
** Form generated from reading UI file 'viewVendas.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWVENDAS_H
#define UI_VIEWVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewVendas
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnVerIngressosVendidos;
    QPushButton *btnComprarIngresso;
    QPushButton *btnHome;
    QLabel *label;
    QWidget *page_2;
    QPushButton *btnComprar;
    QLabel *label_4;
    QPushButton *btnVoltar;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineQuantidade;
    QComboBox *comboBoxApr;
    QLabel *labelCompra;
    QWidget *page_3;
    QLabel *label_5;
    QPushButton *btnVoltar2;
    QComboBox *comboBoxEve;
    QTableWidget *tableQtdVendida;
    QLabel *label_6;
    QWidget *page_4;
    QTableWidget *tableCpfQte;
    QLabel *label_7;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewVendas)
    {
        if (viewVendas->objectName().isEmpty())
            viewVendas->setObjectName(QString::fromUtf8("viewVendas"));
        viewVendas->resize(800, 600);
        centralwidget = new QWidget(viewVendas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 0, 651, 441));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 210, 191, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnVerIngressosVendidos = new QPushButton(layoutWidget);
        btnVerIngressosVendidos->setObjectName(QString::fromUtf8("btnVerIngressosVendidos"));

        gridLayout->addWidget(btnVerIngressosVendidos, 5, 0, 1, 1);

        btnComprarIngresso = new QPushButton(layoutWidget);
        btnComprarIngresso->setObjectName(QString::fromUtf8("btnComprarIngresso"));

        gridLayout->addWidget(btnComprarIngresso, 3, 0, 1, 1);

        btnHome = new QPushButton(layoutWidget);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));

        gridLayout->addWidget(btnHome, 6, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        btnComprar = new QPushButton(page_2);
        btnComprar->setObjectName(QString::fromUtf8("btnComprar"));
        btnComprar->setGeometry(QRect(200, 330, 89, 25));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 180, 151, 17));
        btnVoltar = new QPushButton(page_2);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(310, 330, 89, 25));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 250, 316, 58));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineQuantidade = new QLineEdit(layoutWidget1);
        lineQuantidade->setObjectName(QString::fromUtf8("lineQuantidade"));

        gridLayout_2->addWidget(lineQuantidade, 1, 1, 1, 1);

        comboBoxApr = new QComboBox(layoutWidget1);
        comboBoxApr->setObjectName(QString::fromUtf8("comboBoxApr"));

        gridLayout_2->addWidget(comboBoxApr, 0, 1, 1, 1);

        labelCompra = new QLabel(page_2);
        labelCompra->setObjectName(QString::fromUtf8("labelCompra"));
        labelCompra->setGeometry(QRect(130, 390, 271, 17));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 70, 191, 20));
        btnVoltar2 = new QPushButton(page_3);
        btnVoltar2->setObjectName(QString::fromUtf8("btnVoltar2"));
        btnVoltar2->setGeometry(QRect(400, 120, 89, 25));
        comboBoxEve = new QComboBox(page_3);
        comboBoxEve->setObjectName(QString::fromUtf8("comboBoxEve"));
        comboBoxEve->setGeometry(QRect(180, 120, 131, 25));
        tableQtdVendida = new QTableWidget(page_3);
        if (tableQtdVendida->columnCount() < 3)
            tableQtdVendida->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableQtdVendida->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableQtdVendida->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableQtdVendida->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableQtdVendida->setObjectName(QString::fromUtf8("tableQtdVendida"));
        tableQtdVendida->setGeometry(QRect(20, 160, 471, 281));
        tableQtdVendida->horizontalHeader()->setDefaultSectionSize(160);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 120, 151, 20));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        tableCpfQte = new QTableWidget(page_4);
        if (tableCpfQte->columnCount() < 2)
            tableCpfQte->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableCpfQte->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableCpfQte->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableCpfQte->setObjectName(QString::fromUtf8("tableCpfQte"));
        tableCpfQte->setGeometry(QRect(80, 70, 361, 331));
        tableCpfQte->horizontalHeader()->setDefaultSectionSize(180);
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 30, 161, 20));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 410, 89, 25));
        stackedWidget->addWidget(page_4);
        viewVendas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewVendas);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        viewVendas->setMenuBar(menubar);
        statusbar = new QStatusBar(viewVendas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        viewVendas->setStatusBar(statusbar);

        retranslateUi(viewVendas);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(viewVendas);
    } // setupUi

    void retranslateUi(QMainWindow *viewVendas)
    {
        viewVendas->setWindowTitle(QCoreApplication::translate("viewVendas", "Switch Dreams", nullptr));
        btnVerIngressosVendidos->setText(QCoreApplication::translate("viewVendas", "Ver Ingressos Vendidos", nullptr));
        btnComprarIngresso->setText(QCoreApplication::translate("viewVendas", "Comprar Ingresso", nullptr));
        btnHome->setText(QCoreApplication::translate("viewVendas", "Home", nullptr));
        label->setText(QCoreApplication::translate("viewVendas", "Menu Principal de Vendas", nullptr));
        btnComprar->setText(QCoreApplication::translate("viewVendas", "Comprar", nullptr));
        label_4->setText(QCoreApplication::translate("viewVendas", "Compra de Ingresso", nullptr));
        btnVoltar->setText(QCoreApplication::translate("viewVendas", "Voltar", nullptr));
        label_2->setText(QCoreApplication::translate("viewVendas", "C\303\265digo da Apresenta\303\247\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("viewVendas", "Quantidade", nullptr));
        labelCompra->setText(QCoreApplication::translate("viewVendas", "msg de compra", nullptr));
        label_5->setText(QCoreApplication::translate("viewVendas", "Pagina Ingressos Vendidos", nullptr));
        btnVoltar2->setText(QCoreApplication::translate("viewVendas", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableQtdVendida->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("viewVendas", "Apresenta\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableQtdVendida->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("viewVendas", "Ingressos Vendidos", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableQtdVendida->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("viewVendas", "Informa\303\247\303\265es", nullptr));
        label_6->setText(QCoreApplication::translate("viewVendas", "C\303\263digo de Evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableCpfQte->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("viewVendas", "Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableCpfQte->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("viewVendas", "Quantidade de Ingressos", nullptr));
        label_7->setText(QCoreApplication::translate("viewVendas", "Ingressos Comprados", nullptr));
        pushButton->setText(QCoreApplication::translate("viewVendas", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewVendas: public Ui_viewVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWVENDAS_H

/********************************************************************************
** Form generated from reading UI file 'viewEventos.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEVENTOS_H
#define UI_VIEWEVENTOS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewEventos
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *btnHome;
    QLabel *label;
    QPushButton *btnCriar;
    QPushButton *btnPesquisar;
    QPushButton *btnMeusEventos;
    QWidget *page_2;
    QLabel *label_2;
    QTableWidget *tableEventos;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelEstado;
    QPushButton *btnPesquisarReal;
    QDateEdit *dateFim;
    QLabel *labelCidade;
    QLineEdit *lineCidade;
    QLabel *labelDateInicio;
    QDateEdit *dateInicio;
    QLabel *labelDateFim;
    QLineEdit *lineEstado;
    QPushButton *btnHome_2;
    QWidget *page_3;
    QPushButton *btnCriarEvento;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *helpCodigo;
    QLineEdit *clineCodigo;
    QLabel *checkCodigo;
    QLabel *label_4;
    QLabel *helpNome;
    QLineEdit *clineNome;
    QLabel *checkNome;
    QLabel *label_5;
    QLabel *helpCidade;
    QLineEdit *clineCidade;
    QLabel *checkCidade;
    QLabel *label_6;
    QLabel *helpEstado;
    QLineEdit *clineEstado;
    QLabel *checkEstado;
    QLabel *label_7;
    QLabel *helpClasse;
    QLineEdit *clineClasse;
    QLabel *checkClasse;
    QLabel *label_8;
    QLabel *helpFaixa;
    QLineEdit *clineFaixa;
    QLabel *checkFaixa;
    QPushButton *pushButton;
    QWidget *page_4;
    QLabel *label_10;
    QPushButton *btnAdicionarApr;
    QPushButton *btnConcluirApr;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QLabel *aprHelpCodigo;
    QLineEdit *alineCodigo;
    QLabel *aprCheckCod;
    QLabel *label_12;
    QLabel *aprHelpData;
    QDateEdit *alineData;
    QLabel *aprCheckData;
    QLabel *label_13;
    QLabel *aprHelpHorario;
    QTimeEdit *alineHorario;
    QLabel *aprCheckHor;
    QLabel *label_14;
    QLabel *aprHelpPreco;
    QLineEdit *alinePreco;
    QLabel *aprCheckPreco;
    QLabel *label_15;
    QLabel *aprHelpSala;
    QLineEdit *alineSala;
    QLabel *aprCheckSala;
    QLabel *label_16;
    QLabel *aprHelpDisp;
    QLineEdit *alineDisponibilidade;
    QLabel *aprCheckDisp;
    QLabel *labelCreated;
    QPushButton *buttonHome;
    QWidget *page_5;
    QTableWidget *tableApresentacao;
    QLabel *tituloApresentacao;
    QPushButton *btnMenu3;
    QWidget *page_6;
    QTableWidget *tableMeusEventos;
    QLabel *label_18;
    QPushButton *btnVoltar;
    QWidget *page_7;
    QLabel *label_17;
    QPushButton *btnEditar;
    QPushButton *pushButton_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *labelEditNome;
    QLabel *editHelpNome;
    QLineEdit *editLineNome;
    QLabel *editCheckNome;
    QLabel *labelEditCidade;
    QLabel *editHelpCidade;
    QLineEdit *editLineCid;
    QLabel *editCheckCidade;
    QLabel *labelEditCidade_2;
    QLabel *editHelpEstado;
    QLineEdit *editLineEstado;
    QLabel *editCheckEstado;
    QLabel *labelEditClasse;
    QLabel *editHelpClasse;
    QLineEdit *editLineClasse;
    QLabel *editCheckClasse;
    QLabel *labelEditFaixa;
    QLabel *editHelpFaixa;
    QLineEdit *editLineFaixa;
    QLabel *editCheckFaixa;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewEventos)
    {
        if (viewEventos->objectName().isEmpty())
            viewEventos->setObjectName(QString::fromUtf8("viewEventos"));
        viewEventos->resize(825, 506);
        centralwidget = new QWidget(viewEventos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 761, 461));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        btnHome = new QPushButton(page);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setGeometry(QRect(340, 290, 103, 25));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 130, 191, 17));
        btnCriar = new QPushButton(page);
        btnCriar->setObjectName(QString::fromUtf8("btnCriar"));
        btnCriar->setGeometry(QRect(340, 170, 103, 25));
        btnPesquisar = new QPushButton(page);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        btnPesquisar->setGeometry(QRect(340, 210, 103, 25));
        btnMeusEventos = new QPushButton(page);
        btnMeusEventos->setObjectName(QString::fromUtf8("btnMeusEventos"));
        btnMeusEventos->setGeometry(QRect(340, 250, 103, 25));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 0, 141, 17));
        tableEventos = new QTableWidget(page_2);
        if (tableEventos->columnCount() < 7)
            tableEventos->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableEventos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableEventos->setObjectName(QString::fromUtf8("tableEventos"));
        tableEventos->setGeometry(QRect(60, 80, 701, 331));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 20, 591, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelEstado = new QLabel(layoutWidget);
        labelEstado->setObjectName(QString::fromUtf8("labelEstado"));

        gridLayout->addWidget(labelEstado, 0, 1, 1, 1);

        btnPesquisarReal = new QPushButton(layoutWidget);
        btnPesquisarReal->setObjectName(QString::fromUtf8("btnPesquisarReal"));

        gridLayout->addWidget(btnPesquisarReal, 1, 4, 1, 1);

        dateFim = new QDateEdit(layoutWidget);
        dateFim->setObjectName(QString::fromUtf8("dateFim"));
        dateFim->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        dateFim->setDate(QDate(2019, 1, 1));

        gridLayout->addWidget(dateFim, 1, 3, 1, 1);

        labelCidade = new QLabel(layoutWidget);
        labelCidade->setObjectName(QString::fromUtf8("labelCidade"));

        gridLayout->addWidget(labelCidade, 0, 0, 1, 1);

        lineCidade = new QLineEdit(layoutWidget);
        lineCidade->setObjectName(QString::fromUtf8("lineCidade"));

        gridLayout->addWidget(lineCidade, 1, 0, 1, 1);

        labelDateInicio = new QLabel(layoutWidget);
        labelDateInicio->setObjectName(QString::fromUtf8("labelDateInicio"));

        gridLayout->addWidget(labelDateInicio, 0, 2, 1, 1);

        dateInicio = new QDateEdit(layoutWidget);
        dateInicio->setObjectName(QString::fromUtf8("dateInicio"));
        dateInicio->setDate(QDate(2019, 1, 1));

        gridLayout->addWidget(dateInicio, 1, 2, 1, 1);

        labelDateFim = new QLabel(layoutWidget);
        labelDateFim->setObjectName(QString::fromUtf8("labelDateFim"));

        gridLayout->addWidget(labelDateFim, 0, 3, 1, 1);

        lineEstado = new QLineEdit(layoutWidget);
        lineEstado->setObjectName(QString::fromUtf8("lineEstado"));

        gridLayout->addWidget(lineEstado, 1, 1, 1, 1);

        btnHome_2 = new QPushButton(page_2);
        btnHome_2->setObjectName(QString::fromUtf8("btnHome_2"));
        btnHome_2->setGeometry(QRect(660, 420, 89, 25));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        btnCriarEvento = new QPushButton(page_3);
        btnCriarEvento->setObjectName(QString::fromUtf8("btnCriarEvento"));
        btnCriarEvento->setGeometry(QRect(430, 330, 89, 25));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(350, 70, 101, 17));
        layoutWidget1 = new QWidget(page_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 110, 279, 212));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        helpCodigo = new QLabel(layoutWidget1);
        helpCodigo->setObjectName(QString::fromUtf8("helpCodigo"));
        helpCodigo->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpCodigo, 0, 1, 1, 1);

        clineCodigo = new QLineEdit(layoutWidget1);
        clineCodigo->setObjectName(QString::fromUtf8("clineCodigo"));

        gridLayout_2->addWidget(clineCodigo, 0, 2, 1, 1);

        checkCodigo = new QLabel(layoutWidget1);
        checkCodigo->setObjectName(QString::fromUtf8("checkCodigo"));

        gridLayout_2->addWidget(checkCodigo, 0, 3, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        helpNome = new QLabel(layoutWidget1);
        helpNome->setObjectName(QString::fromUtf8("helpNome"));
        helpNome->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpNome, 1, 1, 1, 1);

        clineNome = new QLineEdit(layoutWidget1);
        clineNome->setObjectName(QString::fromUtf8("clineNome"));

        gridLayout_2->addWidget(clineNome, 1, 2, 1, 1);

        checkNome = new QLabel(layoutWidget1);
        checkNome->setObjectName(QString::fromUtf8("checkNome"));

        gridLayout_2->addWidget(checkNome, 1, 3, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        helpCidade = new QLabel(layoutWidget1);
        helpCidade->setObjectName(QString::fromUtf8("helpCidade"));
        helpCidade->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpCidade, 2, 1, 1, 1);

        clineCidade = new QLineEdit(layoutWidget1);
        clineCidade->setObjectName(QString::fromUtf8("clineCidade"));

        gridLayout_2->addWidget(clineCidade, 2, 2, 1, 1);

        checkCidade = new QLabel(layoutWidget1);
        checkCidade->setObjectName(QString::fromUtf8("checkCidade"));

        gridLayout_2->addWidget(checkCidade, 2, 3, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        helpEstado = new QLabel(layoutWidget1);
        helpEstado->setObjectName(QString::fromUtf8("helpEstado"));
        helpEstado->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpEstado, 3, 1, 1, 1);

        clineEstado = new QLineEdit(layoutWidget1);
        clineEstado->setObjectName(QString::fromUtf8("clineEstado"));

        gridLayout_2->addWidget(clineEstado, 3, 2, 1, 1);

        checkEstado = new QLabel(layoutWidget1);
        checkEstado->setObjectName(QString::fromUtf8("checkEstado"));

        gridLayout_2->addWidget(checkEstado, 3, 3, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        helpClasse = new QLabel(layoutWidget1);
        helpClasse->setObjectName(QString::fromUtf8("helpClasse"));
        helpClasse->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpClasse, 4, 1, 1, 1);

        clineClasse = new QLineEdit(layoutWidget1);
        clineClasse->setObjectName(QString::fromUtf8("clineClasse"));

        gridLayout_2->addWidget(clineClasse, 4, 2, 1, 1);

        checkClasse = new QLabel(layoutWidget1);
        checkClasse->setObjectName(QString::fromUtf8("checkClasse"));

        gridLayout_2->addWidget(checkClasse, 4, 3, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        helpFaixa = new QLabel(layoutWidget1);
        helpFaixa->setObjectName(QString::fromUtf8("helpFaixa"));
        helpFaixa->setMinimumSize(QSize(30, 30));

        gridLayout_2->addWidget(helpFaixa, 5, 1, 1, 1);

        clineFaixa = new QLineEdit(layoutWidget1);
        clineFaixa->setObjectName(QString::fromUtf8("clineFaixa"));

        gridLayout_2->addWidget(clineFaixa, 5, 2, 1, 1);

        checkFaixa = new QLabel(layoutWidget1);
        checkFaixa->setObjectName(QString::fromUtf8("checkFaixa"));

        gridLayout_2->addWidget(checkFaixa, 5, 3, 1, 1);

        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 330, 89, 25));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 50, 171, 17));
        btnAdicionarApr = new QPushButton(page_4);
        btnAdicionarApr->setObjectName(QString::fromUtf8("btnAdicionarApr"));
        btnAdicionarApr->setGeometry(QRect(240, 320, 89, 25));
        btnConcluirApr = new QPushButton(page_4);
        btnConcluirApr->setObjectName(QString::fromUtf8("btnConcluirApr"));
        btnConcluirApr->setGeometry(QRect(360, 320, 89, 25));
        btnConcluirApr->setStyleSheet(QString::fromUtf8(""));
        layoutWidget2 = new QWidget(page_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 90, 307, 212));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        aprHelpCodigo = new QLabel(layoutWidget2);
        aprHelpCodigo->setObjectName(QString::fromUtf8("aprHelpCodigo"));
        aprHelpCodigo->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpCodigo, 0, 1, 1, 1);

        alineCodigo = new QLineEdit(layoutWidget2);
        alineCodigo->setObjectName(QString::fromUtf8("alineCodigo"));

        gridLayout_3->addWidget(alineCodigo, 0, 2, 1, 1);

        aprCheckCod = new QLabel(layoutWidget2);
        aprCheckCod->setObjectName(QString::fromUtf8("aprCheckCod"));

        gridLayout_3->addWidget(aprCheckCod, 0, 3, 1, 1);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        aprHelpData = new QLabel(layoutWidget2);
        aprHelpData->setObjectName(QString::fromUtf8("aprHelpData"));
        aprHelpData->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpData, 1, 1, 1, 1);

        alineData = new QDateEdit(layoutWidget2);
        alineData->setObjectName(QString::fromUtf8("alineData"));

        gridLayout_3->addWidget(alineData, 1, 2, 1, 1);

        aprCheckData = new QLabel(layoutWidget2);
        aprCheckData->setObjectName(QString::fromUtf8("aprCheckData"));

        gridLayout_3->addWidget(aprCheckData, 1, 3, 1, 1);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        aprHelpHorario = new QLabel(layoutWidget2);
        aprHelpHorario->setObjectName(QString::fromUtf8("aprHelpHorario"));
        aprHelpHorario->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpHorario, 2, 1, 1, 1);

        alineHorario = new QTimeEdit(layoutWidget2);
        alineHorario->setObjectName(QString::fromUtf8("alineHorario"));

        gridLayout_3->addWidget(alineHorario, 2, 2, 1, 1);

        aprCheckHor = new QLabel(layoutWidget2);
        aprCheckHor->setObjectName(QString::fromUtf8("aprCheckHor"));

        gridLayout_3->addWidget(aprCheckHor, 2, 3, 1, 1);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        aprHelpPreco = new QLabel(layoutWidget2);
        aprHelpPreco->setObjectName(QString::fromUtf8("aprHelpPreco"));
        aprHelpPreco->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpPreco, 3, 1, 1, 1);

        alinePreco = new QLineEdit(layoutWidget2);
        alinePreco->setObjectName(QString::fromUtf8("alinePreco"));

        gridLayout_3->addWidget(alinePreco, 3, 2, 1, 1);

        aprCheckPreco = new QLabel(layoutWidget2);
        aprCheckPreco->setObjectName(QString::fromUtf8("aprCheckPreco"));

        gridLayout_3->addWidget(aprCheckPreco, 3, 3, 1, 1);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 4, 0, 1, 1);

        aprHelpSala = new QLabel(layoutWidget2);
        aprHelpSala->setObjectName(QString::fromUtf8("aprHelpSala"));
        aprHelpSala->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpSala, 4, 1, 1, 1);

        alineSala = new QLineEdit(layoutWidget2);
        alineSala->setObjectName(QString::fromUtf8("alineSala"));

        gridLayout_3->addWidget(alineSala, 4, 2, 1, 1);

        aprCheckSala = new QLabel(layoutWidget2);
        aprCheckSala->setObjectName(QString::fromUtf8("aprCheckSala"));

        gridLayout_3->addWidget(aprCheckSala, 4, 3, 1, 1);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 5, 0, 1, 1);

        aprHelpDisp = new QLabel(layoutWidget2);
        aprHelpDisp->setObjectName(QString::fromUtf8("aprHelpDisp"));
        aprHelpDisp->setMinimumSize(QSize(30, 30));

        gridLayout_3->addWidget(aprHelpDisp, 5, 1, 1, 1);

        alineDisponibilidade = new QLineEdit(layoutWidget2);
        alineDisponibilidade->setObjectName(QString::fromUtf8("alineDisponibilidade"));

        gridLayout_3->addWidget(alineDisponibilidade, 5, 2, 1, 1);

        aprCheckDisp = new QLabel(layoutWidget2);
        aprCheckDisp->setObjectName(QString::fromUtf8("aprCheckDisp"));

        gridLayout_3->addWidget(aprCheckDisp, 5, 3, 1, 1);

        labelCreated = new QLabel(page_4);
        labelCreated->setObjectName(QString::fromUtf8("labelCreated"));
        labelCreated->setGeometry(QRect(230, 360, 441, 20));
        buttonHome = new QPushButton(page_4);
        buttonHome->setObjectName(QString::fromUtf8("buttonHome"));
        buttonHome->setGeometry(QRect(470, 320, 89, 25));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        tableApresentacao = new QTableWidget(page_5);
        if (tableApresentacao->columnCount() < 6)
            tableApresentacao->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableApresentacao->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        tableApresentacao->setObjectName(QString::fromUtf8("tableApresentacao"));
        tableApresentacao->setGeometry(QRect(80, 30, 681, 331));
        tableApresentacao->horizontalHeader()->setDefaultSectionSize(112);
        tituloApresentacao = new QLabel(page_5);
        tituloApresentacao->setObjectName(QString::fromUtf8("tituloApresentacao"));
        tituloApresentacao->setGeometry(QRect(300, 0, 111, 20));
        btnMenu3 = new QPushButton(page_5);
        btnMenu3->setObjectName(QString::fromUtf8("btnMenu3"));
        btnMenu3->setGeometry(QRect(660, 370, 89, 25));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        tableMeusEventos = new QTableWidget(page_6);
        if (tableMeusEventos->columnCount() < 8)
            tableMeusEventos->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableMeusEventos->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        tableMeusEventos->setObjectName(QString::fromUtf8("tableMeusEventos"));
        tableMeusEventos->setGeometry(QRect(40, 30, 721, 341));
        tableMeusEventos->horizontalHeader()->setDefaultSectionSize(90);
        label_18 = new QLabel(page_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(330, 0, 101, 17));
        btnVoltar = new QPushButton(page_6);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(660, 390, 89, 25));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_17 = new QLabel(page_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(340, 80, 111, 17));
        btnEditar = new QPushButton(page_7);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setGeometry(QRect(430, 290, 89, 25));
        pushButton_3 = new QPushButton(page_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 290, 89, 25));
        layoutWidget3 = new QWidget(page_7);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(260, 130, 269, 151));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        labelEditNome = new QLabel(layoutWidget3);
        labelEditNome->setObjectName(QString::fromUtf8("labelEditNome"));

        gridLayout_4->addWidget(labelEditNome, 0, 0, 1, 1);

        editHelpNome = new QLabel(layoutWidget3);
        editHelpNome->setObjectName(QString::fromUtf8("editHelpNome"));
        editHelpNome->setMinimumSize(QSize(20, 20));

        gridLayout_4->addWidget(editHelpNome, 0, 1, 1, 1);

        editLineNome = new QLineEdit(layoutWidget3);
        editLineNome->setObjectName(QString::fromUtf8("editLineNome"));

        gridLayout_4->addWidget(editLineNome, 0, 2, 1, 1);

        editCheckNome = new QLabel(layoutWidget3);
        editCheckNome->setObjectName(QString::fromUtf8("editCheckNome"));

        gridLayout_4->addWidget(editCheckNome, 0, 3, 1, 1);

        labelEditCidade = new QLabel(layoutWidget3);
        labelEditCidade->setObjectName(QString::fromUtf8("labelEditCidade"));

        gridLayout_4->addWidget(labelEditCidade, 1, 0, 1, 1);

        editHelpCidade = new QLabel(layoutWidget3);
        editHelpCidade->setObjectName(QString::fromUtf8("editHelpCidade"));
        editHelpCidade->setMinimumSize(QSize(20, 20));

        gridLayout_4->addWidget(editHelpCidade, 1, 1, 1, 1);

        editLineCid = new QLineEdit(layoutWidget3);
        editLineCid->setObjectName(QString::fromUtf8("editLineCid"));

        gridLayout_4->addWidget(editLineCid, 1, 2, 1, 1);

        editCheckCidade = new QLabel(layoutWidget3);
        editCheckCidade->setObjectName(QString::fromUtf8("editCheckCidade"));

        gridLayout_4->addWidget(editCheckCidade, 1, 3, 1, 1);

        labelEditCidade_2 = new QLabel(layoutWidget3);
        labelEditCidade_2->setObjectName(QString::fromUtf8("labelEditCidade_2"));

        gridLayout_4->addWidget(labelEditCidade_2, 2, 0, 1, 1);

        editHelpEstado = new QLabel(layoutWidget3);
        editHelpEstado->setObjectName(QString::fromUtf8("editHelpEstado"));
        editHelpEstado->setMinimumSize(QSize(20, 20));

        gridLayout_4->addWidget(editHelpEstado, 2, 1, 1, 1);

        editLineEstado = new QLineEdit(layoutWidget3);
        editLineEstado->setObjectName(QString::fromUtf8("editLineEstado"));

        gridLayout_4->addWidget(editLineEstado, 2, 2, 1, 1);

        editCheckEstado = new QLabel(layoutWidget3);
        editCheckEstado->setObjectName(QString::fromUtf8("editCheckEstado"));

        gridLayout_4->addWidget(editCheckEstado, 2, 3, 1, 1);

        labelEditClasse = new QLabel(layoutWidget3);
        labelEditClasse->setObjectName(QString::fromUtf8("labelEditClasse"));

        gridLayout_4->addWidget(labelEditClasse, 3, 0, 1, 1);

        editHelpClasse = new QLabel(layoutWidget3);
        editHelpClasse->setObjectName(QString::fromUtf8("editHelpClasse"));
        editHelpClasse->setMinimumSize(QSize(20, 20));

        gridLayout_4->addWidget(editHelpClasse, 3, 1, 1, 1);

        editLineClasse = new QLineEdit(layoutWidget3);
        editLineClasse->setObjectName(QString::fromUtf8("editLineClasse"));

        gridLayout_4->addWidget(editLineClasse, 3, 2, 1, 1);

        editCheckClasse = new QLabel(layoutWidget3);
        editCheckClasse->setObjectName(QString::fromUtf8("editCheckClasse"));

        gridLayout_4->addWidget(editCheckClasse, 3, 3, 1, 1);

        labelEditFaixa = new QLabel(layoutWidget3);
        labelEditFaixa->setObjectName(QString::fromUtf8("labelEditFaixa"));

        gridLayout_4->addWidget(labelEditFaixa, 4, 0, 1, 1);

        editHelpFaixa = new QLabel(layoutWidget3);
        editHelpFaixa->setObjectName(QString::fromUtf8("editHelpFaixa"));
        editHelpFaixa->setMinimumSize(QSize(20, 20));

        gridLayout_4->addWidget(editHelpFaixa, 4, 1, 1, 1);

        editLineFaixa = new QLineEdit(layoutWidget3);
        editLineFaixa->setObjectName(QString::fromUtf8("editLineFaixa"));

        gridLayout_4->addWidget(editLineFaixa, 4, 2, 1, 1);

        editCheckFaixa = new QLabel(layoutWidget3);
        editCheckFaixa->setObjectName(QString::fromUtf8("editCheckFaixa"));

        gridLayout_4->addWidget(editCheckFaixa, 4, 3, 1, 1);

        stackedWidget->addWidget(page_7);
        viewEventos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewEventos);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 22));
        viewEventos->setMenuBar(menubar);
        statusbar = new QStatusBar(viewEventos);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        viewEventos->setStatusBar(statusbar);

        retranslateUi(viewEventos);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(viewEventos);
    } // setupUi

    void retranslateUi(QMainWindow *viewEventos)
    {
        viewEventos->setWindowTitle(QCoreApplication::translate("viewEventos", "Switch Dreams", nullptr));
        btnHome->setText(QCoreApplication::translate("viewEventos", "Home", nullptr));
        label->setText(QCoreApplication::translate("viewEventos", "Menu de Eventos", nullptr));
        btnCriar->setText(QCoreApplication::translate("viewEventos", "Criar", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("viewEventos", "Pesquisar", nullptr));
        btnMeusEventos->setText(QCoreApplication::translate("viewEventos", "Meus Eventos", nullptr));
        label_2->setText(QCoreApplication::translate("viewEventos", "Pesquisa de Evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableEventos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("viewEventos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableEventos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("viewEventos", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableEventos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("viewEventos", "Cidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableEventos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("viewEventos", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableEventos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("viewEventos", "Classe", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableEventos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("viewEventos", "Faixa Et\303\241ria", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableEventos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("viewEventos", "Apresenta\303\247\303\265es", nullptr));
        labelEstado->setText(QCoreApplication::translate("viewEventos", "Estado", nullptr));
        btnPesquisarReal->setText(QCoreApplication::translate("viewEventos", "Pesquisar", nullptr));
        dateFim->setDisplayFormat(QCoreApplication::translate("viewEventos", "dd/MM/yy", nullptr));
        labelCidade->setText(QCoreApplication::translate("viewEventos", "Cidade", nullptr));
        labelDateInicio->setText(QCoreApplication::translate("viewEventos", "Data In\303\255cio", nullptr));
        dateInicio->setDisplayFormat(QCoreApplication::translate("viewEventos", "dd/MM/yy", nullptr));
        labelDateFim->setText(QCoreApplication::translate("viewEventos", "Data Fim", nullptr));
        btnHome_2->setText(QCoreApplication::translate("viewEventos", "Home", nullptr));
        btnCriarEvento->setText(QCoreApplication::translate("viewEventos", "Criar", nullptr));
        label_9->setText(QCoreApplication::translate("viewEventos", "Criar Eventos", nullptr));
        label_3->setText(QCoreApplication::translate("viewEventos", "C\303\263digo", nullptr));
        helpCodigo->setText(QString());
        checkCodigo->setText(QString());
        label_4->setText(QCoreApplication::translate("viewEventos", "Nome", nullptr));
        helpNome->setText(QString());
        checkNome->setText(QString());
        label_5->setText(QCoreApplication::translate("viewEventos", "Cidade", nullptr));
        helpCidade->setText(QString());
        checkCidade->setText(QString());
        label_6->setText(QCoreApplication::translate("viewEventos", "Estado", nullptr));
        helpEstado->setText(QString());
        checkEstado->setText(QString());
        label_7->setText(QCoreApplication::translate("viewEventos", "Classe", nullptr));
        helpClasse->setText(QString());
        checkClasse->setText(QString());
        label_8->setText(QCoreApplication::translate("viewEventos", "Faixa Etaria", nullptr));
        helpFaixa->setText(QString());
        checkFaixa->setText(QString());
        pushButton->setText(QCoreApplication::translate("viewEventos", "Menu", nullptr));
        label_10->setText(QCoreApplication::translate("viewEventos", "Adicionar Apresenta\303\247\303\243o", nullptr));
        btnAdicionarApr->setText(QCoreApplication::translate("viewEventos", "Adicionar +", nullptr));
        btnConcluirApr->setText(QCoreApplication::translate("viewEventos", "Concluir", nullptr));
        label_11->setText(QCoreApplication::translate("viewEventos", "C\303\263digo", nullptr));
        aprHelpCodigo->setText(QString());
        aprCheckCod->setText(QString());
        label_12->setText(QCoreApplication::translate("viewEventos", "Data", nullptr));
        aprHelpData->setText(QString());
        alineData->setDisplayFormat(QCoreApplication::translate("viewEventos", "dd/MM/yy", nullptr));
        aprCheckData->setText(QString());
        label_13->setText(QCoreApplication::translate("viewEventos", "Hor\303\241rio", nullptr));
        aprHelpHorario->setText(QString());
        aprCheckHor->setText(QString());
        label_14->setText(QCoreApplication::translate("viewEventos", "Pre\303\247o", nullptr));
        aprHelpPreco->setText(QString());
        aprCheckPreco->setText(QString());
        label_15->setText(QCoreApplication::translate("viewEventos", "Sala", nullptr));
        aprHelpSala->setText(QString());
        aprCheckSala->setText(QString());
        label_16->setText(QCoreApplication::translate("viewEventos", "Disponibilidade", nullptr));
        aprHelpDisp->setText(QString());
        aprCheckDisp->setText(QString());
        labelCreated->setText(QCoreApplication::translate("viewEventos", "msg de cria\303\247\303\243o de evento e apresenta\303\247\303\243o", nullptr));
        buttonHome->setText(QCoreApplication::translate("viewEventos", "Menu", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableApresentacao->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("viewEventos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableApresentacao->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("viewEventos", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableApresentacao->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("viewEventos", "Hor\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableApresentacao->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("viewEventos", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableApresentacao->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("viewEventos", "Sala", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableApresentacao->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("viewEventos", "Disponibilidade", nullptr));
        tituloApresentacao->setText(QCoreApplication::translate("viewEventos", "Apresenta\303\247\303\265es", nullptr));
        btnMenu3->setText(QCoreApplication::translate("viewEventos", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableMeusEventos->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("viewEventos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableMeusEventos->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("viewEventos", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableMeusEventos->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("viewEventos", "Cidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableMeusEventos->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("viewEventos", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableMeusEventos->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("viewEventos", "Classe", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableMeusEventos->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("viewEventos", "F.Et\303\241ria", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableMeusEventos->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("viewEventos", "Editar", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableMeusEventos->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("viewEventos", "Remover", nullptr));
        label_18->setText(QCoreApplication::translate("viewEventos", "Meus Eventos", nullptr));
        btnVoltar->setText(QCoreApplication::translate("viewEventos", "Voltar", nullptr));
        label_17->setText(QCoreApplication::translate("viewEventos", "Editar Eventos", nullptr));
        btnEditar->setText(QCoreApplication::translate("viewEventos", "Editar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("viewEventos", "Voltar", nullptr));
        labelEditNome->setText(QCoreApplication::translate("viewEventos", "Nome", nullptr));
        editHelpNome->setText(QString());
        editCheckNome->setText(QString());
        labelEditCidade->setText(QCoreApplication::translate("viewEventos", "Cidade", nullptr));
        editHelpCidade->setText(QString());
        editCheckCidade->setText(QString());
        labelEditCidade_2->setText(QCoreApplication::translate("viewEventos", "Estado", nullptr));
        editHelpEstado->setText(QString());
        editCheckEstado->setText(QString());
        labelEditClasse->setText(QCoreApplication::translate("viewEventos", "Classe", nullptr));
        editHelpClasse->setText(QString());
        editCheckClasse->setText(QString());
        labelEditFaixa->setText(QCoreApplication::translate("viewEventos", "Faixa Et\303\241ria", nullptr));
        editHelpFaixa->setText(QString());
        editCheckFaixa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewEventos: public Ui_viewEventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEVENTOS_H

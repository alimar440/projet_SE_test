#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fifo.h"
#include "tourniquet.h"
#include "priorite_sans_requisition.h"
#include "pcte.h"
#include "pcter.h"
#include "Priorite_avec_requisition.h"

/************************************/

#include <QVBoxLayout>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

#include "ui_mainwindow.h"

//using namespace QtCharts;

/*************************************/



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Fifo f ;
    Pcte P ;
    Tourniquet T ;
    PrioriteSansRequisition Pr ;
    PrioriteAvecRequisition PrR ;
    Pcter PR ;



    int taille1 = 5 ;
    int taille2 = 4 ;
    int taille3 = 4 ;
    int taille4 = 4 ;

    int tab1[5] = {2,3,1,2,2};
    int tab2[4] = {4,1,2,1};
    int tab3[4] = {1, 1, 3,2};
    int tab4[5] = {2,2,1,5};

    Processus p1;
    Processus p2;
    Processus p3;
    Processus p4;

    int quant ;

public:
    MainWindow(QWidget *parent = nullptr);
    void viderTables(QTableWidget *table1, QTableWidget *table2, QTableWidget *table3, QTableWidget *table4) ;
    void calculTemps() ;
    void tempsProcess( QTableWidget* tab ,  Processus **tabProcessus ,int col) ;


    void prepareFIFO() ;
    void preparePCTE() ;
    void preparePRIOITE() ;
    void prepareTOUNIQUET() ;
    void preparePRIORITEPREAMPTIVE();
    void preparePCTEPREAMPTIVE();

    /*********************************/
    void initHistogram(QVector<QString> algorithmes, QVector<double> tempsAttente, QVector<double> tempsReponse);
    /*********************************/

    ~MainWindow();


private slots:

    void on_textEdit_7_cursorPositionChanged();

    void on_pushButton_5_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_16_clicked();

    void on_label_linkActivated(const QString &link);

    void on_commandLinkButton_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();

    void on_action1_triggered();

    void on_action2_triggered();

    void on_action3_triggered();

    void on_action4_triggered();

    /***********************************/

    void on_action1_0_triggered();

    void on_action1_1_triggered();

    void on_action1_2_triggered();

    void on_action1_3_triggered();

    /***********************************/

    void on_action2_0_triggered();

    void on_action2_1_triggered();

    void on_action2_2_triggered();

    void on_action2_3_triggered();

    /***********************************/

    void on_action3_0_triggered();

    void on_action3_1_triggered();

    void on_action3_2_triggered();

    void on_action3_3_triggered();

    /***********************************/

    void on_action4_0_triggered();

    void on_action4_1_triggered();

    void on_action4_2_triggered();

    void on_action4_3_triggered();

    /**********************************/

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_widget_8_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_23_clicked();

    void on_commandLinkButton_2_clicked();

    void on_action3_5_triggered();

    void on_action1_4_triggered();

    void on_action2_4_triggered();

    void on_action3_4_triggered();

    void on_action4_4_triggered();

    void on_action1_5_triggered();

    void on_action2_5_triggered();

    void on_action4_5_triggered();

    void on_action1_6_triggered();

    void on_action2_6_triggered();

    void on_action3_6_triggered();

    void on_action4_6_triggered();

    void on_action1_7_triggered();

    void on_action2_7_triggered();

    void on_action3_7_triggered();

    void on_action4_7_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

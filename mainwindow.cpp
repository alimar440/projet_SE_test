#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>
#include <QThread>
#include <QApplication>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), p1(5, 0), p2(2, 0), p3(3, 0), p4(7, 0)
{


    ui->setupUi(this);

    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_2->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_3->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_4->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_5->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_6->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_7->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_8->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_9->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_10->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_11->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_12->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_13->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_14->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_15->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_16->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_18->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_19->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_20->setColumnWidth(col, 30);
    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_21->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_22->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_23->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_24->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 34; ++col) {
        ui->tableWidget_25->setColumnWidth(col, 30);

    }
    for (int col = 0; col <= 8; ++col) {
        ui->tableWidget_17->setColumnWidth(col, 100);

    }
    for (int col = 0; col <= 8; ++col) {
        ui->tableWidget_17->setRowHeight(col, 80);

    }

    quant = 3 ;

    ui->tableWidget->setFixedHeight(125);
    ui->tableWidget_2->setFixedHeight(125);
    ui->tableWidget_3->setFixedHeight(125);
    ui->tableWidget_4->setFixedHeight(125);
    ui->tableWidget_5->setFixedHeight(125);
    ui->tableWidget_6->setFixedHeight(125);
    ui->tableWidget_7->setFixedHeight(125);
    ui->tableWidget_8->setFixedHeight(125);
    ui->tableWidget_9->setFixedHeight(125);
    ui->tableWidget_10->setFixedHeight(125);
    ui->tableWidget_11->setFixedHeight(125);
    ui->tableWidget_12->setFixedHeight(125);
    ui->tableWidget_13->setFixedHeight(125);
    ui->tableWidget_14->setFixedHeight(125);
    ui->tableWidget_15->setFixedHeight(125);
    ui->tableWidget_16->setFixedHeight(125);
    ui->tableWidget_18->setFixedHeight(125);
    ui->tableWidget_19->setFixedHeight(125);
    ui->tableWidget_20->setFixedHeight(125);
    ui->tableWidget_21->setFixedHeight(125);
    ui->tableWidget_22->setFixedHeight(125);
    ui->tableWidget_23->setFixedHeight(125);
    ui->tableWidget_24->setFixedHeight(125);
    ui->tableWidget_25->setFixedHeight(125);

    ui->tableWidget_17->setFixedHeight(600);
    ui->tableWidget_17->setFixedWidth(950);

    //span
    ui->tableWidget_17->setSpan(0,0,1,2);
    ui->tableWidget_17->setSpan(0,2,1,2);
    ui->tableWidget_17->setSpan(0,4,1,2);
    ui->tableWidget_17->setSpan(0,6,1,2);
    ui->tableWidget_17->setSpan(0,8,1,2);
    ui->tableWidget_17->setSpan(0,10,1,2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_7_cursorPositionChanged()
{

}


void MainWindow::on_pushButton_5_clicked()
{
    preparePCTE() ;

    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;


    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_14_clicked()
{
    prepareFIFO();



    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4 , 0) ;


}


void MainWindow::on_pushButton_7_clicked()
{
    preparePRIOITE() ;



    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_8_clicked()
{
    prepareTOUNIQUET()  ;

    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant) ;


    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_9_clicked()
{
    prepareFIFO() ;

    ui->stackedWidget->setCurrentIndex(0);

    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4 , 0 ) ;


}


void MainWindow::on_pushButton_15_clicked()
{

    preparePCTE() ;



    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_10_clicked()
{
    preparePRIOITE();

    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;


    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_11_clicked()
{
    prepareTOUNIQUET()  ;


    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant ) ;

    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_6_clicked()
{
    prepareFIFO() ;


    ui->stackedWidget->setCurrentIndex(0);

    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4 , 0 ) ;


}


void MainWindow::on_pushButton_12_clicked()
{
    preparePCTE() ;



    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_13_clicked()
{

    preparePRIOITE();



    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_4_clicked()
{
    prepareFIFO() ;

    ui->stackedWidget->setCurrentIndex(0);

    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4, 0 ) ;


}


void MainWindow::on_pushButton_3_clicked()
{
    preparePCTE() ;


    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    preparePRIOITE();



    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_clicked()
{
    prepareTOUNIQUET() ;

    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant ) ;


    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_16_clicked()
{
    prepareTOUNIQUET() ;

    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant) ;


    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::viderTables(QTableWidget *table1, QTableWidget *table2, QTableWidget *table3, QTableWidget *table4)
{
    for (QTableWidget *table : {table1, table2, table3, table4}) {
        int rowCount = table->rowCount();
        int colCount = table->columnCount();

        for (int col = 0; col < colCount; ++col) {
                table->setItem(0, col, new QTableWidgetItem(""));
                table->setItem(1, col, new QTableWidgetItem(""));
                table->setItem(2, col, new QTableWidgetItem(""));
            }


        // table->setRowCount(0);
        // table->setColumnCount(0);
    }
}



void MainWindow::on_label_linkActivated(const QString &link)
{

}


void MainWindow::on_commandLinkButton_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_18_clicked()
{
    calculTemps() ;
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_19_clicked()
{
    calculTemps() ;
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_20_clicked()
{
    calculTemps() ;
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_17_clicked()
{
    calculTemps() ;
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::calculTemps(){

    QString X = "X" ;
    prepareFIFO() ;

    f.executionFIFO1(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4, 1 ) ;


    Processus** tabFifo = f.getTabProcess() ;

    if(tabFifo == nullptr ) {
        qDebug()<<"tabFifo est vide" ;
    }

    for(int i = 0 ; i<4 ; i++){
        for(int col = 0 ; col< 34 ; col++){
            switch(tabFifo[i]->getPid()){
            case 1 :
                if(ui->tableWidget->item(1, col )->text() == X ){
                    tabFifo[i]->setTempsAttente(tabFifo[i]->getTempsAttente() + 1) ;

                }

                if(ui->tableWidget->item(1, col )->text() == X || ui->tableWidget->item(2, col )->text() == X || ui->tableWidget->item(0, col )->text() == X){
                    tabFifo[i]->setTempsReponse(tabFifo[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 2 :
                if(ui->tableWidget_2->item(1, col )->text() == X ){
                    tabFifo[i]->setTempsAttente(tabFifo[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_2->item(1, col )->text() == X || ui->tableWidget_2->item(2, col )->text() == X || ui->tableWidget_2->item(0, col )->text() == X){
                    tabFifo[i]->setTempsReponse(tabFifo[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 3 :
                if(ui->tableWidget_3->item(1, col )->text() == X ){   
                    tabFifo[i]->setTempsAttente(tabFifo[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_3->item(1, col )->text() == X || ui->tableWidget_3->item(2, col )->text() == X || ui->tableWidget_3->item(0, col )->text() == X){
                    tabFifo[i]->setTempsReponse(tabFifo[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 4 :
                if(ui->tableWidget_4->item(1, col )->text() == X){
                    tabFifo[i]->setTempsAttente(tabFifo[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_4->item(1, col )->text() == X || ui->tableWidget_4->item(2, col )->text() == X || ui->tableWidget_4->item(0, col )->text() == X){
                    tabFifo[i]->setTempsReponse(tabFifo[i]->getTempsReponse() + 1) ;

                }
                break ;
            }
        }
    }

    for(int i = 0 ; i<4 ; i++){
        tabFifo[i]->setTempsReponse(tabFifo[i]->getTempsReponse() + tabFifo[i]->getDateArrivee()) ;
    }
    tempsProcess(ui->tableWidget_17 , tabFifo , 1) ;

    qDebug()<< "-------------------------------------------------";
    qDebug()<<"FIFO"<< tabFifo[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"FIFO"<< tabFifo[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"FIFO"<< tabFifo[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"FIFO"<< tabFifo[3]->getTempsReponse()<<"\n" ;


    qDebug()<< "--------------------fifo-----------------------------";



    //--------------------------------------------------------------------------------------------

    preparePCTE() ;

    P.executionPCTE1(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    Processus** tabPCTE = P.getTabProcess() ;

    if(tabPCTE == nullptr ) {
        qDebug()<<"tabPCTE est vide" ;
    }



    for(int i = 0 ; i<4 ; i++){
        for(int col = 0 ; col< 34 ; col++){
            switch(tabPCTE[i]->getPid()){
                case 1 :

                    if(ui->tableWidget_5->item(1, col )->text() == X ){
                        tabPCTE[i]->setTempsAttente(tabPCTE[i]->getTempsAttente() + 1) ;

                    }
                    if(ui->tableWidget_5->item(1, col )->text() == X || ui->tableWidget_5->item(2, col )->text() == X || ui->tableWidget_5->item(0, col )->text() == X){
                        tabPCTE[i]->setTempsReponse(tabPCTE[i]->getTempsReponse() + 1) ;

                    }
                    break ;
                case 2 :
                    if(ui->tableWidget_6->item(1, col )->text() == X ){
                        tabPCTE[i]->setTempsAttente(tabPCTE[i]->getTempsAttente() + 1) ;

                    }
                    if(ui->tableWidget_6->item(1, col )->text() == X || ui->tableWidget_6->item(2, col )->text() == X || ui->tableWidget_6->item(0, col )->text() == X){
                        tabPCTE[i]->setTempsReponse(tabPCTE[i]->getTempsReponse() + 1) ;

                    }
                    break ;
                case 3 :
                    if(ui->tableWidget_7->item(1, col )->text() == X){
                        tabPCTE[i]->setTempsAttente(tabPCTE[i]->getTempsAttente() + 1) ;

                    }
                    if(ui->tableWidget_7->item(1, col )->text() == X || ui->tableWidget_7->item(2, col )->text() == X || ui->tableWidget_7->item(0, col )->text() == X){
                        tabPCTE[i]->setTempsReponse(tabPCTE[i]->getTempsReponse() + 1) ;

                    }
                    break ;
                case 4 :
                    if(ui->tableWidget_8->item(1, col )->text() == X ){
                        tabPCTE[i]->setTempsAttente(tabPCTE[i]->getTempsAttente() + 1) ;

                    }
                    if(ui->tableWidget_8->item(1, col )->text() == X || ui->tableWidget_8->item(2, col )->text() == X || ui->tableWidget_8->item(0, col )->text() == X){
                        tabPCTE[i]->setTempsReponse(tabPCTE[i]->getTempsReponse() + 1) ;

                    }
                    break ;
                }
        }
    }

    for(int i = 0 ; i<4 ; i++){
        tabPCTE[i]->setTempsReponse(tabPCTE[i]->getTempsReponse() + tabPCTE[i]->getDateArrivee()) ;
    }

   tempsProcess(ui->tableWidget_17 , tabPCTE ,3) ;

    qDebug()<< "-------------------------------------------------";
    qDebug()<<"tabPCTE"<< tabPCTE[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPCTE"<< tabPCTE[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPCTE"<< tabPCTE[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPCTE"<< tabPCTE[3]->getTempsReponse()<<"\n" ;


    qDebug()<< "--------------------PCTE-----------------------------";



    //----------------------------------------------------------------------------------------------

    preparePRIOITE() ;

    Pr.executionPrioriteSansRequisition1(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

    Processus** tabPRIORITE= Pr.getTabProcess() ;

    if(tabPRIORITE == nullptr ) {
        qDebug()<<"tabPRIORITE est vide" ;
    }

    for(int i = 0 ; i<4 ; i++){
        for(int col = 0 ; col< 34 ; col++){
            switch(tabPRIORITE[i]->getPid()){
            case 1 :
                if(ui->tableWidget_9->item(1, col )->text() == X){
                    tabPRIORITE[i]->setTempsAttente(tabPRIORITE[i]->getTempsAttente() + 1) ;

                }

                if(ui->tableWidget_9->item(1, col )->text() == X || ui->tableWidget_9->item(2, col )->text() == X || ui->tableWidget_9->item(0, col )->text() == X){
                    tabPRIORITE[i]->setTempsReponse(tabPRIORITE[i]->getTempsReponse() + 1) ;

                }

                break ;
            case 2 :
                if(ui->tableWidget_10->item(1, col )->text() == X){
                    tabPRIORITE[i]->setTempsAttente(tabPRIORITE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_10->item(1, col )->text() == X || ui->tableWidget_10->item(2, col )->text() == X || ui->tableWidget_10->item(0, col )->text() == X){
                    tabPRIORITE[i]->setTempsReponse(tabPRIORITE[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 3 :
                if(ui->tableWidget_11->item(1, col )->text() == X ){
                    tabPRIORITE[i]->setTempsAttente(tabPRIORITE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_11->item(1, col )->text() == X || ui->tableWidget_11->item(2, col )->text() == X || ui->tableWidget_11->item(0, col )->text() == X){
                    tabPRIORITE[i]->setTempsReponse(tabPRIORITE[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 4 :
                if(ui->tableWidget_12->item(1, col )->text() == X ){
                    tabPRIORITE[i]->setTempsAttente(tabPRIORITE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_12->item(1, col )->text() == X || ui->tableWidget_12->item(2, col )->text() == X || ui->tableWidget_12->item(0, col )->text() == X){
                    tabPRIORITE[i]->setTempsReponse(tabPRIORITE[i]->getTempsReponse() + 1) ;

                }
                break ;
            }
        }
    }

    for(int i = 0 ; i<4 ; i++){
        tabPRIORITE[i]->setTempsReponse(tabPRIORITE[i]->getTempsReponse() + tabPRIORITE[i]->getDateArrivee()) ;
    }
    tempsProcess(ui->tableWidget_17 , tabPRIORITE , 7 ) ;

    qDebug()<< "-------------------------------------------------";
    qDebug()<<"tabPRIORITE"<< tabPRIORITE[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITE"<< tabPRIORITE[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITE"<< tabPRIORITE[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITE"<< tabPRIORITE[3]->getTempsReponse()<<"\n" ;

    qDebug()<< "--------------------PRIORITE-----------------------------";


    //----------------------------------------------------------------------------------------------------------

    prepareTOUNIQUET() ;

    T.executionTourniquet1(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant ) ;

    Processus** tabTOURNIQUET= T.getTabProcess() ;

    if(tabTOURNIQUET == nullptr ) {
        qDebug()<<"tabTourniquet est vide" ;
    }


    for(int i = 0 ; i<4 ; i++){

        for(int col = 0 ; col< 34 ; col++){

            switch(tabTOURNIQUET[i]->getPid()){

            case 1 :

                if(ui->tableWidget_13->item(1, col )->text() == X ){
                    tabTOURNIQUET[i]->setTempsAttente(tabTOURNIQUET[i]->getTempsAttente() + 1) ;

                }

                if(ui->tableWidget_13->item(1, col )->text() == X || ui->tableWidget_13->item(2, col )->text() == X || ui->tableWidget_13->item(0, col )->text() == X){
                    tabTOURNIQUET[i]->setTempsReponse(tabTOURNIQUET[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 2 :
                if(ui->tableWidget_14->item(1, col )->text() == X ){
                    tabTOURNIQUET[i]->setTempsAttente(tabTOURNIQUET[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_14->item(1, col )->text() == X || ui->tableWidget_14->item(2, col )->text() == X || ui->tableWidget_14->item(0, col )->text() == X){
                    tabTOURNIQUET[i]->setTempsReponse(tabTOURNIQUET[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 3 :
                if(ui->tableWidget_15->item(1, col )->text() == X){
                    tabTOURNIQUET[i]->setTempsAttente(tabTOURNIQUET[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_15->item(1, col )->text() == X || ui->tableWidget_15->item(2, col )->text() == X || ui->tableWidget_15->item(0, col )->text() == X){
                    tabTOURNIQUET[i]->setTempsReponse(tabTOURNIQUET[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 4 :
                if(ui->tableWidget_16->item(1, col )->text() == X ){
                    tabPRIORITE[i]->setTempsAttente(tabPRIORITE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_16->item(1, col )->text() == X || ui->tableWidget_16->item(2, col )->text() == X || ui->tableWidget_16->item(0, col )->text() == X){
                    tabTOURNIQUET[i]->setTempsReponse(tabTOURNIQUET[i]->getTempsReponse() + 1) ;

                }
                break ;
            }
        }

    }
    for(int i = 0 ; i<4 ; i++){
        tabTOURNIQUET[i]->setTempsReponse(tabTOURNIQUET[i]->getTempsReponse() + tabTOURNIQUET[i]->getDateArrivee()) ;
    }
    tempsProcess(ui->tableWidget_17 , tabTOURNIQUET , 5 ) ;

    qDebug()<< "--------------------TOURNIQUET-----------------------------";




    qDebug()<< "-------------------------------------------------";
    qDebug()<<"tabTOURNIQUET"<< tabTOURNIQUET[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabTOURNIQUET"<< tabTOURNIQUET[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabTOURNIQUET"<< tabTOURNIQUET[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabTOURNIQUET"<< tabTOURNIQUET[3]->getTempsReponse()<<"\n" ;

    //----------------------------------------------------------------------------------------------

    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition1(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    Processus** tabPRIORITEPREAMTIVE= Pr.getTabProcess() ;

    if(tabPRIORITEPREAMTIVE != nullptr ) {
        qDebug()<<"tabPRIORITEPREAMTIVE n'est pas vide" ;
    }

    for(int i = 0 ; i<4 ; i++){
        for(int col = 0 ; col< 34 ; col++){

            switch(tabPRIORITEPREAMTIVE[i]->getPid()){
            case 1 :

                if(ui->tableWidget_18->item(1, col )->text() == X)
                qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST a-----------------------------";

                if(ui->tableWidget_18->item(1, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsAttente(tabPRIORITEPREAMTIVE[i]->getTempsAttente() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 1-----------------------------";

                }

                if(ui->tableWidget_18->item(1, col )->text() == X || ui->tableWidget_18->item(2, col )->text() == X || ui->tableWidget_18->item(0, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsReponse(tabPRIORITEPREAMTIVE[i]->getTempsReponse() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 0 1-----------------------------";

                }


                break ;
            case 2 :
                if(ui->tableWidget_19->item(1, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsAttente(tabPRIORITEPREAMTIVE[i]->getTempsAttente() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 2-----------------------------";

                }
                if(ui->tableWidget_19->item(1, col )->text() == X || ui->tableWidget_19->item(2, col )->text() == X || ui->tableWidget_19->item(0, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsReponse(tabPRIORITEPREAMTIVE[i]->getTempsReponse() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 0 2-----------------------------";

                }
                break ;
            case 3 :
                if(ui->tableWidget_20->item(1, col )->text() == X ){
                    tabPRIORITEPREAMTIVE[i]->setTempsAttente(tabPRIORITEPREAMTIVE[i]->getTempsAttente() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 3-----------------------------";

                }
                if(ui->tableWidget_20->item(1, col )->text() == X || ui->tableWidget_20->item(2, col )->text() == X || ui->tableWidget_20->item(0, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsReponse(tabPRIORITEPREAMTIVE[i]->getTempsReponse() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 0 3-----------------------------";

                }
                break ;
            case 4 :
                if(ui->tableWidget_21->item(1, col )->text() == X ){
                    tabPRIORITEPREAMTIVE[i]->setTempsAttente(tabPRIORITEPREAMTIVE[i]->getTempsAttente() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 4-----------------------------";

                }
                if(ui->tableWidget_21->item(1, col )->text() == X || ui->tableWidget_21->item(2, col )->text() == X || ui->tableWidget_21->item(0, col )->text() == X){
                    tabPRIORITEPREAMTIVE[i]->setTempsReponse(tabPRIORITEPREAMTIVE[i]->getTempsReponse() + 1) ;
                    qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST 0 4-----------------------------";

                }
                break ;
            }

        }
        qDebug()<< "-------------------- PRIORITE PREAMTIVE TEST A-----------------------------";

    }

    for(int i = 0 ; i<4 ; i++){
        tabPRIORITEPREAMTIVE[i]->setTempsReponse(tabPRIORITEPREAMTIVE[i]->getTempsReponse() + tabPRIORITEPREAMTIVE[i]->getDateArrivee()) ;
    }
    tempsProcess(ui->tableWidget_17 , tabPRIORITEPREAMTIVE , 9 ) ;

    qDebug()<< "-------------------------------------------------";
    qDebug()<<"tabPRIORITEPREAMTIVE"<< tabPRIORITEPREAMTIVE[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITEPREAMTIVE"<< tabPRIORITEPREAMTIVE[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITEPREAMTIVE"<< tabPRIORITEPREAMTIVE[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPRIORITEPREAMTIVE"<< tabPRIORITEPREAMTIVE[3]->getTempsReponse()<<"\n" ;

    qDebug()<< "-------------------- PRIORITE PREAMTIVE-----------------------------";

    //--------------------------------------------------------------------------------------------

    preparePCTEPREAMPTIVE() ;


    PR.executionPCTER1(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;

    Processus** tabPREAMPTIVE = P.getTabProcess() ;

    if(tabPCTE == nullptr ) {
        qDebug()<<"tabPREAMPTIVE est vide" ;
    }



    for(int i = 0 ; i<4 ; i++){
        for(int col = 0 ; col< 34 ; col++){
            switch(tabPREAMPTIVE[i]->getPid()){
            case 1 :

                if(ui->tableWidget_22->item(1, col )->text() == X ){
                    tabPREAMPTIVE[i]->setTempsAttente(tabPREAMPTIVE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_22->item(1, col )->text() == X || ui->tableWidget_22->item(2, col )->text() == X || ui->tableWidget_22->item(0, col )->text() == X){
                    tabPREAMPTIVE[i]->setTempsReponse(tabPREAMPTIVE[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 2 :
                if(ui->tableWidget_23->item(1, col )->text() == X ){
                    tabPREAMPTIVE[i]->setTempsAttente(tabPREAMPTIVE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_23->item(1, col )->text() == X || ui->tableWidget_23->item(2, col )->text() == X || ui->tableWidget_23->item(0, col )->text() == X){
                    tabPREAMPTIVE[i]->setTempsReponse(tabPREAMPTIVE[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 3 :
                if(ui->tableWidget_24->item(1, col )->text() == X){
                    tabPREAMPTIVE[i]->setTempsAttente(tabPREAMPTIVE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_23->item(1, col )->text() == X || ui->tableWidget_23->item(2, col )->text() == X || ui->tableWidget_23->item(0, col )->text() == X){
                    tabPREAMPTIVE[i]->setTempsReponse(tabPREAMPTIVE[i]->getTempsReponse() + 1) ;

                }
                break ;
            case 4 :
                if(ui->tableWidget_25->item(1, col )->text() == X ){
                    tabPREAMPTIVE[i]->setTempsAttente(tabPREAMPTIVE[i]->getTempsAttente() + 1) ;

                }
                if(ui->tableWidget_25->item(1, col )->text() == X || ui->tableWidget_25->item(2, col )->text() == X || ui->tableWidget_25->item(0, col )->text() == X){
                    tabPREAMPTIVE[i]->setTempsReponse(tabPREAMPTIVE[i]->getTempsReponse() + 1) ;

                }
                break ;
            }
        }
    }

    for(int i = 0 ; i<4 ; i++){
        tabPREAMPTIVE[i]->setTempsReponse(tabPREAMPTIVE[i]->getTempsReponse() + tabPREAMPTIVE[i]->getDateArrivee()) ;
    }

    tempsProcess(ui->tableWidget_17 , tabPREAMPTIVE ,11) ;

    qDebug()<< "-------------------------------------------------";
    qDebug()<<"tabPREAMPTIVE"<< tabPREAMPTIVE[0]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPREAMPTIVE"<< tabPREAMPTIVE[1]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPREAMPTIVE"<< tabPREAMPTIVE[2]->getTempsReponse()<<"\n" ;
    qDebug()<<"tabPREAMPTIVE"<< tabPREAMPTIVE[3]->getTempsReponse()<<"\n" ;


    qDebug()<< "--------------------PCTE PREAMPTIVE-----------------------------";


    for (int col = 0; col < 13; ++col) {
        double sum = 0;


        for (int row = 2; row <= 5; ++row) {
            QTableWidgetItem *item = ui->tableWidget_17->item(row, col);
            if (item) {
                sum += item->text().toDouble();
            }
        }

        double moyenne =  sum / 4;

        ui->tableWidget_17->setItem(6, col , new QTableWidgetItem("        " + QString::number(moyenne)));
    }


}

void MainWindow::tempsProcess( QTableWidget* tab , Processus **tabProcessus ,int col)
{



    int trP1 = tabProcessus[0]->getTempsReponse() ; int texP1 = tabProcessus[0]->getTempsAttente() ; int tattP1 =   tabProcessus[0]->getTempsAttente() ;
    int trP2 = tabProcessus[1]->getTempsReponse() ; int texP2 = tabProcessus[1]->getTempsAttente() ; int tattP2 =   tabProcessus[1]->getTempsAttente() ;
    int trP3 = tabProcessus[2]->getTempsReponse() ; int texP3 = tabProcessus[2]->getTempsAttente() ; int tattP3 =   tabProcessus[2]->getTempsAttente() ;
    int trP4 = tabProcessus[3]->getTempsReponse() ; int texP4 = tabProcessus[3]->getTempsAttente() ; int tattP4 =   tabProcessus[3]->getTempsAttente() ;


   tab->setItem(2, col -1, new QTableWidgetItem("        " + QString::number(trP1)));
    tab->setItem(2, col, new QTableWidgetItem("        " + QString::number(tattP1)));   //tab->setItem(2, 3, new QTableWidgetItem(QString::number(texP1)));
   tab->setItem(3,  col -1, new QTableWidgetItem("        " + QString::number(trP2)));
    tab->setItem(3, col, new QTableWidgetItem("        " + QString::number(tattP2)));   //tab->setItem(3, 3, new QTableWidgetItem(QString::number(texP2)));
   tab->setItem(4,  col -1, new QTableWidgetItem("        " + QString::number(trP3)));
    tab->setItem(4, col, new QTableWidgetItem("        " + QString::number(tattP3)));   //tab->setItem(4, 3, new QTableWidgetItem(QString::number(texP3)));
   tab->setItem(5,  col -1, new QTableWidgetItem("        " + QString::number(trP4)));
    tab->setItem(5, col, new QTableWidgetItem("        " + QString::number((tattP4))));   //tab->setItem(5, 3, new QTableWidgetItem(QString::number(texP4)));

}

void MainWindow::prepareFIFO(){
    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );


    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;

    f.ajouterProcessus(&p1) ;
    f.ajouterProcessus(&p2) ;
    f.ajouterProcessus(&p3) ;
    f.ajouterProcessus(&p4) ;
}
void MainWindow::preparePCTE() {
    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;


    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;

    P.ajouterProcessus(&p1) ;
    P.ajouterProcessus(&p2) ;
    P.ajouterProcessus(&p3) ;
    P.ajouterProcessus(&p4) ;
}
void MainWindow::preparePRIOITE() {
    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;



    Pr.ajouterProcessus(&p1) ;
    Pr.ajouterProcessus(&p2) ;
    Pr.ajouterProcessus(&p3) ;
    Pr.ajouterProcessus(&p4) ;
}
void MainWindow::prepareTOUNIQUET() {
    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;

    T.ajouterProcessus(&p1) ;
    T.ajouterProcessus(&p2) ;
    T.ajouterProcessus(&p3) ;
    T.ajouterProcessus(&p4) ;
}

void MainWindow::preparePRIORITEPREAMPTIVE()
{
    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;


    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;

    PrR.ajouterProcessus(&p1) ;
    PrR.ajouterProcessus(&p2) ;
    PrR.ajouterProcessus(&p3) ;
    PrR.ajouterProcessus(&p4) ;
}

void MainWindow::preparePCTEPREAMPTIVE(){
    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;


    p1.ajouterScenario(tab1 , taille1) ;  p1.setTempsAttente(0) ; p1.setTempsReponse(0) ;
    p2.ajouterScenario(tab2 , taille2) ;  p2.setTempsAttente(0) ; p2.setTempsReponse(0) ;
    p3.ajouterScenario(tab3 , taille3) ;  p3.setTempsAttente(0) ; p3.setTempsReponse(0) ;
    p4.ajouterScenario(tab4 , taille4) ;  p4.setTempsAttente(0) ; p4.setTempsReponse(0) ;

    PR.ajouterProcessus(&p1) ;
    PR.ajouterProcessus(&p2) ;
    PR.ajouterProcessus(&p3) ;
    PR.ajouterProcessus(&p4) ;
}


/****************************************************/

void MainWindow::initHistogram(QVector<QString> algorithmes, QVector<double> tempsAttente, QVector<double> tempsReponse)
{

    QWidget *pageHistogram = ui->stackedWidget->findChild<QWidget*>("widget_9");
   QLayout *oldLayout = pageHistogram->layout();
    if (oldLayout) {
        QLayoutItem *child;
        while ((child = oldLayout->takeAt(0)) != nullptr) {
            if (child->widget()) {
                delete child->widget();
            }
            delete child;
        }
        delete oldLayout;
    }


    QBarSet *setAttente = new QBarSet("Temps d'attente");
    QBarSet *setReponse = new QBarSet("Temps de réponse");


    for (double value : tempsAttente) {
        *setAttente << value;
    }
    for (double value : tempsReponse) {
        *setReponse << value;
    }


    setAttente->setColor(QColor("#1A1E2B"));
    setReponse->setColor(QColor("#FF7700"));


    QBarSeries *series = new QBarSeries();
    series->append(setAttente);
    series->append(setReponse);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Histogramme : Temps d'attente et de réponse");
    chart->setAnimationOptions(QChart::SeriesAnimations);


    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(algorithmes);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);


    QValueAxis *axisY = new QValueAxis();
    double maxY = std::max(*std::max_element(tempsAttente.begin(), tempsAttente.end()),
                           *std::max_element(tempsReponse.begin(), tempsReponse.end())) * 1.1;
    axisY->setRange(0, maxY);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout(pageHistogram);
    layout->addWidget(chartView);






}

/********************************************************/


void MainWindow::on_pushButton_32_clicked()
{
    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_33_clicked()
{
    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_34_clicked()
{
    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_35_clicked()
{
    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_31_clicked()
{
    preparePRIORITEPREAMPTIVE() ;

    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_29_clicked()
{
    prepareFIFO() ;


    ui->stackedWidget->setCurrentIndex(0);

    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4 , 0 ) ;

}


void MainWindow::on_pushButton_28_clicked()
{
    prepareTOUNIQUET()  ;

    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant) ;

    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_27_clicked()
{
    preparePRIOITE();

    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;


    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_26_clicked()
{
    preparePCTE() ;

    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;


    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_30_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_36_clicked()
{
    preparePCTEPREAMPTIVE() ;

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_47_clicked()
{
    preparePCTEPREAMPTIVE();

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_37_clicked()
{
    preparePCTEPREAMPTIVE() ;

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_38_clicked()
{
    preparePCTEPREAMPTIVE() ;

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_39_clicked()
{
    preparePCTEPREAMPTIVE() ;

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_40_clicked()
{
    preparePCTEPREAMPTIVE() ;

    PR.executionPCTER(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25 ) ;


    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_41_clicked()
{
    preparePCTE() ;

    P.executionPCTE(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;


    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_42_clicked()
{
    preparePRIOITE();

    Pr.executionPrioriteSansRequisition(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;


    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_43_clicked()
{
    prepareTOUNIQUET()  ;

    T.executionTourniquet(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 , quant) ;

    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_44_clicked()
{
    prepareFIFO() ;

    ui->stackedWidget->setCurrentIndex(0);

    f.executionFIFO(ui->tableWidget , ui->tableWidget_2, ui->tableWidget_3 , ui->tableWidget_4 , 0 ) ;
}


void MainWindow::on_pushButton_45_clicked()
{
    calculTemps() ;
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_46_clicked()
{
    preparePRIORITEPREAMPTIVE() ;
    PrR.executionPrioriteAvecRequisition(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    ui->stackedWidget->setCurrentIndex(6);
}

/***********************************************************/

void MainWindow::on_action1_0_triggered()
{
    p1.setDateArrivee(0) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action1_1_triggered()
{
    p1.setDateArrivee(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action1_2_triggered()
{
    p1.setDateArrivee(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action1_3_triggered()
{
    p1.setDateArrivee(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
/*********************************************************/

void MainWindow::on_action2_0_triggered()
{
    p2.setDateArrivee(0) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action2_1_triggered()
{
    p2.setDateArrivee(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action2_2_triggered()
{
    p2.setDateArrivee(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action2_3_triggered()
{
    p2.setDateArrivee(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}

/**********************************************************/

void MainWindow::on_action3_0_triggered()
{
    p3.setDateArrivee(0) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action3_1_triggered()
{
    p3.setDateArrivee(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action3_2_triggered()
{
    p3.setDateArrivee(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action3_3_triggered()
{
    p3.setDateArrivee(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}

/**********************************************************/

void MainWindow::on_action4_0_triggered()
{
    p4.setDateArrivee(0) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action4_1_triggered()
{
    p4.setDateArrivee(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action4_2_triggered()
{
    p4.setDateArrivee(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}
void MainWindow::on_action4_3_triggered()
{
    p4.setDateArrivee(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;

}

/**********************************************************/



void MainWindow::on_action1_triggered()
{
    quant = 1 ;
    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action2_triggered()
{
    quant = 2 ;
    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action3_triggered()
{
    quant = 3 ;
    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action4_triggered()
{
    quant = 4 ;
    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_pushButton_22_clicked()
{
    QVector<QString> categories = {"FIFO", "PCTE", "TOURNIQUET", "PRIORITE", "PCTER", "PRIORITE + R"};
    QVector<double> tempsAttente = {10.5, 4.0, 11.3, 8.3, 2.7, 12};
    QVector<double> tempsReponse = {8, 2.3, 5.3, 7.5, 1.5, 6.7};
    initHistogram(categories, tempsAttente, tempsReponse);
    ui->stackedWidget->setCurrentIndex(5);
}



void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    QVector<QString> categories = {"FIFO", "PCTE", "TOURNIQUET", "PRIORITE", "PCTER", "PRIORITE + R"};
    QVector<double> tempsAttente = {10.5, 4.0, 11.3, 8.3, 2.7, 12};
    QVector<double> tempsReponse = {8, 2.3, 5.3, 7.5, 1.5, 6.7};
    initHistogram(categories, tempsAttente, tempsReponse);

}


void MainWindow::on_pushButton_23_clicked()
{
    calculTemps() ;
    bool ok;
    double ta1 = ui->tableWidget_17->item(6, 0)->text().toDouble(&ok);
    double ta2 = ui->tableWidget_17->item(6, 2)->text().toDouble(&ok);
    double ta3 = ui->tableWidget_17->item(6, 4)->text().toDouble(&ok);
    double ta4 = ui->tableWidget_17->item(6, 6)->text().toDouble(&ok);
    double ta5 = ui->tableWidget_17->item(6, 8)->text().toDouble(&ok);
    double ta6 = ui->tableWidget_17->item(6, 10)->text().toDouble(&ok);

    double tr1 = ui->tableWidget_17->item(6, 1)->text().toDouble(&ok);
    double tr2 = ui->tableWidget_17->item(6, 3)->text().toDouble(&ok);
    double tr3 = ui->tableWidget_17->item(6, 5)->text().toDouble(&ok);
    double tr4 = ui->tableWidget_17->item(6, 7)->text().toDouble(&ok);
    double tr5 = ui->tableWidget_17->item(6, 9)->text().toDouble(&ok);
    double tr6 = ui->tableWidget_17->item(6, 11)->text().toDouble(&ok);


    QVector<QString> categories = {"FIFO", "PCTE", "TOURNIQUET", "PRIORITE", "PRIORITE + R" ,  "PCTER"};
    QVector<double> tempsAttente = {ta1, ta2, ta3, ta4, ta5, ta6};
    QVector<double> tempsReponse = {tr1, tr2, tr3, tr4, tr5,tr6};

    qDebug() << tempsAttente ;
    qDebug() << tempsReponse ;
    initHistogram(categories, tempsAttente, tempsReponse);
     ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_commandLinkButton_2_clicked()
{
  ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_action3_5_triggered()
{
    p2.setPriorite(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}

void MainWindow::on_action1_4_triggered()
{
    p1.setPriorite(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}

void MainWindow::on_action2_4_triggered()
{
    p1.setPriorite(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}

void MainWindow::on_action3_4_triggered()
{
    p1.setPriorite(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action4_4_triggered()
{
    p1.setPriorite(4) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action1_5_triggered()
{
    p2.setPriorite(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action2_5_triggered()
{
    p2.setPriorite(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action4_5_triggered()
{
    p2.setPriorite(4) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action1_6_triggered()
{
    p3.setPriorite(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action2_6_triggered()
{
    p3.setPriorite(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action3_6_triggered()
{
    p3.setPriorite(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action4_6_triggered()
{
    p3.setPriorite(4) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action1_7_triggered()
{
    p4.setPriorite(1) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action2_7_triggered()
{
    p4.setPriorite(2) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action3_7_triggered()
{
    p4.setPriorite(3) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


void MainWindow::on_action4_7_triggered()
{
    p4.setPriorite(4) ;

    viderTables(ui->tableWidget_13 , ui->tableWidget_14, ui->tableWidget_15 , ui->tableWidget_16 ) ;

    viderTables(ui->tableWidget_18 , ui->tableWidget_19, ui->tableWidget_20 , ui->tableWidget_21 ) ;

    viderTables(ui->tableWidget_22 , ui->tableWidget_23, ui->tableWidget_24 , ui->tableWidget_25) ;

    viderTables(ui->tableWidget, ui->tableWidget_2, ui->tableWidget_3, ui->tableWidget_4 );

    viderTables(ui->tableWidget_5 , ui->tableWidget_6, ui->tableWidget_7 , ui->tableWidget_8 ) ;

    viderTables(ui->tableWidget_9 , ui->tableWidget_10, ui->tableWidget_11 , ui->tableWidget_12 ) ;
}


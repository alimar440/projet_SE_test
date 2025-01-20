#include "pcte.h"
#include <QThread>
#include <QApplication>


Pcte::Pcte(){

    tabProcessus = (Processus**)malloc(NB_PROCESS * sizeof(Processus*));
    for(int i = 0; i < NB_PROCESS; i++)
    {
        tabProcessus[i] = nullptr;
    }

    actifProcesseur = nullptr;
    actifDisque = nullptr;
}
Pcte::~Pcte(){

}

void Pcte::ajouterProcessus(Processus* p)
{

    int i = 0;
    while(i < NB_PROCESS && tabProcessus[i] != nullptr)
    {
        i++;
    }
    if(i < NB_PROCESS)
    {
        tabProcessus[i] = p;
    }
}



void Pcte::misAJourElu(Liste *L, File *F, Processus* actif1, Processus* actif2){

    if(actif1 == nullptr)
    {
        if(!L->est_vide()){
            // std::cout<<"test0\n";
            actif1 = L->prochainPCTE();
            // std::cout<<"test1\n";

            actif1->setElu(true);
            actif1->setPret(false);
            actif1->calcul();
            std::cout<< actif1->getPid()<<" en execution1\n";
        }
    }
    else
    {
        if(actif1->getScenario()->val == 0 && actif1->getScenario()->suivant != nullptr){

            if(actif2 == nullptr){
                actif2 = actif1;
                actif2->deplacer();
                actif2->calcul();



                actif1->setElu(false);
                actif1->setBloque(true);
                actif1->setEntreeSortie(true);
                std::cout<< actif1->getPid()<<" en entree/sortie.5\n";
                actif1 = nullptr;
            }
            else
            {
                actif1->deplacer();
                F->enfiler(*actif1);
                actif1->setElu(false);
                actif1->setBloque(true);
                actif1 = nullptr;
            }
            if(!L->est_vide()){
                actif1 = L->prochainPCTE();
                actif1->calcul();


                actif1->setElu(true);
                actif1->setPret(false);
                std::cout<< actif1->getPid()<<" en execution2\n";
            }
        }
        else  if (actif1->getScenario()->val == 0 && actif1->getScenario()->suivant == nullptr)
        {
            std::cout<< actif1->getPid()<<"                                       a termine1\n";
            delete actif1;
            actif1 = nullptr;

            if(!L->est_vide()){
                actif1 = L->prochainPCTE();
                actif1->calcul();


                actif1->setElu(true);
                actif1->setPret(false);
                std::cout<< actif1->getPid()<<" en execution3\n";
            }
        }
        else
        {
            actif1->calcul();
            std::cout<< actif1->getPid()<<" en execution4\n";
        }
    }
    actifProcesseur = actif1;
    actifDisque = actif2;
}
void Pcte::misAJourCoteDisque(File *F, Liste *L, Processus* actif1, Processus* actif2){



    if(actif1 == nullptr)
    {
        if(!F->est_vide()){

            actif1 = F->defiler();

            actif1->setBloque(true);
            actif1->setEntreeSortie(true);
            actif1->calcul();
            std::cout<< actif1->getPid()<<" en entree/sortie1\n";
        }
    }
    else
    {

        if(actif1->getScenario()->val == 0 && actif1->getScenario()->suivant != nullptr){

            if(actif2 == nullptr){
                actif2 = actif1;
                actif2->deplacer();


                actif1->setElu(true);
                actif1->setBloque(false);
                actif1->setEntreeSortie(false);
                actif1 = nullptr;
            }
            else
            {
                actif1->deplacer();
                L->ajouter(actif1);

                actif1->setPret(true);
                actif1->setBloque(false);
                actif1->setEntreeSortie(false);
                actif1 = nullptr;
            }
            if(!F->est_vide()){
                actif1 = F->defiler();
                actif1->calcul();


                actif1->setBloque(true);
                actif1->setEntreeSortie(true);
                std::cout<< actif1->getPid()<<" en entree/sortie2\n";
            }
        }
        else  if (actif1->getScenario()->val == 0 && actif1->getScenario()->suivant == nullptr)
        {
            std::cout<< actif1->getPid()<<"                                      a termine2\n";
            delete actif1;
            actif1 = nullptr;

            if(!F->est_vide()){
                actif1 = F->defiler();
                actif1->calcul();


                actif1->setBloque(true);
                actif1->setEntreeSortie(true);
                std::cout<< actif1->getPid()<<" en entree/sortie3\n";
            }
        }
        else
        {

            actif1->calcul();
            std::cout<< actif1->getPid()<<" en entree/sortie4\n";
        }
    }
    actifProcesseur = actif2;
    actifDisque = actif1;
}


void Pcte::executionPCTE1(QTableWidget* tab1 , QTableWidget* tab2 , QTableWidget* tab3 , QTableWidget* tab4 ){

    int i = 0, j = 0;

    while(i < MAX){

        if(j < NB_PROCESS)
        {
            for(int k = 0; k < NB_PROCESS; k++){
                if(tabProcessus[k]->getDateArrivee() == i)
                {
                    (tabProcessus[k]->getScenario()->type_operation == 0)
                    ? listeProcessusPret.ajouter(tabProcessus[k])
                    : fileProcessusDisque.enfiler(*tabProcessus[k]);
                    j++;
                }
            }
        }

        //QThread::msleep(250) ;

        //QCoreApplication::processEvents() ;

        misAJourCoteDisque(&fileProcessusDisque, &listeProcessusPret, actifDisque, actifProcesseur);

        misAJourElu(&listeProcessusPret, &fileProcessusDisque, actifProcesseur, actifDisque);

        remplirChronogramme( tab1 , tab2 ,  tab3 ,  tab4  ,listeProcessusPret,fileProcessusDisque, actifProcesseur,actifDisque , i ) ;


        i++;

    }

}


#include <QTimer>
void Pcte::executionPCTE(QTableWidget* tab1, QTableWidget* tab2, QTableWidget* tab3, QTableWidget* tab4) {
    int* i = new int(0);  // Pointer to track time
    int* j = new int(0);  // Pointer to track process count

    QTimer* timer = new QTimer();

    QObject::connect(timer, &QTimer::timeout, [=]() mutable {
        if (*i >= MAX) {
            timer->stop();
            delete i;
            delete j;
            timer->deleteLater();
            return;
        }

        // Ajouter les processus arrivés
        if (*j < NB_PROCESS) {
            for (int k = 0; k < NB_PROCESS; k++) {
                if (tabProcessus[k]->getDateArrivee() == *i) {
                    (tabProcessus[k]->getScenario()->type_operation == 0)
                    ? listeProcessusPret.ajouter(tabProcessus[k])
                    : fileProcessusDisque.enfiler(*tabProcessus[k]);
                    (*j)++;
                }
            }
        }

        // Mise à jour des processus actifs
        misAJourCoteDisque(&fileProcessusDisque, &listeProcessusPret, actifDisque, actifProcesseur);
        misAJourElu(&listeProcessusPret, &fileProcessusDisque, actifProcesseur, actifDisque);

        // Mettre à jour le chronogramme
        remplirChronogramme(tab1, tab2, tab3, tab4, listeProcessusPret, fileProcessusDisque, actifProcesseur, actifDisque, *i);

        (*i)++;  // Increment time
    });

    timer->start(100);  // Exécute toutes les 250 ms
}

void Pcte::remplirChronogramme(QTableWidget* tab1, QTableWidget* tab2, QTableWidget* tab3, QTableWidget* tab4, Liste listeP, File fileD, Processus* actifP, Processus* actifD, int col) {

    auto setItem = [](QTableWidget* tab, int row, int col, const QString& text, const QColor& color) {
        QTableWidgetItem* item = new QTableWidgetItem(text);
        item->setForeground(QBrush(color));         // Couleur du texte
        item->setTextAlignment(Qt::AlignCenter);    // Centrage du texte
        tab->setItem(row, col, item);
    };

    // 🔵 Processus actif en vert
    if (actifP) {
        QColor colorActifP("#2ECC71");  // Vert
        switch (actifP->getPid()) {
        case 1: setItem(tab1, 0, col, "X", colorActifP); break;
        case 2: setItem(tab2, 0, col, "X", colorActifP); break;
        case 3: setItem(tab3, 0, col, "X", colorActifP); break;
        case 4: setItem(tab4, 0, col, "X", colorActifP); break;
        }
    }

    // 🔴 Processus débloqué en rouge
    if (actifD) {
        QColor colorActifD("#E74C3C");  // Rouge
        switch (actifD->getPid()) {
        case 1: setItem(tab1, 2, col, "X", colorActifD); break;
        case 2: setItem(tab2, 2, col, "X", colorActifD); break;
        case 3: setItem(tab3, 2, col, "X", colorActifD); break;
        case 4: setItem(tab4, 2, col, "X", colorActifD); break;
        }
    }

    // 🟡 Processus en attente en jaune
    QColor colorListeP("#F1C40F");  // Jaune
    while (!listeP.est_vide()) {
        Processus tete = listeP.prochain();
        switch (tete.getPid()) {
        case 1: setItem(tab1, 1, col, "X", colorListeP); break;
        case 2: setItem(tab2, 1, col, "X", colorListeP); break;
        case 3: setItem(tab3, 1, col, "X", colorListeP); break;
        case 4: setItem(tab4, 1, col, "X", colorListeP); break;
        }
    }

    // 🔵 Processus dans la file d’attente en bleu
    QColor colorFileD("#F1C40F");  // Bleu
    while (!fileD.est_vide()) {
        Processus tete = fileD.tete();
        switch (tete.getPid()) {
        case 1: setItem(tab1, 2, col, "X", colorFileD); break;
        case 2: setItem(tab2, 2, col, "X", colorFileD); break;
        case 3: setItem(tab3, 2, col, "X", colorFileD); break;
        case 4: setItem(tab4, 2, col, "X", colorFileD); break;
        }
        fileD.defiler();
    }
}


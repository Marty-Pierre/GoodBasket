#include <QApplication>
#include <QMainWindow>

#include "gestionnairepc.h"
#include "pointdecollecte.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
    /**QApplication app(argc,argv);
    QMainWindow* appli = new QMainWindow();
    appli->show();**/

    Application *goodbasket = new Application();
    PointDeCollecte *p1 = new PointDeCollecte(string("Paris"));
    vector<PointDeCollecte> pdc;
    cout << "Ca marche 1\n";
    pdc.push_back(*p1);

    GestionnairePC *gest = new GestionnairePC("Bove","Jose",pdc,pdc,*goodbasket);

    return 0;

    //return app.exec();
}
    


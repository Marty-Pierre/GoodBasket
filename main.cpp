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

    PointDeCollecte *p1 = new PointDeCollecte("Paris");
    vector<PointDeCollecte> pdc;
    pdc.push_back(*p1);

    GestionnairePC *gest = new GestionnairePC("Bove","Jose",pdc,pdc);
    //cout << pdc.size();
    //gest->fermerPCDef(*p1);
    //cout << pdc.size();
    return 0;

    //return app.exec();
}
    


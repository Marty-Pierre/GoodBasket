#include "application.h"

using namespace std; 

/// @brief Le constructeur par défaut.
///
/// Constructeur de la classe Application
Application::Application()
{

}
/// @brief Fonction qui donne le @ref PointDeCollecte si il est présent.
///
/// @param lieu nom du @ref PointDeCollecte recherché
///
/// @return le @ref PointDeCollecte si il est présent dans le gestionnaire ou un @ref PointDeCollecte érroné sinon
PointDeCollecte& Application::getPC(string lieu) {
    PointDeCollecte* pc = new PointDeCollecte(string("erreur"));
    vector<PointDeCollecte>::iterator pi = pcc.begin();
    while (pi != pcc.end()) {
        if ( pi->getLocation() != lieu)
            pi = next(pi);
        else {
            delete pc;
            pc = &*pi;
            pi = pcc.end();    
        }
    }
    return *pc;
}

/// @brief Fonction qui donne l' @ref Utilisateur si il est présent.
///
/// @param nom nom de l' @ref Utilisateur recherché
///
/// @return l' @ref Utilisateur si il est présent dans la liste ou un @ref Utilisateur érroné sinon
Utilisateur& Application::getUtilisateur(string nom) {
    Utilisateur* usr = new Utilisateur(string("erreur"), string("erreur"), *(new vector<PointDeCollecte>), *this);
    vector<Utilisateur*>::iterator pi = utilisateurs.begin();
    while (pi != utilisateurs.end()) {
        if ( (*pi)->getNom() != nom)
            pi = next(pi);
        else {
            delete usr;
            usr = *pi;
            pi = utilisateurs.end();    
        }
    }
    return *usr;
}

void Application::promotion(Utilisateur u) {
    vector<Utilisateur*>::iterator pi = utilisateurs.begin();
    while (pi != utilisateurs.end()) {
        if ( (*pi)->getNom() != u.getNom())
            pi = next(pi);
        else {
            Utilisateur* user = *pi;
            GestionnairePC* gpc = new GestionnairePC(user);
            utilisateurs.push_back(gpc);
            utilisateurs.erase(pi);
            pi = utilisateurs.end();   
        }
    }
}

Application::~Application() {
    pcc.clear();
    utilisateurs.clear();
}
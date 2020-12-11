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
    PointDeCollecte* error = new PointDeCollecte(string("erreur"));
    PointDeCollecte pc = *error;
    vector<PointDeCollecte&>::iterator pi = pcc.begin();
    while (pi != pcc.end()) {
        if ( (*pi)->getLocation() != lieu)
            pi = next(pi);
        else {
            pc = *pi;
            delete error;
            pi = pcc.end();    
        }
    }
    return pc;
}
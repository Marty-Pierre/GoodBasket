#include "gestionnairepc.h"

using namespace std;

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe GestionnairePC
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur 
/// @param pc Points de collectes aux quels l'utilisateur est abonné
/// @param pcg Points de collectes que l'utilisateur gère

GestionnairePC::GestionnairePC(string n, std::string pren, vector<PointDeCollecte> pc, vector<PointDeCollecte> pcg, Application app) : Utilisateur(n, pren, pc, app), pcGeres(pcg)
{

}

GestionnairePC::GestionnairePC(Utilisateur* u) : Utilisateur(u->getNom(), u->getPrenom(), u->getPcInscrits(), u->getApp()), pcGeres() {

}
/// @brief ferme définitivement un point de collecte en le suppriment 
    ///
    /// @param pc PointDeCollecte le point de collecte a supprimer 

void GestionnairePC::fermerPCDef(PointDeCollecte pc) {
    vector<PointDeCollecte>::iterator pi = pcGeres.begin();
    while (pi != pcGeres.end()) {
        if ( pi->getLocation() != pc.getLocation())
            pi = next(pi);
        else {
            PointDeCollecte* p = &*pi;
            pcGeres.erase(pi);
            pi = pcGeres.end();  
        }
    }
}

GestionnairePC::~GestionnairePC() {
    pcGeres.clear();
}
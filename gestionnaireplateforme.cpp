#include "gestionnaireplateforme.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe GestionnairePlateforme
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur 
/// @param pc Points de collectes aux quels l'utilisateur est abonné
GestionnairePlateforme::GestionnairePlateforme(std::string n, std::string pren, std::vector<PointDeCollecte> pc) : Utilisateur(n, pren, pc)
{

}

GestionnairePlateforme::~GestionnairePlateforme() {
    
}
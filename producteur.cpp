#include "producteur.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Producteur
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur
/// @param pc @ref PointDeCollecte à associé à ce compte
Producteur::Producteur(std::string n, std::string pren, std::vector<PointDeCollecte> pc) : Producteur(n, pren, pc) 
{
    produitsFournis = GestionnaireProduits();
}

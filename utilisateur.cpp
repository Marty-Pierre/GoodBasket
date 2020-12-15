#include "utilisateur.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Utilisateur
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur
/// @param pc @ref PointDeCollecte aux quels l'utilisateur est abonné
Utilisateur::Utilisateur(std::string n, std::string pren, std::vector<PointDeCollecte> pc) : nom(n), prenom(pren), pcInscrits(pc), panier(GestionnaireProduits())
{

}

Utilisateur::~Utilisateur() { 
    delete &nom; 
    delete &prenom;
    pcInscrits.clear();
    delete &panier;
}
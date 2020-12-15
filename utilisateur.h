#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <vector>
#include "pointdecollecte.h"
#include "produit.h"
#include "gestionnaireproduits.h"

class Compte; class GestionnairePlateforme;

/** @brief La classe Utilisateur.
 ** 
 ** Elle contient un constructeur, le nom et le prenom de les points de collectes aux quels est abonné l'utilisateur et son panier.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Utilisateur
{
protected:
    std::string nom;
    std::string prenom;
    std::vector<PointDeCollecte> pcInscrits;
    GestionnaireProduits panier;

public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe Utilisateur
    ///
    /// @param n nom de l'utilisateur
    /// @param pren prenom de l'utilisateur
    /// @param pc @ref PointDeCollecte aux quels l'utilisateur est abonné
    Utilisateur(std::string n, std::string pren, std::vector<PointDeCollecte> pc);
    ~Utilisateur();
};

#endif // UTILISATEUR_H

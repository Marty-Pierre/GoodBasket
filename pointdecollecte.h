#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H

#include <vector>
#include "Produit.h"
#include "gestionnaireproduits.h"

class Utilisateur; class GestionnairePC; class Producteur;

/** @brief La classe PointDeCollecte.
 ** 
 ** Elle contient un constructeur, le lieu, un @ref GestionnaireProduits, et un bool qui définit si il est ouvert ou fermé.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class PointDeCollecte
{
private:
    const std::string lieu;
    GestionnaireProduits produitsDuPC;
    bool ouvert;
public:
    /// @brief Le constructeur par défaut attribue la valeur passée en paramètre.
    ///
    /// Constructeur de la classe PointDeCollecte
    ///
    /// @param l lieux du point de collecte
    PointDeCollecte(std::string l);
};

#endif // POINTDECOLLECTE_H

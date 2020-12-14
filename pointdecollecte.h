#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H

#include <vector>
#include "produit.h"
#include "gestionnaireproduits.h"

class Utilisateur; class GestionnairePC; class Producteur; class Application;

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
    std::string jourCycle;
    GestionnaireProduits produitsDuPC;
    bool ouvert;
public:
    /// @brief Le constructeur par défaut attribue la valeur passée en paramètre.
    ///
    /// Constructeur de la classe PointDeCollecte
    ///
    /// @param l lieux du point de collecte
    PointDeCollecte(std::string l);
    void setDate(std::string jour) { jourCycle = jour; };
    std::string getLocation() { return lieu; };
};

#endif // POINTDECOLLECTE_H

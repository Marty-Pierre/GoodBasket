#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H

#include <vector>
#include "produit.h"
#include "gestionnaireproduits.h"

class Producteur;

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
    std::string lieu;
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

    /// @brief Mets a jour la date du cycle
    ///
    /// @param jour un string pour mettre a jour la nouvelle date
    void setDate(std::string jour) { jourCycle = jour; };

    /// @brief Recupere le lieu du point de collecte
    ///
    /// @return le lieu du point de collecte
    std::string getLocation() { return lieu; };

    /// @brief ferme temporairement un point de collecte en mettant sa date a FERME 
    ///
    /// @param pc PointDeCollecte le point de collecte a fermer temporairement
    void fermerPCTemp() { jourCycle = std::string("closed"); };

    /// @brief Regarde si le point de collecte n'est pas fermer
    ///
    /// @return True si le point de collecte n'est pas fermer
    bool pcOpen() { return (jourCycle.compare(std::string("closed")) == 0); };
    ~PointDeCollecte();
};

#endif // POINTDECOLLECTE_H

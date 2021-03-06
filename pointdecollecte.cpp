#include "pointdecollecte.h"

/// @brief Le constructeur par défaut attribue la valeur passée en paramètre.
///
/// Constructeur de la classe PointDeCollecte
///
/// @param l lieux du point de collecte
PointDeCollecte::PointDeCollecte(std::string l) : lieu(l), produitsDuPC(GestionnaireProduits())
{
    jourCycle = std::string("closed");
}

PointDeCollecte::~PointDeCollecte() {
    delete &lieu;
    delete &jourCycle;
    delete &produitsDuPC;
}
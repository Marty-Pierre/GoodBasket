#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H

#include <vector>
#include "Produit.h"

class Utilisateur; class GestionnairePC; class Producteur;

class PointDeCollecte
{
private:
    std::string lieu;
    std::vector<Produit> produitsDuPC;
    bool ouvert;
public:
    PointDeCollecte(std::string l);
};

#endif // POINTDECOLLECTE_H

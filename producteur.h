#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include "utilisateur.h"

class Producteur : public Utilisateur
{
private:

    std::vector<PointDeCollecte> pcFournis;
    std::vector<Produit> produitsFournis;

public:
    Producteur();
};

#endif // PRODUCTEUR_H

#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include <vector>
#include "utilisateur.h"

class Producteur : public Utilisateur
{
private:

    std::vector<PointDeCollecte> pcFournis;
    std::vector<Produit> produitsFournis;

public:
    Producteur(std::string n, std::string pren, std::vector<PointDeCollecte> pc);
};

#endif // PRODUCTEUR_H

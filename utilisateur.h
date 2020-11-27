#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <vector>
#include "pointdecollecte.h"
#include "produit.h"

class Utilisateur
{
protected:

    std::string nom;
    std::string prenom;
    std::vector<PointDeCollecte> pcInscrits;
    std::vector<Produit> panier;

public:
    Utilisateur();
};

#endif // UTILISATEUR_H

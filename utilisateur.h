#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <vector>
#include "pointdecollecte.h"
#include "produit.h"

class Compte; class GestionnairePlateforme;

class Utilisateur
{
protected:
    std::string nom;
    std::string prenom;
    std::vector<PointDeCollecte> pcInscrits;
    std::vector<Produit> panier;

public:
    Utilisateur(std::string n, std::string pren, std::vector<PointDeCollecte> pc);
};

#endif // UTILISATEUR_H

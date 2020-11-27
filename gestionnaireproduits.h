#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H

#include <vector>
#include "produit.h"

class GestionnaireProduits
{
private:
    std::vector<Produit> produits;
public:
    GestionnaireProduits();
    bool verificationValeurs(std::string quantite, int prix);
    Produit getProd(std::string nomProduit);
    void ajouterProduit(Produit prod) { produits.push_back(prod); };
};

#endif // GESTIONNAIREPRODUITS_H

#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Utilisateur; class GestionnaireProduits; class PointDeCollecte; class Producteur;

class Produit
{
private:
    std::string nom;
    std::string quantite;
    int prix;
public:
    Produit(std::string nomProduit, std::string qt, int p);
    void setPrix(int p);
    void setQuantite(std::string qt);
    std::string getName() { return nom; };
};

#endif // PRODUIT_H

#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H


class GestionnaireProduits
{
private:
    std::vector<Produit> produits;
public:
    GestionnaireProduits();
    bool verificationValeurs(std::string quantite, int prix);
    Produits getProd(std::string nomProduit);
    void ajouterProduit(Produit prod);
};

#endif // GESTIONNAIREPRODUITS_H

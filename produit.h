#ifndef PRODUIT_H
#define PRODUIT_H


class Produit
{
private:
    std::string nom;
    std::string quantite;
    int prix;
public:
    Produit(std::string nomProduit, int quantite, int prix);
    void setPrix(int prix);
    void setQuantite(std::string quantite);

};

#endif // PRODUIT_H

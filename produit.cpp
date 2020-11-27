#include "produit.h"

Produit::Produit(std::string nomProduit, std::string qt, int p) : nom(nomProduit), quantite(qt), prix(prix)
{

}

void Produit::setPrix(int p) {
    this->prix = p;
}

void Produit::setQuantite(std::string qt) {
    this->quantite = qt;
}
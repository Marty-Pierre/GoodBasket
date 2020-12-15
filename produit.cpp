#include "produit.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Produit
///
/// @param nomProduit nom du produit
/// @param qt quantité du produit
/// @param p prix du produit
Produit::Produit(std::string nomProduit, std::string qt, int p) : nom(nomProduit), quantite(qt), prix(prix)
{

}
/// @brief La fonction qui change le prix.
///
/// @param p p nouveau prix du produit
void Produit::setPrix(int p) {
    this->prix = p;
}
/// @brief La fonction qui change la quantite.
///
/// @param qt p nouveau prix du produit
void Produit::setQuantite(std::string qt) {
    this->quantite = qt;
}

///@brief La fonction qui verifie si deux produit sont egaux
///
///@param prod Le produit avec lequel il faut comparer
bool Produit::isEqual(Produit prod){
    return (this->prix == prod.getPrix() && this->nom.compare(prod.getName()) == 0 && this->quantite.compare(prod.getQuantite()) == 0);
}

Produit::~Produit() {
    delete &nom;
    delete &quantite;
}
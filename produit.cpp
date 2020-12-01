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
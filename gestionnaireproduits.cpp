#include "gestionnaireproduits.h"

using namespace std; 

/// @brief Le constructeur par défaut.
///
/// Constructeur de la classe GestionnaireProduits
GestionnaireProduits::GestionnaireProduits()
{

}

/// @brief Vérifie si les valeurs données sont correctes.
///
/// @param quantite string décrivant la quantite du @ref Produit
/// @param prix int associé au prix d'un @ref Produit
///
/// @return si la quantite et le prix sont valides
bool GestionnaireProduits::verificationValeurs(string quantite, int prix) {
    return prix > 0;
}

/// @brief Fonction qui donne le @ref Produit si il est présent.
///
/// @param nomProduit nom du @ref Produit recherché
///
/// @return le @ref Produit si il est présent dans le gestionnaire ou un @ref Produit érroné sinon
Produit& GestionnaireProduits::getProd(string nomProduit) {
    Produit* p = new Produit(string("erreur"), string(""), -1);
    vector<Produit>::iterator pi = produits.begin();
    while (pi != produits.end()) {
        if ( pi->getName() != nomProduit)
            pi = next(pi);
        else {
            delete p;
            p = &*pi;
            pi = produits.end();    
        }
    }
    return *p;
}

/// @brief Retire le @ref Produit spécifié dans la liste du gestionnaire.
///
/// @param prod @ref Produit à retirer de la liste
///
/// @return si le @ref Produit à bien été retiré
bool GestionnaireProduits::supprProduit(string nomProduit) {
    bool res = false;
    vector<Produit>::iterator pi = produits.begin();
    while (pi != produits.end() && !res) {
        if ( pi->getName() != nomProduit)
            pi = next(pi);
        else {
            Produit* p = &*pi;
            produits.erase(pi);
            res = true;   
        }
    }
    return res;
}

GestionnaireProduits::~GestionnaireProduits() {
    produits.clear();
}
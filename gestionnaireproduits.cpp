#include "gestionnaireproduits.h"

using namespace std; 

GestionnaireProduits::GestionnaireProduits()
{

}

bool GestionnaireProduits::verificationValeurs(string quantite, int prix) {
    return prix > 0;
}

Produit GestionnaireProduits::getProd(string nomProduit) {
    Produit p = Produit(string("erreur"), string(""), -1);
    vector<Produit>::iterator pi = produits.begin();
    while (pi != produits.end()) {
        if ( pi->getName() != nomProduit)
            pi = next(pi);
        else {
            p = *pi;
            pi = produits.end();    
        }
    }
    return p;
}
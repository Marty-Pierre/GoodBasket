#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H

#include <vector>
#include "produit.h"

class PointDeCollecte; class Producteur; class Utilisateur;

/** @brief La classe GestionnaireProduits, hérite de Utilisateur.
 ** 
 ** Elle contient un constructeur, une liste de Produit et 3 méthodes pour la gérer :
 ** @ref verificationValeurs(string, int), @ref getProd(string) et @ref ajouterProduit(@ref Produit)
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class GestionnaireProduits
{
private:
    std::vector<Produit> produits;
public:
    /// @brief Le constructeur par défaut.
    ///
    /// Constructeur de la classe GestionnaireProduits
    GestionnaireProduits();
    /// @brief Vérifie si les valeurs données sont correctes.
    ///
    /// @param quantite string décrivant la quantite du @ref Produit
    /// @param prix int associé au prix d'un @ref Produit
    ///
    /// @return si la quantite et le prix sont valides
    bool verificationValeurs(std::string quantite, int prix);
    /// @brief Fonction qui donne le @ref Produit si il est présent.
    ///
    /// @param nomProduit nom du @ref Produit recherché
    ///
    /// @return le @ref Produit si il est présent dans le gestionnaire ou un @ref Produit érroné sinon
    Produit& getProd(std::string nomProduit);
    /// @brief Ajoute le @ref Produit spécifié dans la liste du gestionnaire.
    ///
    /// @param prod @ref Produit à ajouter à la liste
    void ajouterProduit(Produit prod) { produits.push_back(prod); };
    /// @brief Retire le @ref Produit spécifié dans la liste du gestionnaire.
    ///
    /// @param prod @ref Produit à retirer de la liste
    ///
    /// @return si le @ref Produit à bien été retiré
    bool supprProduit(Produit prod);
};

#endif // GESTIONNAIREPRODUITS_H

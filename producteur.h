#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include <vector>
#include "utilisateur.h"

/** @brief La classe Producteur, hérite de @ref Utilisateur.
 ** 
 ** Elle contient un constructeur, le nom, le prenom, les points de collecte qu'il fournis et les produits fournis.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Producteur : public Utilisateur
{
private:
    std::vector<PointDeCollecte> pcFournis;
    GestionnaireProduits produitsFournis;

public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe Producteur
    ///
    /// @param n nom de l'utilisateur
    /// @param pren prenom de l'utilisateur
    /// @param pc @ref PointDeCollecte à associé à ce compte
    Producteur(std::string n, std::string pren, std::vector<PointDeCollecte> pc, Application app);

    /// @brief Retire le @ref Produit spécifié dans la liste du gestionnaire.
    ///
    /// @param prod @ref Produit à retirer de la liste
    ///
    /// @return si le @ref Produit à bien été retiré
    bool supprProduit(std::string nomProduit) {produitsFournis.supprProduit(nomProduit);};
    void repondreMessage(Message m, bool accept);
    ~Producteur();
};

#endif // PRODUCTEUR_H

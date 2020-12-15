#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Utilisateur; class GestionnaireProduits; class PointDeCollecte; class Producteur;

/** @brief La classe Produit.
 ** 
 ** Elle contient un constructeur, le nom, la quantite et le prix du produit et 3 méthodes :
 ** @ref setPrix(int), @ref setQauntite(string) et @ref getName()
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Produit
{
private:
    std::string nom;
    std::string quantite;
    int prix;
public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe Produit
    ///
    /// @param nomProduit nom du produit
    /// @param qt quantité du produit
    /// @param p prix du produit
    Produit(std::string nomProduit, std::string qt, int p);
    /// @brief La fonction qui change le prix.
    ///
    /// @param p p nouveau prix du produit
    void setPrix(int p);
    /// @brief La fonction qui change la quantite.
    ///
    /// @param qt p nouveau prix du produit
    void setQuantite(std::string qt);
    /// @brief La fonction qui donne le nom du produit.
    ///
    /// @return le nom du produit
    std::string getName() { return nom; };

    ///@brief La fonction qui verifie si deux produit sont egaux
    ///
    ///@param prod Le produit avec lequel il faut comparer
    bool isEqual(Produit prod);

    ///@brief La fonction qui donne la quantite du produit
    ///
    ///@return La quantite du produit
    std::string getQuantite(){
        return quantite;
    }

    ///@brief La fonction qui donne le prix du produit
    ///
    ///@return Le prix du produit
    int getPrix(){
        return prix;
    }
    ~Produit();
};

#endif // PRODUIT_H

#include "producteur.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Producteur
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur
/// @param pc @ref PointDeCollecte à associé à ce compte
Producteur::Producteur(std::string n, std::string pren, std::vector<PointDeCollecte> pc, Application app) : Utilisateur(n, pren, pc, app) 
{
    produitsFournis = GestionnaireProduits();
}

    /// @brief Fonction qui reponds si le producteur est d'accord d'etre fournisseur
    ///
    /// @param m Message le message a supprimer
    ///
    ///@return true si il accepte false sinon
void Producteur::repondreMessage(Message m, bool accept) {
    if (accept) {
        PointDeCollecte pc = goodBasket->getPC(m.getLieu());
        pcFournis.push_back(pc);
    }
    removeMessage(m);
}

Producteur::~Producteur() {  
    pcFournis.clear();
    delete &produitsFournis;
}
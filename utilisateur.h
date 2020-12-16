#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <vector>
#include "pointdecollecte.h"
#include "produit.h"
#include "gestionnaireproduits.h"
#include "message.h"
#include "application.h"

class Compte; class GestionnairePlateforme; class Application; class Message;

/** @brief La classe Utilisateur.
 ** 
 ** Elle contient un constructeur, le nom et le prenom de les points de collectes aux quels est abonné l'utilisateur et son panier.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Utilisateur
{
protected:
    std::string nom;
    std::string prenom;
    std::vector<PointDeCollecte> pcInscrits;
    GestionnaireProduits panier;
    std::vector<Message> msgRecus;
    Application *goodBasket;

public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe Utilisateur
    ///
    /// @param n nom de l'utilisateur
    /// @param pren prenom de l'utilisateur
    /// @param pc @ref PointDeCollecte aux quels l'utilisateur est abonné
    Utilisateur(std::string n, std::string pren, std::vector<PointDeCollecte> pc, Application app);
    std::string getNom() { return nom; };

    /// @brief Fonction qui envoie a un Utilisateur
    ///
    /// @param m Message le message a envoyé
    void envoyerMessage(Message m);

    /// @brief Fonction qui mets un message dans la liste
    ///
    /// @param m Message le message a ajouter a la liste
    void recevoirMessage(Message* m) { msgRecus.push_back(*m); };

    /// @brief Fonction qui supprime le message
    ///
    /// @param m Message le message a supprimer
    void removeMessage(Message m);
    ~Utilisateur();
};

#endif // UTILISATEUR_H
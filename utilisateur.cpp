#include "utilisateur.h"

using namespace std; 

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Utilisateur
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur
/// @param pc @ref PointDeCollecte aux quels l'utilisateur est abonné
Utilisateur::Utilisateur(string n, string pren, vector<PointDeCollecte> pc, Application app) : nom(n), prenom(pren), pcInscrits(pc), panier(GestionnaireProduits()), goodBasket(&app)
{

}

/// @brief Fonction qui envoie a un Utilisateur
///
/// @param m Message le message a envoyé
void Utilisateur::envoyerMessage(Message m) {
    m.getDestinataire()->recevoirMessage(&m);
}

/// @brief Fonction qui supprime le message
///
/// @param m Message le message a supprimer
void Utilisateur::removeMessage(Message m) {
    vector<Message>::iterator pi = msgRecus.begin();
    while (pi != msgRecus.end()) {
        if ( (pi->getExpediteur()->getNom() != m.getExpediteur()->getNom()) && (pi->getLieu() != m.getLieu()) )
            pi = next(pi);
        else {
            msgRecus.erase(pi);  
        }
    }
}

Utilisateur::~Utilisateur() { 
    delete &nom; 
    delete &prenom;
    pcInscrits.clear();
    delete &panier;
    msgRecus.clear();
}
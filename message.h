#ifndef MESSAGE_H
#define MESSAGE_H

#include "utilisateur.h"

class Utilisateur;

/** @brief La classe Message.
 ** 
 ** Elle contient un constructeur.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Message 
{
private:
    std::string lieu;
    std::string message;
    Utilisateur* destinataire; Utilisateur* expediteur;

public:
    /// @brief Le constructeur par défaut de la classe Message
    ///
    /// Constructeur de la classe Message
    /// @param expe Utilisateur expediteur du message
    /// @param deste Utilisateur destinateur du message 
    /// @param location : lieux
    /// @param content : contenu
    Message(Utilisateur expe, Utilisateur deste, std::string location, std::string content);

    /// @brief Fonction qui renvoie le destinataire du message
    ///
    /// @return le destinataire
    Utilisateur* getDestinataire() { return destinataire; };

    /// @brief Fonction qui renvoie l'expediteur du message
    ///
    /// @return l'expediteur
    Utilisateur* getExpediteur() { return expediteur; };

    /// @brief Fonction qui renvoie le lieux du message
    ///
    /// @return le lieux
    std::string getLieu() { return lieu; };
};

#endif // MESSAGE_H
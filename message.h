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
    Utilisateur & destinataire; Utilisateur & expediteur;

public:
    Message(Utilisateur expe, Utilisateur deste, std::string location, std::string content);
    Utilisateur getDestinataire() { return destinataire; };
    Utilisateur getExpediteur() { return expediteur; };
    std::string getLieu() { return lieu; };
};

#endif // MESSAGE_H
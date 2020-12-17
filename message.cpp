#include "message.h"

Message::Message(Utilisateur expe, Utilisateur deste, std::string location, std::string content) : expediteur(expe), destinataire(deste), lieu(location), message(content) 
{
    
}

Message::~Message() {
    delete &lieu;
    delete &message;
}
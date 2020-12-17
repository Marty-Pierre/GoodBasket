#include "message.h"

Message::Message(Utilisateur expe, Utilisateur deste, std::string location, std::string content) : lieu(location),message(content),destinataire(&deste),expediteur(&expe)
{
    
}

Message::~Message() {
    delete &lieu;
    delete &message;
}
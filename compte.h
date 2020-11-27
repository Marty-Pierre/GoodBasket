#ifndef COMPTE_H
#define COMPTE_H

#include "utilisateur.h"

class Compte
{
private:
    std::string login;
    std::string password;
    Utilisateur user;

public:
    Compte();
};

#endif // COMPTE_H

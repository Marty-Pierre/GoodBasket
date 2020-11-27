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
    Compte(std::string log, std::string pass, Utilisateur u);
};

#endif // COMPTE_H

#include "compte.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe Compte
///
/// @param log login de l'utilisateur
/// @param pass mot de passe de l'utilisateur
/// @param u Utilisateur à associé à ce compte
Compte::Compte(std::string log, std::string pass, Utilisateur& u) : login(log), password(pass), user(u)
{

}

Compte::~Compte() {
    delete &login;
    delete &password;
    delete &user;
}
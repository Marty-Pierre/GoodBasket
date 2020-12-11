#ifndef COMPTE_H
#define COMPTE_H

#include "utilisateur.h"

/** @brief La classe Compte.
 ** 
 ** Elle contient un constructeur, le login et le mot de passe de l'utilisateur associé.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class Compte
{
private:
    std::string login;
    std::string password;
    const Utilisateur& user;

public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe Compte
    ///
    /// @param log login de l'utilisateur
    /// @param pass mot de passe de l'utilisateur
    /// @param u @ref Utilisateur à associé à ce compte
    Compte(std::string log, std::string pass, Utilisateur& u);
};

#endif // COMPTE_H

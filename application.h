#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "pointdecollecte.h"
#include "utilisateur.h"

class Utilisateur; 

/** @brief La classe Application.
 ** 
 ** Elle contient un constructeur, un point de collecte et 2 m�thodes pour la g�rer :
 ** @ref ajouterPc(@ref PointDeCollecte) et @ref getPC(string)
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/

class Application
{
private:
    std::vector<PointDeCollecte> pcc;
    std::vector<Utilisateur> utilisateurs;

public:
/// @brief Le constructeur par d�faut.
    ///
    /// Constructeur de la classe Application
    Application();

    /// @brief Ajoute un point de collecte a l'application
    ///
    /// @param pc PointDeCollecte un point de collecte a ajouter
    void ajouterPc(PointDeCollecte pc) { pcc.push_back(pc); };

    /// @brief Ajoute un utilisateur a l'application
    ///
    /// @param user @ref Utilisateur un utilisateur a ajouter
    void ajouterUtilisateur(Utilisateur *user) { utilisateurs.push_back(*user); };

   /// @brief Fonction qui donne le @ref PointDeCollecte si il est présent.
   ///
   /// @param lieu nom du @ref PointDeCollecte recherché
   ///
   /// @return le @ref PointDeCollecte si il est présent dans le gestionnaire ou un @ref PointDeCollecte érroné sinon
   PointDeCollecte& getPC(std::string lieu);

   /// @brief Fonction qui donne l' @ref Utilisateur si il est présent.
   ///
   /// @param nom nom de l' @ref Utilisateur recherché
   ///
   /// @return l' @ref Utilisateur si il est présent dans la liste ou un @ref Utilisateur érroné sinon
   Utilisateur& getUtilisateur(std::string nom);
   ~Application();
};

#endif // APPLICATION_H
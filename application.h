#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "pointdecollecte.h"

/** @brief La classe Application.
 ** 
 ** Elle contient un constructeur, un point de collecte et 2 méthodes pour la gérer :
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

public:
/// @brief Le constructeur par défaut.
    ///
    /// Constructeur de la classe Application
    Application();

    /// @brief Ajoute un point de collecte a l'application
    ///
    /// @param pc PointDeCollecte un point de collecte a ajouter
    void ajouterPc(PointDeCollecte pc) { pcc.push_back(pc); };

   /// @brief Fonction qui donne le @ref PointDeCollecte si il est présent.
   ///
   /// @param lieu nom du @ref PointDeCollecte recherché
   ///
   /// @return le @ref PointDeCollecte si il est présent dans le gestionnaire ou un @ref PointDeCollecte érroné sinon
   PointDeCollecte& getPC(std::string lieu);
};

#endif // APPLICATION_H
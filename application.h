#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "pointdecollecte.h"

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

public:
/// @brief Le constructeur par d�faut.
    ///
    /// Constructeur de la classe Application
    Application();

    /// @brief Ajoute un point de collecte a l'application
    ///
    /// @param pc PointDeCollecte un point de collecte a ajouter
    void ajouterPc(PointDeCollecte pc) { pcc.push_back(pc); };

   /// @brief Fonction qui donne le @ref PointDeCollecte si il est pr�sent.
   ///
   /// @param lieu nom du @ref PointDeCollecte recherch�
   ///
   /// @return le @ref PointDeCollecte si il est pr�sent dans le gestionnaire ou un @ref PointDeCollecte �rron� sinon
   PointDeCollecte& getPC(std::string lieu);
};

#endif // APPLICATION_H
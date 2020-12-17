#ifndef GESTIONNAIREPLATEFORME_H
#define GESTIONNAIREPLATEFORME_H

#include "utilisateur.h"

/** @brief La classe GestionnairePlateforme, hérite de @ref Utilisateur.
 ** 
 ** Elle contient un constructeur, le nom, le prenom et les points de collecte aux quels il est abonné .
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class GestionnairePlateforme : public Utilisateur
{
public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe GestionnairePlateforme
    ///
    /// @param n nom de l'utilisateur
    /// @param pren prenom de l'utilisateur 
    /// @param pc Points de collectes aux quels l'utilisateur est abonné
    GestionnairePlateforme(std::string n, std::string pren, std::vector<PointDeCollecte> pc, Application app);
    void repondreMessage(Message m, bool accept);
    bool estUtilisateur() { return false; };
    bool estGestionnairePlateforme() { return true; };
    ~GestionnairePlateforme();
};

#endif // GESTIONNAIREPLATEFORME_H

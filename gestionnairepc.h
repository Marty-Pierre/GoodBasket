#ifndef GESTIONNAIREPC_H
#define GESTIONNAIREPC_H

#include "utilisateur.h"
#include "pointdecollecte.h"

/** @brief La classe GestionnairePC, hérite de @ref Utilisateur.
 ** 
 ** Elle contient un constructeur, le nom, le prenom, les points de collecte aux quels il est abonné et ceux qu'il gère.
 **
 ** @version 1
 **
 ** @author P. Marty, M. Labalette, A. Larcher
 **/
class GestionnairePC : public Utilisateur
{
private:
    std::vector<PointDeCollecte> pcGeres;
public:
    /// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
    ///
    /// Constructeur de la classe GestionnairePC
    ///
    /// @param n nom de l'utilisateur
    /// @param pren prenom de l'utilisateur 
    /// @param pc Points de collectes aux quels l'utilisateur est abonné
    /// @param pcg Points de collectes que l'utilisateur gère
    GestionnairePC(std::string n, std::string pren, std::vector<PointDeCollecte> pc, std::vector<PointDeCollecte> pcg);
    bool modifyCycle(PointDeCollecte pdc, std::string date) { pdc.setDate(date); };
    void fermerPCDef(PointDeCollecte pc);
    void fermerPCTemp(PointDeCollecte pc) { pc.fermerPCTemp(); }; 
};

#endif // GESTIONNAIREPC_H

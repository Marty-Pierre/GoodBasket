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

    /// @brief Change la date du cycle
    ///
    /// @param date date du nouveau cycle 
    bool modifyCycle(PointDeCollecte pdc, std::string date) { pdc.setDate(date); };

    /// @brief ferme définitivement un point de collecte en le suppriment 
    ///
    /// @param pc PointDeCollecte le point de collecte a supprimer 
    void fermerPCDef(PointDeCollecte pc);

    /// @brief ferme temporairement un point de collecte en mettant sa date a FERME 
    ///
    /// @param pc PointDeCollecte le point de collecte a fermer temporairement
    void fermerPCTemp(PointDeCollecte pc) { pc.fermerPCTemp(); };
    ~GestionnairePC(); 
};

#endif // GESTIONNAIREPC_H

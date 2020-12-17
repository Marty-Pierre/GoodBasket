#ifndef GESTIONNAIREPC_H
#define GESTIONNAIREPC_H

#include "utilisateur.h"

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
    GestionnairePC(std::string n, std::string pren, std::vector<PointDeCollecte> pc, std::vector<PointDeCollecte> pcg, Application app);
    GestionnairePC(Utilisateur* u);
    /// @brief Change la date du cycle
    ///
    /// @param date date du nouveau cycle 
    void modifyCycle(PointDeCollecte pdc, std::string date) { pdc.setDate(date); };

    /// @brief ferme définitivement un point de collecte en le suppriment 
    ///
    /// @param pc PointDeCollecte le point de collecte a supprimer 
    void fermerPCDef(PointDeCollecte pc);

    /// @brief ferme temporairement un point de collecte en mettant sa date a FERME 
    ///
    /// @param pc PointDeCollecte le point de collecte a fermer temporairement
    void fermerPCTemp(PointDeCollecte pc) { pc.fermerPCTemp(); };

    /// @brief fonction qui ajoute a un utilisateur la gestion d'un point de controle
    ///
    /// @param pc PointDeCollecte le point de collecte a ajouter 
    void encoreDuTravail(PointDeCollecte pc) { pcGeres.push_back(pc); };

    /// @brief fonction qui regarde si c'est un utilisateur
    ///
    /// @return true si c'est un utilisateur false sinon 
    bool estUtilisateur() { return false; };

    /// @brief fonction qui regarde si c'est un GestionnairePC
    ///
    /// @return true si c'est un gestionnairePC false sinon 
    bool estGestionnairePC() { return true; };
    ~GestionnairePC(); 
};

#endif // GESTIONNAIREPC_H

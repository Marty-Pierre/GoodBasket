#include "gestionnairepc.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe GestionnairePC
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur 
/// @param pc Points de collectes aux quels l'utilisateur est abonné
/// @param pcg Points de collectes que l'utilisateur gère
GestionnairePC::GestionnairePC(std::string n, std::string pren, std::vector<PointDeCollecte> pc, std::vector<PointDeCollecte> pcg) : Utilisateur(n, pren, pc), pcGeres(pcg)
{

}

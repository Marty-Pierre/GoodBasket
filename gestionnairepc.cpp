#include "gestionnairepc.h"

GestionnairePC::GestionnairePC(std::string n, std::string pren, std::vector<PointDeCollecte> pc, std::vector<PointDeCollecte> pcg) : Utilisateur(n, pren, pc), pcGeres(pcg)
{

}

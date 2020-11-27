#ifndef GESTIONNAIREPC_H
#define GESTIONNAIREPC_H

#include "utilisateur.h"
#include "pointdecollecte.h"

class GestionnairePC : public Utilisateur
{
private:
    std::vector<PointDeCollecte> pcGeres;
public:
    GestionnairePC(std::string n, std::string pren, std::vector<PointDeCollecte> pc, std::vector<PointDeCollecte> pcg); 
};

#endif // GESTIONNAIREPC_H

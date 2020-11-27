#ifndef GESTIONNAIREPC_H
#define GESTIONNAIREPC_H

#include "utilisateur.h"
#include "pointdecollecte.h"

class GestionnairePC : public Utilisateur
{
private:
    std::vector<PointDeCollecte> pcGeres;
public:
    GestionnairePC();
};

#endif // GESTIONNAIREPC_H

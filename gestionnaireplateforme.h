#ifndef GESTIONNAIREPLATEFORME_H
#define GESTIONNAIREPLATEFORME_H

#include "utilisateur.h"

class GestionnairePlateforme : public Utilisateur
{
public:
    GestionnairePlateforme(std::string n, std::string pren, std::vector<PointDeCollecte> pc);
};

#endif // GESTIONNAIREPLATEFORME_H

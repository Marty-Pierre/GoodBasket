#include "gestionnaireplateforme.h"
#include "gestionnairepc.h"
#include "utilisateur.h"

/// @brief Le constructeur par défaut attribue les valeurs passée en paramètre.
///
/// Constructeur de la classe GestionnairePlateforme
///
/// @param n nom de l'utilisateur
/// @param pren prenom de l'utilisateur 
/// @param pc Points de collectes aux quels l'utilisateur est abonné
GestionnairePlateforme::GestionnairePlateforme(std::string n, std::string pren, std::vector<PointDeCollecte> pc, Application app) : Utilisateur(n, pren, pc, app)
{

}

    /// @brief procedure qui permet la création d'un point de controle selon le message envoyer
    ///
    /// @param m Message : message transmit
    /// @param accept bool : "feu vert"
void GestionnairePlateforme::repondreMessage(Message m, bool accept) {
    if (accept) {
        PointDeCollecte pc = PointDeCollecte(m.getLieu());
        goodBasket->ajouterPc(pc);
        GestionnairePC* gpc;
        if (m.getExpediteur()->estGestionnairePC()) {
            gpc = dynamic_cast<GestionnairePC*>(&(*m.getExpediteur()));
            gpc->encoreDuTravail(pc);
        }
        if (m.getExpediteur()->estUtilisateur()) {
            Utilisateur* u = &(*m.getExpediteur());
            std::string nom = u->getNom();
            goodBasket->promotion(*u);
            gpc = dynamic_cast<GestionnairePC*>(&(goodBasket->getUtilisateur(nom)));
            gpc->encoreDuTravail(pc);
        }
    }
    removeMessage(m);
}

GestionnairePlateforme::~GestionnairePlateforme() {
    
}
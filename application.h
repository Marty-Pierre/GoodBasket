#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "pointdecollecte.h"

class Application
{
private:
    std::vector<PointDeCollecte> pcc;

public:
    Application();
    void ajouterPc(PointDeCollecte pc) { pcc.push_back(pc); };
    PointDeCollecte& getPC(std::string lieu);
    ~Application();
};

#endif // APPLICATION_H
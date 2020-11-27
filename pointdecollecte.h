#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H


class PointDeCollecte
{
private:
    std::string lieu;
    std::vector<Produit> produitsDuPC;
    bool ouvert;
public:
    PointDeCollecte();
};

#endif // POINTDECOLLECTE_H

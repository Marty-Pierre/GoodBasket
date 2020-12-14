#include <vector>
#include "produit.h"
#include "gestionnaireproduits.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    GestionnaireProduits* gp = new GestionnaireProduits();
    Produit* p = new Produit(string("Snack"), string("12u"), 4);
    Produit* p6 = new Produit(string("Razor"), string("1u"), 140);
    Produit *p7 = new Produit(string("P�tes"), string("2u"), 24);
    Produit& p1 = gp->getProd(string("Snack"));
    Produit* error = new Produit(string("erreur"), string(""), -1);  
    
    cout << "Test pour ajouterProduit (test faux qui renvoie vrai) \n";
    if(error->isEqual(p1)){
        cout << "C'est good\n";
    }else{
        cout << "C'est pas good\n";
    }

    gp->ajouterProduit(*p);
    Produit& p2 = gp->getProd(string("Snack"));

    cout << "Test pour ajouterProduit (test vrai qui renvoie vrai)\n";
    if(p->isEqual(p2)){
        cout << "C'est good\n";
    }else{
        cout << "C'est pas good\n";
    }

    gp->ajouterProduit(*p6);

    cout << "Test pour supprProduit (test vrai qui renvoie vrai)\n";
    if(gp->supprProduit("Razor")){
        cout << "C'est good\n";
    }else{
        cout << "C'est pas good\n";
    }

    cout << "Test pour supprProduit (test faux qui renvoie vrai)\n";
    if(!gp->supprProduit("P�tes")){
        cout << "C'est good\n";
    }else{
        cout << "C'est pas good\n";
    }
}
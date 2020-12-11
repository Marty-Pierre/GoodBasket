#include <vector>
#include "../produit.h"*
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    GestionnaireProduit gp = new GestionnaireProduit();
    Produit p = new Produit(string("Snack"), string("12u"), 4);
    Produit& p1 = gp.getProd(string("Snack"));
    Produit* error = new Produit(string("erreur"), string(""), -1);  
    
    if(error == p1){
        cout << "C'est good";
    }else{
        cout << "C'est pas good";
    }

    gp.ajouterProduit(p);
    Produit& p2 = gp.getProd(string("Snack"));

    if(p == p2){
        cout << "C'est good";
    }else{
        cout << "C'est pas good";
    }
}
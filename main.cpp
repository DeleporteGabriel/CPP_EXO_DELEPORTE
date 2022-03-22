#include "lieu.cpp"

#include <iostream>
#include <string>

using namespace std;

int main(){

    //Exercice 1
    cout << "Voulez-vous choisir 1. le numéro 1 ou 2. le numéro 2?" << endl;
    int reponse;
    cin >> reponse;

    if (reponse == 1) {
        cout << "Vous avez choisit le numéro 1"<<endl;
    }
    else if (reponse == 2) {
        cout << "Vous avez choisit le numéro 2"<<endl;
    }
    else {
        cout << "Mais enfin, il faut  choisir !"<<endl;
    }

    //Exercice 2
    cout << "Voulez-vous choisir le parc ou le chemin ?" << endl;
    string route;
    cin >> route;

    if (route == "parc") {
        cout << "Vous avez choisit le parc"<<endl;
    }
    else if (route == "chemin") {
        cout << "Vous avez choisit le chemin"<<endl;
    }
    else {
        cout << "Bon bah du coup vous restez sur place, je suppose." << endl;
    }

    //Exercice 3
    Lieu * laForet = new Lieu("forêt", "Il y a des arbres ici", 4);
    laForet -> setBranches("chemin", "maison");

    Lieu * leChemin = new Lieu("chemin", "Il y a une route ici", 0);
    leChemin -> setBranches("foret", "maison");

    Lieu * laMaison = new Lieu("maison", "Il y a des meubvles ici", 2);
    laMaison -> setBranches("foret", "chemin");

    Lieu * lieuActuel = laForet;
    string suite;

    while (true){
        cout << "Où veux-tu aller? " << lieuActuel -> getTableau(0) << " ou " << lieuActuel -> getTableau(1) << endl;
        cin >> suite;

        if (suite == "foret") {
            lieuActuel = laForet;
        }
        else if (suite == "chemin") {
            lieuActuel = leChemin;
        }
        else if (suite == "maison") {
            lieuActuel = laMaison;
        }
        cout << lieuActuel -> getDescription() << endl;
    }

}
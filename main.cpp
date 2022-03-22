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

    //Exercice 3 (et 5 un peu aussi et le 6 du coup en fait tout sauf le 8 car manque de temps lol)
    int endurance = 100;

    Lieu * laForet = new Lieu("forêt", "Il y a des arbres ici", 4);
    laForet -> setBranches("chemin", "maison");

    Lieu * leChemin = new Lieu("chemin", "Il y a une route ici", 0);
    leChemin -> setBranches("foret", "maison");

    Lieu * laMaison = new Lieu("maison", "Il y a des meubvles ici", 2);
    laMaison -> setBranches("foret", "chemin");

    Lieu * lieuActuel = laForet;
    string suite;
    int campoupacamp;
    int reposoupas;

    while (endurance > 0){
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



        if (lieuActuel -> getCampement() == false){
        cout << "Voulez vous installer un campement ici? 1. oui 2. non" << endl;
        cin >> campoupacamp;
        if (campoupacamp == 1)
        {
            lieuActuel -> mettreCampement();
        }
        else {
            cout << "vous décidez de ne rien faire" << endl;
        }

        }

        endurance = endurance - lieuActuel -> getDifficulty();  
        cout << lieuActuel -> getDescription() << endl;
        if (lieuActuel -> getCampement() == true) {
            cout << "Il y a un campement ici. Voulez vous vous y reposer? 1. oui 2. non" << endl;
            cin >> reposoupas;

            if (reposoupas == 1){
                cout << "vous vous reposez" <<endl;
                endurance = lieuActuel -> repos(endurance);
            }
            else {
                cout << "vous ne faites rien comme un vrai bonhomme" <<endl;
            }

        }
        if (endurance < 0) {endurance = 0;}
        cout << "votre endurance restante est de "<< endurance << endl;
    }
}
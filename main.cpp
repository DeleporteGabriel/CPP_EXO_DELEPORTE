#include <iostream>
#include <string>

using namespace std;

int main(){

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

}
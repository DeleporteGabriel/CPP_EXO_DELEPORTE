#include <iostream>

using namespace std;

int main(){

    cout << "Voulez-vous choisir 1. le numéro 1 ou 2. le numéro 2?" << endl;
    int reponse;
    cin >> reponse;

    if (reponse == 1) {
        cout << "Vous avez choisit le numéro 1"<<endl;
    }
    else (reponse == 2) {
        cout << "Vous avez choisit le numéro 2"<<endl;
    }
}
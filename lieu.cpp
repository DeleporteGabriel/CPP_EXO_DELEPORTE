#include "lieu.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Lieu::Lieu(): _nom("NomLieu"), _description("Ce lieu existe"),_difficulty(0) {}

Lieu::Lieu(string name,string description,int difficulty) : _nom(name),_description(description),_difficulty(difficulty) {}

void Lieu::setBranches(string _tableau1, string _tableau2) {
    _tableau[0] = _tableau1;
    _tableau[1] = _tableau2;
}

string Lieu::getTableau(int valeurTableau) {
    return _tableau[1];
}

string Lieu::getDescription() {
    return _description;
}

int Lieu::getDifficulty() {
    return _difficulty;
}
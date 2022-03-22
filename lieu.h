#ifndef LIEU_H
#define LIEU_H


#include <string>
#include <vector>

using namespace std;

class Lieu {

    private:
        string _nom;
        string _description;
        int _difficulty;
        string _tableau[2] {"salut c'est moi"};

    public:
        Lieu();
        Lieu(string _nom, string _description, int _difficulty);
        void setBranches(string _tableau1, string _tableau2);
        string getTableau(int valeurTableau);
        string getDescription();
        
};

#endif
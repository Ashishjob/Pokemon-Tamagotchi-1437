#ifndef FIRESTARTER_H
#define FIRESTARTER_H
#include "Pokemon.h"
#include <string>

using namespace std;

class FireStarter: public Pokemon{
    
    private:
        string speciesName = "Charmander";
    
    public:
        FireStarter();
        FireStarter(string speciesName);
        void train();
        void heal();
        void feed();
        void play();
        void evolutionCheck();
        void warningCheck();
        bool gameLoss();
        void limitControl();
        void setSpeciesName(string pokemonName);
        string getSpeciesName();
};

#endif
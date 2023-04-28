#ifndef GRASSSTARTER_H
#define GRASSSTARTER_H
#include "Pokemon.h"
#include <string>

using namespace std;

class GrassStarter: public Pokemon{
    
    private:
        string speciesName = "Bulbasaur";
    
    public:
        GrassStarter();
        GrassStarter(string speciesName);
        void train();
        void heal();
        void feed();
        void play();
        void viewStats();
        void evolutionCheck();
        void warningCheck();
        bool gameLoss();
        void limitControl();
        void setSpeciesName(string pokemonName);
        void saveGame();
        void loadGame();
        string getSpeciesName();
};

#endif
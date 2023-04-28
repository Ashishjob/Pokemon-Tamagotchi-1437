#ifndef WATERSTARTER_H
#define WATERSTARTER_H
#include "Pokemon.h"
#include <string>

using namespace std;

class WaterStarter: public Pokemon{
    
    private:
        string speciesName = "Squirtle";
    
    public:
        WaterStarter();
        WaterStarter(string speciesName);
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
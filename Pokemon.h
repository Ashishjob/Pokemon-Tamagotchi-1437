#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
    public:
        Pokemon(); //First constructor to set the stats of the chosen Pokemon

        // change it so that it depends on the selected pokemon
        virtual void play() = 0; // Increases happiness levels (+5) and hunger levels (+10) but decreases energy levels (-10)
        virtual void heal() = 0; // Increases energy levels (+5) but decreases happiness levels (-5)
        virtual void feed() = 0; // Decreases hunger levels (-10) and increases happiness levels (+5) and energy levels (+5)
        virtual void train() = 0; // Increases strength levels (+1) and hunger levels (+20) but decreases energy levels (-15)

        virtual void limitControl(); // Keeps everything within a range of 0-100
        virtual void viewStats(); // Displays each level
        virtual void warningCheck(); // Gives a warning when a specific level is too low
        virtual void evolutionCheck();
        virtual void saveGame();

        void loadGame();
        void resetGame();
        void setSpeciesName();

        string getSpeciesName();

        virtual bool gameLoss() = 0;
        
    protected:
        int hunger = 50;
        int happiness = 50;
        int level = 1;
        int health = 50;

    private:
        string fileName = "saveFile.txt";
        string speciesName = "";
};

#endif
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
    public:
        Pokemon(); //First constructor to set the stats of the chosen Pokemon

        int getHungerLevel(); // returns the hunger
        int getHappinessLevel(); // returns the happiness level
        int getStrengthLevel(); // returns the strength/level
        int getHealthLevel(); // returns its energy

        // change it so that it depends on the selected pokemon
        virtual void playingPokemon() = 0; // Increases happiness levels (+5) and hunger levels (+10) but decreases energy levels (-10)
        virtual void healingPokemon() = 0; // Increases energy levels (+5) but decreases happiness levels (-5)
        virtual void feedingPokemon() = 0; // Decreases hunger levels (-10) and increases happiness levels (+5) and energy levels (+5)
        virtual void trainingPokemon() = 0; // Increases strength levels (+1) and hunger levels (+20) but decreases energy levels (-15)

        void setHungerLevel(int);
        void setHappinessLevel(int);
        void setStrengthLevel(int);
        void setHealthLevel(int);

        virtual void randomChange(); // Randomly changes one of the stats every 3 turns except for increase in strength level (+- 10)
        virtual void limitControl(); // Keeps everything within a range of 0-100
        virtual void displayLevels(); // Displays each level
        virtual void levelWarning(); // Gives a warning when a specific level is too low
        
    protected:
        int hungerLevel;
        int happinessLevel;
        int strengthLevel;
        int healthLevel;
        int turn = 0;
};

#endif
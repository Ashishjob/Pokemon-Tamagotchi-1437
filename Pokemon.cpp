#include "Pokemon.h"
#include <iostream>
#include <string>

using namespace std;

Pokemon::Pokemon() {
    speciesName = "";
}

void Pokemon::setSpeciesName(string pokemonName) {
    speciesName = pokemonName;
}

string Pokemon::getSpeciesName() {
    return speciesName;
}

void Pokemon::play() {
}

void Pokemon::heal() {
}

void Pokemon::feed() {
}

void Pokemon::train() {
}

void Pokemon::limitControl() {
    if (health > 100) {
        health = 100;
    }
    if (hunger < 0) {
        hunger = 0;
    }
    if (happiness > 100) {
        happiness = 100;
    }
}

void Pokemon::viewStats() {
    cout << speciesName << "'s stats are :" << endl;
    cout << "Level: " << level << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Health: " << health << endl;
}

void Pokemon::warningCheck() {
    if (health <= 15) {
        cout << "Woah there pal, your " << speciesName << " isn't looking so healthy" << endl;
    }
    if (hunger >= 85) {
        cout << "You really don't care about how hungry your " << speciesName << " is" << endl;
    }
    if (happiness <= 15) {
        cout << "Damn, you really don't care about your " << speciesName << "'s happiness" << endl;
    }
}

void Pokemon::evolutionCheck() {
    if (level == 16) {
        cout << "Looks like your " << speciesName << " is ready for its first evolution!!!" << endl;
        cout << "";
    }
}

void Pokemon::saveGame() {
    // save all the stats to saveFile.txt
}

void Pokemon::loadGame() {
    // read saveFile.txt and adjust the stats to match accordingly
}

void Pokemon::resetGame() {
    // whenever the game is finished win or loss, delete saveFile.txt
}

bool Pokemon::gameLoss() {
    if ((health == 0 || hunger == 100 || happiness == 0)) {
        cout << "boohoo you lost. ratio. bozo" << endl;
        return true;
    }
    else if (level == 32) {
        cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
        cout << " ";
        return true;
    }
    else {
        return false;
    }
}
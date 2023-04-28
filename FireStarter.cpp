#include "Pokemon.h"
#include "FireStarter.h"
#include <iostream>
#include <string>

using namespace std;

FireStarter::FireStarter() {
    speciesName = "Charmander";
}

void FireStarter::setSpeciesName(string pokemonName) {
    speciesName = pokemonName;
}

string FireStarter::getSpeciesName() {
    return speciesName;
}

void FireStarter::play() {
    happiness += 5;
    hunger += 15;
}

void FireStarter::heal() {
    health += 10;
    happiness += 15;
}

void FireStarter::feed() {
    hunger -= 10;
    health += 5;
}

void FireStarter::train() {
    level += 1;
    happiness -= 15;
    hunger += 20;
    health -= 20;
}

void FireStarter::limitControl() {
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

void FireStarter::viewStats() {
    cout << speciesName << "'s stats are :" << endl;
    cout << "Level: " << level << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Health: " << health << endl;
}

void FireStarter::warningCheck() {
    if (health <= 15 && health != 0) {
        cout << "Woah there pal, your " << speciesName << " isn't looking so healthy" << endl;
    }
    if (hunger >= 85 && hunger != 100) {
        cout << "You really don't care about how hungry your " << speciesName << " is" << endl;
    }
    if (happiness <= 15 && happiness != 0) {
        cout << "Damn, you really don't care about your " << speciesName << "'s happiness" << endl;
    }
}

void FireStarter::evolutionCheck() {
    if (level == 16) {
        cout << "Looks like your Charmander is ready for its first evolution!!!" << endl;
        speciesName = "Charmeleon";
        // print the ASCII art for Charmeleon
        cout << "Woahhhh, look at your new Charmeleon!!";
    }
}

void FireStarter::saveGame() {
    // save all the stats to saveFile.txt
}

bool FireStarter::gameLoss() {
    if ((health == 0 || hunger == 100 || happiness == 0)) {
        cout << "boohoo you lost. ratio. bozo" << endl;
        return true;
    }
    else if (level == 32) {
        cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
        // output the final evolution ASCII art from its .txt file
        return true;
    }
    else {
        return false;
    }
}
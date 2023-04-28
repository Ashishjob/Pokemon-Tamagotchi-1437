#include "Pokemon.h"
#include "WaterStarter.h"
#include <iostream>
#include <string>

using namespace std;

WaterStarter::WaterStarter() {
    speciesName = "Squirtle";
}

void WaterStarter::setSpeciesName(string pokemonName) {
    speciesName = pokemonName;
}

string WaterStarter::getSpeciesName() {
    return speciesName;
}

void WaterStarter::play() {
    happiness += 5;
    hunger += 15;
}

void WaterStarter::heal() {
    health += 10;
    happiness += 15;
}

void WaterStarter::feed() {
    hunger -= 10;
    health += 5;
}

void WaterStarter::train() {
    level += 1;
    happiness -= 15;
    hunger += 20;
    health -= 20;
}

void WaterStarter::limitControl() {
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

void WaterStarter::viewStats() {
    cout << speciesName << "'s stats are :" << endl;
    cout << "Level: " << level << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Health: " << health << endl;
}

void WaterStarter::warningCheck() {
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

void WaterStarter::evolutionCheck() {
    if (level == 16) {
        cout << "Looks like your Squirtle is ready for its first evolution!!!" << endl;
        speciesName = "Wartortle";
        // print the ASCII art for Wartortle
        cout << "Woahhhh, look at your new Wartortle!!";
    }
}

void WaterStarter::saveGame() {
    // save all the stats to saveFile.txt
}

bool WaterStarter::gameLoss() {
    if ((health <= 0 || hunger >= 100 || happiness <= 0)) {
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
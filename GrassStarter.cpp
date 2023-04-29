#include "Pokemon.h"
#include "GrassStarter.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

GrassStarter::GrassStarter() {
    speciesName = "Bulbasaur";
}

void GrassStarter::setSpeciesName(string pokemonName) {
    speciesName = pokemonName;
}

string GrassStarter::getSpeciesName() {
    return speciesName;
}

void GrassStarter::play() {
    happiness += 5;
    hunger += 15;
}

void GrassStarter::heal() {
    health += 10;
    happiness += 15;
}

void GrassStarter::feed() {
    hunger -= 10;
    health += 5;
}

void GrassStarter::train() {
    level += 1;
    happiness -= 15;
    hunger += 20;
    health -= 20;
}

void GrassStarter::limitControl() {
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

void GrassStarter::viewStats() {
    cout << speciesName << "'s stats are :" << endl;
    cout << "Level: " << level << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Health: " << health << endl;
}

void GrassStarter::warningCheck() {
    if (health <= 15 && health > 0) {
        cout << "Woah there pal, your " << speciesName << " isn't looking so healthy" << endl;
    }
    if (hunger >= 85 && hunger < 100) {
        cout << "You really don't care about how hungry your " << speciesName << " is" << endl;
    }
    if (happiness <= 15 && happiness > 0) {
        cout << "Damn, you really don't care about your " << speciesName << "'s happiness" << endl;
    }
}

void GrassStarter::evolutionCheck() {
    string line;
    if (level == 16) {
        cout << "Looks like your Bulbasaur is ready for its first evolution!!!" << endl;
      level += 1;

        fstream inputIvysaurFile;
        inputIvysaurFile.open("Pokemon-Tamagotchi-1437-main/.txt files/Ivysaur.txt");
        while (getline(inputIvysaurFile, line)) {
          cout << line << endl;
        }
        inputIvysaurFile.close();
      
        speciesName = "Ivysaur";
        cout << "Woahhhh, look at your new Ivysaur!!" << endl;
    }
}

void GrassStarter::saveGame() {
    // save all the stats to saveFile.txt
}


bool GrassStarter::gameLoss() {
    string line;
    if ((health <= 0 || hunger >= 100 || happiness <= 0)) {
        cout << "boohoo you lost. ratio. bozo" << endl;
        return true;
    }
    else if (level == 32) {
        cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
      fstream inputVenusaurFile;
    inputVenusaurFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Venusaur.txt");
    while (getline(inputVenusaurFile, line)) {
      cout << line << endl;
    }
    inputVenusaurFile.close();
        // output the final evolution ASCII art from its .txt file
        return true;
    }
    else {
        return false;
    }
}

#include "FireStarter.h"
#include "Pokemon.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

FireStarter::FireStarter() { speciesName = "Charmander"; }

void FireStarter::setSpeciesName(string pokemonName) {
  speciesName = pokemonName;
}

string FireStarter::getSpeciesName() { return speciesName; }

void FireStarter::play() {
  happiness += 5;
  hunger += 15;
  cout << speciesName << " had so much fun messing around with a blowtorch!!" << endl;
}

void FireStarter::heal() {
  health += 10;
  happiness += 15;
  cout << speciesName << " got so much rest after being locked in a heated car!!" << endl;
}

void FireStarter::feed() {
  hunger -= 10;
  health += 5;
  cout << speciesName << " was really taking that kerosene in!!" << endl;
}

void FireStarter::train() {
  level += 1;
  happiness -= 15;
  hunger += 20;
  health -= 20;
  cout << speciesName << " was really ruthless against that caterpie's pc and made it overheat like crazyyyy!!" << endl;
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
  if (health <= 15 && health > 0) {
    cout << "Woah there pal, your " << speciesName
         << " isn't looking so healthy, you should leave it in a heated car for a bit" << endl;
  }
  if (hunger >= 85 && hunger < 100) {
    cout << "You really don't care about how hungry your " << speciesName
         << " is, give it some kerosene" << endl;
  }
  if (happiness <= 15 && happiness > 0) {
    cout << "Damn, you really don't care about your " << speciesName
         << "'s happiness, give it that blowtorch" << endl;
  }
}

void FireStarter::evolutionCheck() {
  string line;
  if (level == 16) {
    cout << "Looks like your Charmander is ready for its first evolution!!!"
         << endl;
    level += 1;

    fstream inputCharmeleonFile;
    inputCharmeleonFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Charmeleon.txt");
    while (getline(inputCharmeleonFile, line)) {
      cout << line << endl;
    }
    inputCharmeleonFile.close();

    speciesName = "Charmeleon";
    cout << "Woahhhh, look at your new Charmeleon!!" << endl;
  }
}

void FireStarter::saveGame() {
  ofstream saveData;
  saveData.open("saveFile.txt");
  saveData << level << endl << hunger << endl << health << endl << happiness << endl;
}

void FireStarter::loadGame() {
  ifstream loadData;
  loadData.open("saveFile.txt");
  loadData >> level >> hunger >> health >> happiness;
}

bool FireStarter::gameLoss() {
    string line;
  if ((health <= 0 || hunger >= 100 || happiness <= 0)) {
    cout << "boohoo you lost. ratio. bozo" << endl;
    return true;
  } else if (level == 32) {
    cout << "Congrats you've witnessed your Pokemon travel from its first "
            "stage to its final Evolution!!!"
         << endl;
    fstream inputCharizardFile;
    inputCharizardFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Charizard.txt");
    while (getline(inputCharizardFile, line)) {
      cout << line << endl;
    }
    inputCharizardFile.close();
    return true;
  } else {
    return false;
  }
}
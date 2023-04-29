#include "WaterStarter.h"
#include "Pokemon.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

WaterStarter::WaterStarter() { speciesName = "Squirtle"; }

void WaterStarter::setSpeciesName(string pokemonName) {
  speciesName = pokemonName;
}

string WaterStarter::getSpeciesName() { return speciesName; }

void WaterStarter::play() {
  happiness += 5;
  hunger += 15;
  cout << speciesName << " had so much fun making everyone slip!!" << endl;
}

void WaterStarter::heal() {
  health += 10;
  happiness += 15;
  cout << speciesName << " got so much rest from nearly drowning!!" << endl;
}

void WaterStarter::feed() {
  hunger -= 10;
  health += 5;
  cout << speciesName << " could not control itself from showing its munch tendencies!!" << endl;
}

void WaterStarter::train() {
  level += 1;
  happiness -= 15;
  hunger += 20;
  health -= 20;
  cout << speciesName << " gave the Geodude CS Major a shower for once!!" << endl;
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
  if (health <= 15 && health > 0) {
    cout << "Woah there pal, your " << speciesName
         << " isn't looking so healthy, let it nearly drown in the water to make it feel healthier" << endl;
  }
  if (hunger >= 85 && hunger < 100) {
    cout << "You really don't care about how hungry your " << speciesName
         << " is, let it showcase its true munch tendencies" << endl;
  }
  if (happiness <= 15 && happiness > 0) {
    cout << "Damn, you really don't care about your " << speciesName
         << "'s happiness, let it witness the joy of making people slip" << endl;
  }
}

void WaterStarter::evolutionCheck() {
  string line;
  if (level == 16) {
    cout << "Looks like your Squirtle is ready for its first evolution!!!"
         << endl;
    level += 1;

    fstream inputWartortleFile;
    inputWartortleFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Wartortle.txt");
    while (getline(inputWartortleFile, line)) {
      cout << line << endl;
    }
    inputWartortleFile.close();

    speciesName = "Wartortle";
    cout << "Woahhhh, look at your new Wartortle!!" << endl;
  }
}

void WaterStarter::saveGame() {
  ofstream saveData;
  saveData.open("saveFile.txt");
  saveData << level << endl << hunger << endl << health << endl << happiness << endl;
}

void WaterStarter::loadGame() {
  ifstream loadData;
  loadData.open("saveFile.txt");
  loadData >> level >> hunger >> health >> happiness;
}

bool WaterStarter::gameLoss() {
    string line;
  if ((health <= 0 || hunger >= 100 || happiness <= 0)) {
    cout << "boohoo you lost. ratio. bozo" << endl;
    return true;
  } else if (level == 32) {
    cout << "Congrats you've witnessed your Pokemon travel from its first "
            "stage to its final Evolution!!!"
         << endl;
    
    fstream inputBlastoiseFile;
    inputBlastoiseFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Blastoise.txt");
    while (getline(inputBlastoiseFile, line)) {
      cout << line << endl;
    }
    inputBlastoiseFile.close();
    return true;
  } else {
    return false;
  }
}
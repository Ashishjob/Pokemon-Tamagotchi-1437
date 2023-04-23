#include "Pokemon.h"

using namespace::std;

Pokemon::Pokemon() {
    hungerLevel  = 0;
    happinessLevel = 100;
    strengthLevel = 10;
    healthLevel = 100;
}

int Pokemon::getHungerLevel() {
    return hungerLevel;
}

int Pokemon::getHappinessLevel() {
    return happinessLevel;
}

int Pokemon::getStrengthLevel() {
    return strengthLevel;
}

int Pokemon::getHealthLevel() {
    return healthLevel;
}

void Pokemon::setHungerLevel(int hunger) {
    hungerLevel = hunger;
}

void Pokemon::setHappinessLevel(int happiness) {
    happinessLevel = happiness;
}

void Pokemon::setStrengthLevel(int strength) {
    strengthLevel = strength;
}

void Pokemon::setHealthLevel(int health) {
    healthLevel = health;
}


# Pokemon-Tamagotchi

## **Description**

&ensp;&thinsp; TamaGatch ‘Em All is a Pokemon-themed Tamagotchi game where players choose one of three starters (Bulbasaur, Squirtle, or Charmander) and take care of their selected Pokemon until they evolve (victory) or run away due to neglect (defeat). Players must balance four activities to increase their Pokemon's level while keeping it happy, fed, and healthy. Each starter Pokemon begins with 50% of all stats except for its Level starting at 1, and players receive warnings when stats are at risk. The game includes a save function for players to resume later. 

&ensp;&thinsp; The game's structure includes a base Pokemon class and three derived classes for each starter Pokemon, each with unique effects to the selected Pokemon.

-------------------------------------------------------

## **UML Diagram**

![image](https://user-images.githubusercontent.com/114624617/234179691-ddbd600d-a360-4ad1-b155-4b53131acdd6.png)

---

## Base & Derived Class Descriptions

## Pokemon Base Class

#### Constructors
- Pokemon (happiness, hunger, health, level)
  - Overloaded Constructor that sets up the basic stat levels for the Pokemon

#### Getters
- **int getTurn()** 
  - Returns the turn that the Player is on

#### Setters
- **void setTurn(int turnNumber)** 
  - Sets the private variable turn equal to turnNumber

#### Private
- **string fileName = "saveFile.txt"**
  - Names the save file as saveFile.txt
- **int turn = 1**
  - Sets the turn variable equal to 1 for the first turn

#### Protected
- **int happiness = 50**
  - Sets the beginning happiness stat to 50
- **int hunger = 50**
  - Sets the beginning hunger stat to 50
- **int health = 50**
  - Sets the beginning health stat to 50
- **int level = 1**
  - Sets the beginning level to 1

#### Virtual
- **virtual void warningCheck()** 
  - Prints the warning message for the stats at risk without the speciesName of the Pokemon

#### Pure Virtual
- **virtual void heal() = 0** 
  - Makes the heal function accessible to all Pokemon, however, the result of this function will be different to each Pokemon
- **virtual void feed() = 0** 
  - Makes the feed function accessible to all Pokemon, however, the result of this function will be different to each Pokemon
- **virtual void play() = 0** 
  - Makes the play function accessible to all Pokemon, however, the result of this function will be different to each Pokemon
- **virtual void evolve() = 0** 
  - Makes the evolve function accessible to all Pokemon, however, the result of this function will be different to each Pokemon

#### Basic Functions
- **void viewStats()** 
  - Prints a list of the Pokemon's stats to be easily viewed by the Player
- **void train()** 
  - A function that alter the Pokemon's stats: Level +1; Happiness -10; Hunger +20; Health -20
- **void loadGame()** 
  - Loads up the player's previous playtime with their previous Pokemon's stats
- **void resetGame()** 
  - Deletes the save file for the player after the game is decided as a victory or defeat
- **void saveGame(saveName, happinessLevel, hungerLevel, healthLevel, level)** 
  - Saves the Pokemon's current stats to a .txt file that can be accessed when the player returns





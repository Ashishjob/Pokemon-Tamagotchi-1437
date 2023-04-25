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
- **int getHunger()** 
  - Returns the hunger stat for each Pokemon
- **int getHealth()** 
  - Returns the health stat for each Pokemon
- **int getLevel()** 
  - Returns the level for each Pokemon
- **vint getHappiness()** 
  - Returns the happiness stat for each Pokemon
- **int getTurn()** 
  - Returns the turn that the Player is on

#### Setters
- **void setHunger(int hungerLevel)** 
  - Sets the private variable Hunger
- **void setHealth(int healthLevel)** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void setLevel(int pokemonLevel)** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void setHappiness(int happinessLevel)** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void setTurn(int turnNumber)** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*

#### Private
- **string fileName = "saveFile.txt"**
  - **
- **int turn = 1**
  - **
#### Protected
- **int happiness = 50**
  - **
- **int hunger = 50**
  - **
- **int health = 50**
  - **
- **int level = 1**
  - **
#### Virtual
- **virtual void warningCheck()** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
#### Pure Virtual
- **virtual void heal() = 0** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **virtual void feed() = 0** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **virtual void play() = 0** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **virtual void evolve() = 0** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
#### Basic Functions
- **void viewStats()** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void train()** 
  - *A function that alter the Pokemon's stats: Level +1; Happiness -10; Hunger +20; Health -20*
- **void loadGame()** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void resetGame()** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*
- **void saveGame(saveName, happinessLevel, hungerLevel, healthLevel, level)** 
  - *Prints a list of the Pokemon's stats to be easily viewed by the Player*





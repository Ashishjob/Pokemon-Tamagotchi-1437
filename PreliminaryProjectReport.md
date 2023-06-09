# Tamagotchi Project Preliminary Report

## **Description**

&ensp;&thinsp; TamaGatch ‘Em All is a Pokemon-themed Tamagotchi game where players choose one of three starters (Bulbasaur, Squirtle, or Charmander) and take care of their selected Pokemon until they evolve (victory) or run away due to neglect (defeat). Players must balance four activities to increase their Pokemon's level while keeping it happy, fed, and healthy. Each starter Pokemon begins with 50% of all stats except for its Level starting at 1, and players receive warnings when stats are at risk. The game includes a save function for players to resume later. 

&ensp;&thinsp; The game's structure includes a base Pokemon class and three derived classes for each starter Pokemon, each with unique effects to the selected Pokemon.

-------------------------------------------------------

## **UML Diagram**

![image](https://user-images.githubusercontent.com/114624617/234475764-76a48e5a-2a77-4f03-a68b-db452d0c7fc8.png)

---

## Base & Derived Class Descriptions :

### Pokemon Base Class

- The Pokemon base class is used to set the common characteristics and functionalities of each Pokemon- through initializing its stats and it has virtual classes that get overridden by the derived classes that effect its stats to output a different message. In addition to these, it also includes game functions that can save, load, and/or reset the game.

#### Constructors
- **Pokemon (happiness, hunger, health, level);** <h6>Overloaded Constructor that sets up the basic stat levels for the Pokemon</h6>

#### Getters
- **string getSpeciesName();** <h6>Returns the set empty string of the selected Pokemon</h6>

#### Setters
- **void setSpeciesName(string pokemonName);** <h6>Sets the private variable speciesName to pokemonName</h6>

#### Private
- **string fileName = "saveFile.txt";** <h6>Names the save file as saveFile.txt</h6>
- **int turn = 1;** <h6>Sets the turn variable equal to 1 for the first turn</h6>
- **string speciesName = "";** <h6>Sets the speciesName variable equal to an empty string to be changed later</h6>

#### Protected
- **int happiness = 50;** <h6>Sets the beginning happiness stat to 50</h6>
- **int hunger = 50;** <h6>Sets the beginning hunger stat to 50</h6>
- **int health = 50;** <h6>Sets the beginning health stat to 50</h6>
- **int level = 1;** <h6>Sets the beginning level to 1</h6>

#### Virtual
- **virtual void warningCheck();**  <h6>Prints the warning message for the stats at risk without the speciesName of the Pokemon</h6>
- **virtual void train();**  <h6>A function that alters the Pokemon's stats: Level +1, Happiness -10, Hunger +20, Health -20 without any statements</h6>
- **virtual void limitControl();** <h6>A function that does not allow stats to go beyond their best possible limits (100 happiness, 100 health, 0 hunger)

#### Pure Virtual
- **virtual void heal() = 0;**  <h6>Makes the heal function accessible to all Pokemon, however, the result of this function will be different to each Pokemon</h6>
- **virtual void feed() = 0;**  <h6>Makes the feed function accessible to all Pokemon, however, the result of this function will be different to each Pokemon</h6>
- **virtual void play() = 0;**  <h6>Makes the play function accessible to all Pokemon, however, the result of this function will be different to each Pokemon</h6>
- **virtual void evolve() = 0;**  <h6>Makes the evolve function accessible to all Pokemon, however, the result of this function will be different to each Pokemon</h6>

#### Game Functions
- **void viewStats();**  <h6>Prints a list of the Pokemon's stats to be easily viewed by the Player</h6>
- **void loadGame();**  <h6>Loads up the player's previous playtime with their previous Pokemon's stats</h6>
- **void resetGame();**  <h6>Deletes the save file for the player after the game is decided as a victory or defeat</h6>
- **void saveGame(saveName, happinessLevel, hungerLevel, healthLevel, level);**  <h6>Saves the Pokemon's current stats to a .txt file that can be accessed when the player returns</h6>

---

### FireStarter Derived Class

- The FireStarter base class is used to set the characteristics and functionalities of Charmander - through initializing its stats and overrides the virtual functions in the parent class that effect its stats and output messages.

#### Constructors 
- **FireStarter(happiness, hunger, health, level);** <h6>Overloaded Constructor that sets up the basic stat levels for the Pokemon and includes the proper speciesName</h6>

#### Getters
- **string getSpeciesName();** <h6>Returns the specific name of the Pokemon's species name based on what evolution level they are on</h6>

#### Setters
- **void setSpeciesName(string pokemonName);** <h6>Sets the selected pokemon's name to be itself that updates after evolution</h6>
  
#### Private
- **string speciesName = "Charmander";** <h6>Initializes this selected Pokemon's name to Charmander</h6>


#### Overriding Functions
- **void train();** <h6>Calls for the virtual train function in the parent class with and adds a unique statement to be printed</h6>
- **void heal();** <h6>Calls for the pure virtual heal function with a unique statement to be printed and these efeects to be made: +10 health, +5 happiness</h6>
- **void feed();** <h6>Calls for the pure virtual feed function with a unique statement to be printed and these efeects to be made: -5 hunger, +5 health</h6>
- **void play();** <h6>Calls for the pure virtual play function with a unique statement to be printed and these efeects to be made: +10 happiness, +10 health</h6>
- **void evolve();** <h6>Calls for the pure virtual evolve function in the parent class with unique art based on its evolutions and unique statements to be printed, and changes the Pokemons name to Charmeleon first and Charizard later</h6>
- **void warningCheck();** <h6>Calls for the virtual warningCheck function in the parent class with changes in the printed statement in the Pokemon's name</h6>
- **void limitControl();** <h6>Calls for the virtual limitControl function in the parent class with the different stats for the selected Pokemon</h6>
---

### GrassStarter Derived Class

- The GrassStarter base class is used to set the characteristics and functionalities of Bulbasaur - through initializing its stats and overrides the virtual functions in the parent class that effect its stats and output messages.


#### Constructors 
- **GrassStarter(happiness, hunger, health, level);** <h6>Overloaded Constructor that sets up the basic stat levels for the Pokemon and includes the proper speciesName</h6>

#### Getters
- **string getSpeciesName();** <h6>Returns the specific name of the Pokemon's species name based on what evolution level they are on</h6>

#### Setters
- **void setSpeciesName(string pokemonName);** <h6>Sets the selected pokemon's name to be itself that updates after evolution</h6>
  
#### Private
- **string speciesName = "Bulbasaur";** <h6>Initializes this selected Pokemon's name to Bulbasaur</h6>


#### Overriding Functions
- **void train();** <h6>Calls for the virtual train function in the parent class with and adds a unique statement to be printed</h6>
- **void heal();** <h6>Calls for the pure virtual heal function with a unique statement to be printed and these efeects to be made: +10 health, +15 happiness</h6>
- **void feed();** <h6>Calls for the pure virtual feed function with a unique statement to be printed and these efeects to be made: -10 hunger, +5 health</h6>
- **void play();** <h6>Calls for the pure virtual play function with a unique statement to be printed and these efeects to be made: +5 happiness, +15 hunger</h6>
- **void evolve();** <h6>Calls for the pure virtual evolve function in the parent class with unique art based on its evolutions and unique statements to be printed, and changes the Pokemons name to Ivysaur and Venusaur later</h6>
- **void warningCheck();** <h6>Calls for the virtual warningCheck function in the parent class with changes in the printed statement in the Pokemon's name</h6>
- **void limitControl();** <h6>Calls for the virtual limitControl function in the parent class with the different stats for the selected Pokemon</h6>

---

## WaterStarter Derived Class

- The WaterStarter base class is used to set the characteristics and functionalities of Squirtle - through initializing its stats and overrides the virtual functions in the parent class that effect its stats and output messages.

#### Constructors 
- **WaterStarter(happiness, hunger, health, level);** <h6>Overloaded Constructor that sets up the basic stat levels for the Pokemon and includes the proper speciesName</h6>

#### Getters
- **string getSpeciesName();** <h6>Returns the specific name of the Pokemon's species name based on what evolution level they are on</h6>

#### Setters
- **void setSpeciesName(string pokemonName);** <h6>Sets the selected pokemon's name to be itself that updates after evolution</h6>
  
#### Private
- **string speciesName = "Squirtle";** <h6>Initializes this selected Pokemon's name to Squirtle</h6>


#### Overriding Functions
- **void train();** <h6>Calls for the virtual train function in the parent class with and adds a unique statement to be printed</h6>
- **void heal();** <h6>Calls for the pure virtual heal function with a unique statement to be printed and these efeects to be made: +10 health, +10 happiness</h6>
- **void feed();** <h6>Calls for the pure virtual feed function with a unique statement to be printed and these efeects to be made: -15 hunger, -15 happiness</h6>
- **void play();** <h6>Calls for the pure virtual play function with a unique statement to be printed and these efeects to be made: +5 happiness, +10 hunger</h6>
- **void evolve();** <h6>Calls for the pure virtual evolve function in the parent class with unique art based on its evolutions and unique statements to be printed, and changes the Pokemons name to Wartortle and Blastoise later</h6>
- **void warningCheck();** <h6>Calls for the virtual warningCheck function in the parent class with changes in the printed statement in the Pokemon's name</h6>
- **void limitControl();** <h6>Calls for the virtual limitControl function in the parent class with the different stats for the selected Pokemon</h6>

---
## Use Cases

**1: User selects to load their previously saved game**
- ##### The program reads the saveFile.txt and resets all the variables to the variables in the file
- ##### With the variables set in place the game continues and finds the previously selected Pokemon and enters the respective while loop

**2: User selects Bulbasaur**
- ##### The program shows user the ASCII art of Bulbasaur and a menu of actions to choose from
- ##### The user enters the train option : The program prints a unique text about Bulbasaur being trained
    - ###### (Level +1, Happiness -10, Hunger +20, Health -20)
- ##### The user enters heal option: The program prints a unique text about Bulbasaur being healed and applies unique effects to Bulbasaur's stats
    - ###### (+10 health, +15 happiness)
- ##### The user enters the feed option : The program prints a unique text about Bulbasaur being fed and applies unique effects to Bulbasaur's stats
    - ###### (-10 hunger, +5 health)
- ##### The user enters the play option : The program prints a unique text about Bulbasaur being played with and applies unique effects to Bulbasaur's stats
    - ###### (+5 happiness, +15 hunger)
- ##### The user enters the viewStats option : The program prints a unique text with Bulbasaur's stats

**3: User selects Squirtle**
- ##### The program shows user the ASCII art of Squirtle and a menu of actions to choose from
- ##### The user enters the train option : The program prints a unique text about Squirtle being trained
    - ###### (Level +1, Happiness -10, Hunger +20, Health -20)
- ##### The user enters heal option: The program prints a unique text about Squirtle being healed and applies unique effects to Squirtle's stats
    - ###### (+10 health, +10 happiness)
- ##### The user enters the feed option : The program prints a unique text about Squirtle being fed and applies unique effects to Squirtle's stats
    - ###### (-15 hunger, -15 happiness)
- ##### The user enters the play option : The program prints a unique text about Squirtle being played with and applies unique effects to Squirtle's stats
    - ###### (+5 happiness, +10 hunger)
- ##### The user enters the viewStats option : The program prints a unique text with Squirtle's stats

**4: User selects Charmander**
- ##### The program shows user the ASCII art of Charmander and a menu of actions to choose from
- ##### The user enters the train option : The program prints a unique text about Charmander being trained
    - ###### (Level +1, Happiness -10, Hunger +20, Health -20)
- ##### The user enters heal option: The program prints a unique text about Charmander being healed and applies unique effects to Charmander's stats 
    - ###### (+10 health, +5 happiness)
- ##### The user enters the feed option : The program prints a unique text about Charmander being fed and applies unique effects to Charmander's stats
    - ###### (-5 hunger, +5 health)
- ##### The user enters the play option : The program prints a unique text about Charmander being played with and applies unique effects to Charmander's stats
    - ###### (+10 happiness, +10 health)
- ##### The user enters the viewStats option : The program prints a unique text with Charmander's stats

**5: User selects to save game**
- ##### The program takes the current variables and places them within the saveFile.txt

---

## Pseudocode

```python
print (Welcome Message & Pokemon Logo in ASCII art)
print (Message asking if there is a saved file)
take input answer

if (answer = 'y'):
    take an input from the save file

else:
    print (Message to select Pokemon from Professor Dan ASCII art and the ACII art of each starter pokemon)
    output the contents from the .txt files with the ASCII art for the starter Pokemon
    print ("Which one would you like")
    take input selectionNumber

while (selectionNumber != 1 or 2 or 3):
    print ("That is not  an appropriate number to put in, please input again")
    take input selectionNumber

    if (selectionNumber == 1):
        GrassStarter choice1
        choice1.GrassStarter() // use the default constructor and setter values to get the beginning variables set in place
        print ("Great, now lets begin growing your Bulbasaur!!!")
        
        while (gameFinish == false): 
            print ("What actions would you like to do with your Bulbasaur:
            
            ---------------------------------
            | 1 - Train your Pokemon        |
            | 2 - Heal your Pokemon         |
            | 3 - Feed your Pokemon         |
            | 4 - Play with your Pokemon    |
            | 5 - View your Pokemon's stats |
            --------------------------------- ")
            take input chosenAction
            
            if (chosenAction == 1):
                // train function is called
                
            elif (chosenAction == 2):
                // heal function is called
                
            elif (chosenAction == 3):
                // feed function is called

            elif (chosenAction == 4):
                // play function is called

            elif (chosenAction == 5):
                // viewStats function is called

            else:
               print("That was not a choice, reselect your option")
               gameFinish = false

            if (any of the levels are at a risky state):
                // warningCheck function is called
            
            if (any single one of the stats reaches an absolute negative):
                print("boohoo you lost. ratio. bozo")
                gameFinish = true
                
            if (level == 16):
                // evolve function is called and the middle evolutions ASCII art in the .txt file is output

            elif (level == 32):
                print("Congrats you've witness your Pokemon travel from its first stage to its final Evolution!!!")
                output the final evolution ASCII art from its .txt file
                gameFinish = true

            else:
                gameFinish = false

    if (selectionNumber == 2) {
        WaterStarter choice1
        choice1.WaterStarter() // use the default constructor and setter values to get the beginning variables set in place
        print ("Great, now lets begin growing your Squirtle!!!")
        
        while (gameFinish == false): 
            print ("What actions would you like to do with your Squirtle:
            
            ---------------------------------
            | 1 - Train your Pokemon        |
            | 2 - Heal your Pokemon         |
            | 3 - Feed your Pokemon         |
            | 4 - Play with your Pokemon    |
            | 5 - View your Pokemon's stats |
            --------------------------------- ")
            take input chosenAction
            
            if (chosenAction == 1):
                // train function is called
                
            elif (chosenAction == 2):
                // heal function is called
                
            elif (chosenAction == 3):
                // feed function is called

            elif (chosenAction == 4):
                // play function is called

            elif (chosenAction == 5):
                // viewStats function is called

            else:
               print("That was not a choice, reselect your option")
               gameFinish = false

            if (any of the levels are at a risky state):
                // warningCheck function is called
            
            if (any single one of the stats reaches an absolute negative):
                print("boohoo you lost. ratio. bozo")
                gameFinish = true
                
            if (level == 16):
                // evolve function is called and the middle evolutions ASCII art in the .txt file is output

            elif (level == 32):
                print("Congrats you've witness your Pokemon travel from its first stage to its final Evolution!!!")
                output the final evolution ASCII art from its .txt file
                gameFinish = true

            else:
                gameFinish = false

    if (selectionNumber == 3) {
       FireStarter choice1
        choice1.FireStarter() // use the default constructor and setter values to get the beginning variables set in place
        print ("Great, now lets begin growing your Charmander!!!")
        
        while (gameFinish == false): 
            print ("What actions would you like to do with your Charmander:
            
            ---------------------------------
            | 1 - Train your Pokemon        |
            | 2 - Heal your Pokemon         |
            | 3 - Feed your Pokemon         |
            | 4 - Play with your Pokemon    |
            | 5 - View your Pokemon's stats |
            --------------------------------- ")
            take input chosenAction
            
            if (chosenAction == 1):
                // train function is called
                
            elif (chosenAction == 2):
                // heal function is called
                
            elif (chosenAction == 3):
                // feed function is called

            elif (chosenAction == 4):
                // play function is called

            elif (chosenAction == 5):
                // viewStats function is called

            else:
               print("That was not a choice, reselect your option")
               gameFinish = false

            if (any of the levels are at a risky state):
                // warningCheck function is called
            
            if (any single one of the stats reaches an absolute negative):
                print("boohoo you lost. ratio. bozo")
                gameFinish = true
                
            if (level == 16):
                // evolve function is called and the middle evolutions ASCII art in the .txt file is output

            elif (level == 32):
                print("Congrats you've witness your Pokemon travel from its first stage to its final Evolution!!!")
                output the final evolution ASCII art from its .txt file
                gameFinish = true

            else:
                gameFinish = false 
```

---

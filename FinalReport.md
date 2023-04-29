# Tamagotchi Project Final Report

## **Description**

&ensp;&thinsp; TamaGatch ‘Em All is a Pokemon-themed Tamagotchi game where players choose one of three starters (Bulbasaur, Squirtle, or Charmander) and take care of their selected Pokemon until they evolve (victory) or run away due to neglect (defeat). Players must balance four activities to increase their Pokemon's level while keeping it happy, fed, and healthy. Each starter Pokemon begins with 50% of all stats except for its Level starting at 1, and players receive warnings when stats are at risk. The game includes a save function for players to resume later. 

&ensp;&thinsp; The game's structure includes a base Pokemon class and three derived classes for each starter Pokemon, each with unique effects to the selected Pokemon.

-------------------------------------------------------

## **UML Diagram**

![image](https://user-images.githubusercontent.com/114624617/235322906-5ebb02e7-0c48-4a19-be8f-427e4dd81478.png)

---

## **Changes Made to the Preliminary Report**

- removed the private member fileName in the parent class
- 
- remade the default constructor to use parameters that were not already set in place
- added a boolean virtual function to end the game if points of victory or defeat are reached and added it to each inherited class
- made the loadGame function virtual and added it to each inherited class
- implemented unique statements for every action done by the Pokemon
- implemented ASCII art for wherever they were fit
- changed evolve function into the evolutionCheck function to check when requirements are met to evolve and added it to each inherited class
- made the virtual train function into a pure virtual function and added it to each inherited class
- made saveGame function not require any parameters

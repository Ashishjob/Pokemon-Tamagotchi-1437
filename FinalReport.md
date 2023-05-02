# Tamagotchi Project Final Report

## **Description**

&ensp;&thinsp; TamaGatch ‘Em All is a Pokemon-themed Tamagotchi game where players choose one of three starters (Bulbasaur, Squirtle, or Charmander) and take care of their selected Pokemon until they evolve (victory) or run away due to neglect (defeat). Players must balance four activities to increase their Pokemon's level while keeping it happy, fed, and healthy. Each starter Pokemon begins with 50% of all stats except for its Level starting at 1, and players receive warnings when stats are at risk. The game includes a save function for players to resume later. 

&ensp;&thinsp; The game's structure includes a base Pokemon class and three derived classes for each starter Pokemon, each with unique effects to the selected Pokemon.

-------------------------------------------------------

## **UML Diagram**

![image](https://user-images.githubusercontent.com/114624617/235322906-5ebb02e7-0c48-4a19-be8f-427e4dd81478.png)

---

## **Classes Used**

- Pokemon Class (Parent Class)
    - GrassStarter Class (Inherited Class)
 
    - WaterStarter Class (Inherited Class)
    - FireStarter Class (Inherited Class)

---

## **My Reflections**

### **What I Learned/Incorporated Methods**

- GitHub/Git
- UML's (Unified Modeling Language)
- Documentation
- File I/O
- Object-Oriented Programming
- Time-Management
- ASCII Art
- HTML
- Markdown
- Polymorphism
- Class Inheritance

### **Struggles I Experienced Along the Way**

- Basic semantic faults such as loops that had to be called for incorrect user inputs
- Forgetting how to use file input and output for the save and load functions
- Getting completely lost about appropraite setters and getters
- Getting lost about creating my UML (and designing it to be better each time)
- Forgetting to write about what each function did and forgetting where I left off
- Making different text sizes and designing with HTML and Markdown

---

## **Changes Made to the Preliminary Report**

- It really isn't just a Tamagotchi, but a half Tamagotchi/half RPG
- Removed the private member fileName in the parent class
- Remade the default constructor to use parameters that were not already set in place
- Added a boolean virtual function to end the game if points of victory or defeat are reached and added it to each inherited class
- Made the loadGame function virtual and added it to each inherited class
- Implemented unique statements for every action done by the Pokemon
- Implemented ASCII art for wherever they were fit
- Changed evolve function into evolutionCheck to check when requirements are met to evolve and added it to each inherited class
- Made the virtual train function into a pure virtual function and added it to each inherited class
- Made saveGame function not require any parameters

---

## **Future Plans**

- Write everything in cleaner code and have less manual interactions from the player (specifically the function used to load a previous game)
- Print the Pokemon's ASCII image each time the loop runs (just for nicer graphics)
- Make the game have a hard mode, where the user is not given warningChecks or the ability to viewStats
- Make the game harder in general with more significant changes to the Pokemon's stats
- Make animations for each task done (would require personal ability to make ASCII art but still cool)
- Make the code more efficient (I think there's a way to write it with much less lines of code, just don't know how yet)
- Add more Pokemon to the game, and more actions that you can do with the Pokemon

---

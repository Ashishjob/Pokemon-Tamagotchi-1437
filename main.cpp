#include "FireStarter.h"
#include "GrassStarter.h"
#include "WaterStarter.h"
#include "Pokemon.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char answer = 'n';
  int selectionNumber, chosenAction;
  bool gameFinish = false;
  
    cout << "Welcome Message & Pokemon Logo in ASCII art" << endl;
    cout << "Message asking if there is a saved file" << endl;
    cin >> answer;

    if (answer == 'y') {
        // take an input from the save file
    }

    else {
        cout << "Message to select Pokemon from Professor Dan ASCII art and the ACII art of each starter pokemon" << endl;
        // output the contents from the .txt files with the ASCII art for the starter Pokemon
        cout << "Which one would you like: 1, 2, or 3?" << endl;
        cin >> selectionNumber;
    }

    while (selectionNumber != 1 && selectionNumber != 2 && selectionNumber != 3) {
        cout << "That is not  an appropriate number to put in, please input again" << endl;
        cin >> selectionNumber;
    }

    if (selectionNumber == 1) {
      GrassStarter choice1;
      cout << "Great, now lets begin growing your Bulbasaur!!!" << endl;
            
      while (gameFinish == false) {
        cout << "What actions would you like to do with your Pokemon:" << endl;
                  
        cout << "---------------------------------" << endl;
        cout << "| 1 - Train your Pokemon        |" << endl;
        cout << "| 2 - Heal your Pokemon         |" << endl;
        cout << "| 3 - Feed your Pokemon         |" << endl;
        cout << "| 4 - Play with your Pokemon    |" << endl;
        cout << "| 5 - View your Pokemon's stats |" << endl;
        cout << "---------------------------------" << endl;
        
        cin >> chosenAction;

        while (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 && chosenAction != 4 && chosenAction != 5) {
          cout << "That was not a proper choice, reselect your option" << endl;
            cin >> chosenAction;
        }
        
        if (chosenAction == 1) {
          choice1.train();
          // train function is called
        }
          
        else if (chosenAction == 2){
          choice1.heal();
          // heal function is called
        }
          
        else if (chosenAction == 3){
          choice1.feed();
          // feed function is called
        }
          
        else if (chosenAction == 4){
          choice1.play();
          // play function is called
        }

        else if (chosenAction == 5){
          choice1.viewStats();
          // viewStats function is called
        }

        choice1.warningCheck();
        
        choice1.evolutionCheck();

        if (choice1.gameLoss() == true) {
          cout << "boohoo you lost. ratio. bozo" << endl;
          gameFinish = true;
        }

        else if (choice1.gameLoss() == false) {
          cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
          // output the final evolution ASCII art from its .txt file
          gameFinish = true;
        }
        
        else {
          choice1.limitControl();
          gameFinish = false;
        }
      }
    }
      
    if (selectionNumber == 2) {
      WaterStarter choice2;
      cout << "Great, now lets begin growing your Squirtle!!!" << endl;
            
      while (gameFinish == false) {
        cout << "What actions would you like to do with your Pokemon:" << endl;
                  
        cout << "---------------------------------" << endl;
        cout << "| 1 - Train your Pokemon        |" << endl;
        cout << "| 2 - Heal your Pokemon         |" << endl;
        cout << "| 3 - Feed your Pokemon         |" << endl;
        cout << "| 4 - Play with your Pokemon    |" << endl;
        cout << "| 5 - View your Pokemon's stats |" << endl;
        cout << "---------------------------------" << endl;
        
        cin >> chosenAction;

        while (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 && chosenAction != 4 && chosenAction != 5) {
          cout << "That was not a proper choice, reselect your option" << endl;
            cin >> chosenAction;
        }
        
        if (chosenAction == 1) {
          choice2.train();
          // train function is called
        }
          
        else if (chosenAction == 2){
          choice2.heal();
          // heal function is called
        }
          
        else if (chosenAction == 3){
          choice2.feed();
          // feed function is called
        }
          
        else if (chosenAction == 4){
          choice2.play();
          // play function is called
        }

        else if (chosenAction == 5){
          choice2.viewStats();
          // viewStats function is called
        }

        choice2.warningCheck();
        
        choice2.evolutionCheck();

        if (choice2.gameLoss() == true) {
          cout << "boohoo you lost. ratio. bozo" << endl;
          gameFinish = true;
        }

        else if (choice2.gameLoss() == false) {
          cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
          // output the final evolution ASCII art from its .txt file
          gameFinish = true;
        }
        
        else {
          choice2.limitControl();
          gameFinish = false;
        }
      }  
    }

    if (selectionNumber == 3) {
      FireStarter choice3;
      cout << "Great, now lets begin growing your Charmander!!!" << endl;
            
      while (gameFinish == false) {
        cout << "What actions would you like to do with your Pokemon:" << endl;
                  
        cout << "---------------------------------" << endl;
        cout << "| 1 - Train your Pokemon        |" << endl;
        cout << "| 2 - Heal your Pokemon         |" << endl;
        cout << "| 3 - Feed your Pokemon         |" << endl;
        cout << "| 4 - Play with your Pokemon    |" << endl;
        cout << "| 5 - View your Pokemon's stats |" << endl;
        cout << "---------------------------------" << endl;
        
        cin >> chosenAction;

        while (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 && chosenAction != 4 && chosenAction != 5) {
          cout << "That was not a proper choice, reselect your option" << endl;
          cin >> chosenAction;
        }
        
        if (chosenAction == 1) {
          choice3.train();
          // train function is called
        }
          
        else if (chosenAction == 2){
          choice3.heal();
          // heal function is called
        }
          
        else if (chosenAction == 3){
          choice3.feed();
          // feed function is called
        }
          
        else if (chosenAction == 4){
          choice3.play();
          // play function is called
        }

        else if (chosenAction == 5){
          choice3.viewStats();
          // viewStats function is called
        }

        choice3.warningCheck();
        
        choice3.evolutionCheck();

        if (choice3.gameLoss() == true) {
          cout << "boohoo you lost. ratio. bozo" << endl;
          gameFinish = true;
        }

        else if (choice3.gameLoss() == false) {
          cout << "Congrats you've witnessed your Pokemon travel from its first stage to its final Evolution!!!" << endl;
          // output the final evolution ASCII art from its .txt file
          gameFinish = true;
        }
        
        else {
          choice3.limitControl();
          gameFinish = false;
        }
      }
    }
  return 0;
}

#include "FireStarter.h"
#include "GrassStarter.h"
#include "Pokemon.h"
#include "WaterStarter.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  char answer = 'n';
  int selectionNumber, chosenAction;
  bool gameFinish = false;
  string line;

  fstream inputLogoFile;

  inputLogoFile.open("Pokemon-Tamagotchi-1437-main/.txt files/PokemonLogo.txt");
  while (getline(inputLogoFile, line)) {
    cout << line << endl;
  }
  inputLogoFile.close(); // Pokemon Logo

  cout << "                   WELCOME TO THE WORLD OF POKEMON (BUT DIFFERENT)"
       << endl
       << endl;

  fstream inputDanFile;
  inputDanFile.open("Pokemon-Tamagotchi-1437-main/.txt files/ProfessorDan.txt");
  while (getline(inputDanFile, line)) {
    cout << line << endl;
  }
  inputDanFile.close();

  cout << endl
       << "I'M PROFESSOR DAN (UH VERSION OF OAK), AND I'M HERE TO WELCOME YOU"
       << endl;
  cout << "Hmmm, are you new to the game, or do you happen to have a saved "
          "file (y/n)"
       << endl;
  cin >> answer;

  if (answer == 'y') {
    cout << "Which Pokemon did you select (1 - Bulbasaur, 2 - Squirtle, 3 - Charmander)" << endl;
    int loadAnswer;
    cin >> loadAnswer;
    if (loadAnswer == 1) {
      GrassStarter choice1;
      choice1.loadGame();
      selectionNumber = 1;
    }
    else if (loadAnswer == 2) {
      WaterStarter choice2;
      choice2.loadGame();
      selectionNumber = 2;
    }
    else if (loadAnswer == 3) {
      FireStarter choice3;
      choice3.loadGame();
      selectionNumber = 3;
    }
  }
  
  else {
    cout << "Looks like you're new!!! Please select one of the choices from "
            "the options below"
         << endl;

    fstream inputBulbasaurFile;
    inputBulbasaurFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Bulbasaur.txt");
    while (getline(inputBulbasaurFile, line)) {
      cout << line << endl;
    }
    inputBulbasaurFile.close();
    cout << endl << "1 - BULBASAUR" << endl;

    fstream inputSquirtleFile;
    inputSquirtleFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Squirtle.txt");
    while (getline(inputSquirtleFile, line)) {
      cout << line << endl;
    }
    inputSquirtleFile.close();
    cout << endl << "2 - SQUIRTLE" << endl;

    fstream inputCharmanderFile;
    inputCharmanderFile.open(
        "Pokemon-Tamagotchi-1437-main/.txt files/Charmander.txt");
    while (getline(inputCharmanderFile, line)) {
      cout << line << endl;
    }
    inputCharmanderFile.close();
    cout << endl << "3 - CHARMANDER" << endl;

    cout << "Which one would you like: 1, 2, or 3?" << endl;
    cin >> selectionNumber;
  }

  if (selectionNumber != 1 && selectionNumber != 2 && selectionNumber != 3) {
    cout << "That is not an option, please try again" << endl;
    cin >> selectionNumber;
    bool ans = false;
    while (ans == false) {
      if (selectionNumber != 1 && selectionNumber != 2 &&
          selectionNumber != 3) {
        cout << "That is not an option, please try again" << endl;
        ans = false;
        cin >> selectionNumber;
      } else {
        ans = true;
      }
    }
  }

  int newSelectionNumber = 0;
  while (selectionNumber != 1 && selectionNumber != 2 && selectionNumber != 3) {
    cout << "That is not  an appropriate number to put in, please input again"
         << endl;
    cin >> newSelectionNumber;
    if (newSelectionNumber == 1 || newSelectionNumber == 2 ||
        newSelectionNumber == 3) {
      selectionNumber = newSelectionNumber;
    } else {
      continue;
    }
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
      cout << "| 6 - Save your game            |" << endl;
      cout << "---------------------------------" << endl;

      cin >> chosenAction;

      if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
          chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
        cout << "That is not an option, please try again" << endl;
        cin >> chosenAction;
        bool ans = false;
        while (ans == false) {
          if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
              chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
            cout << "That is not an option, please try again" << endl;
            ans = false;
            cin >> chosenAction;
          } else {
            ans = true;
          }
        }
      }

      // account for this better

      if (chosenAction == 1) {
        choice1.train();
        // train function is called
      }

      else if (chosenAction == 2) {
        choice1.heal();
        // heal function is called
      }

      else if (chosenAction == 3) {
        choice1.feed();
        // feed function is called
      }

      else if (chosenAction == 4) {
        choice1.play();
        // play function is called
      }

      else if (chosenAction == 5) {
        choice1.viewStats();
        // viewStats function is called
      }

      else if (chosenAction == 6) {
        choice1.saveGame();
        cout << "See you next time!" << endl;
      }

      choice1.warningCheck();

      choice1.evolutionCheck();

      if (choice1.gameLoss() == true) {
        gameFinish = true;
      }

      else if (choice1.gameLoss() == false) {
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
      cout << "| 6 - Save your game            |" << endl;
      cout << "---------------------------------" << endl;

      cin >> chosenAction;

      if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
          chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
        cout << "That is not an option, please try again" << endl;
        cin >> chosenAction;
        bool ans = false;
        while (ans == false) {
          if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
              chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
            cout << "That is not an option, please try again" << endl;
            ans = false;
            cin >> chosenAction;
          } else {
            ans = true;
          }
        }
      }

      if (chosenAction == 1) {
        choice2.train();
        // train function is called
      }

      else if (chosenAction == 2) {
        choice2.heal();
        // heal function is called
      }

      else if (chosenAction == 3) {
        choice2.feed();
        // feed function is called
      }

      else if (chosenAction == 4) {
        choice2.play();
        // play function is called
      }

      else if (chosenAction == 5) {
        choice2.viewStats();
        // viewStats function is called
      }

      else if (chosenAction == 6) {
        choice2.saveGame();
        cout << "See you next time!" << endl;
      }

      choice2.warningCheck();

      choice2.evolutionCheck();

      if (choice2.gameLoss() == true) {
        gameFinish = true;
      }

      else if (choice2.gameLoss() == false) {
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
      cout << "| 6 - Save your game            |" << endl;
      cout << "---------------------------------" << endl;

      cin >> chosenAction;

      if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
          chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
        cout << "That is not an option, please try again" << endl;
        cin >> chosenAction;
        bool ans = false;
        while (ans == false) {
          if (chosenAction != 1 && chosenAction != 2 && chosenAction != 3 &&
              chosenAction != 4 && chosenAction != 5 && chosenAction != 6) {
            cout << "That is not an option, please try again" << endl;
            ans = false;
            cin >> chosenAction;
          } else {
            ans = true;
          }
        }
      }

      if (chosenAction == 1) {
        choice3.train();
        // train function is called
      }

      else if (chosenAction == 2) {
        choice3.heal();
        // heal function is called
      }

      else if (chosenAction == 3) {
        choice3.feed();
        // feed function is called
      }

      else if (chosenAction == 4) {
        choice3.play();
        // play function is called
      }

      else if (chosenAction == 5) {
        choice3.viewStats();
        // viewStats function is called
      }

      else if (chosenAction == 6) {
        choice3.saveGame();
        cout << "See you next time!" << endl;
      }

      choice3.warningCheck();

      choice3.evolutionCheck();

      if (choice3.gameLoss() == true) {
        gameFinish = true;
      }

      else if (choice3.gameLoss() == false) {
        choice3.limitControl();
        gameFinish = false;
      }
    }
  }
  return 0;
}

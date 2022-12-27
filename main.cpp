#include <iostream>
#include <string>
#include <vector>
#include "Hero/Hero.h"
#include "Hero/Dart.h"
#include "Hero/Stinger.h"

using namespace std;

vector<string> pickedHereos = {};
vector<string> heroes = {"Stinger", "Dart"};
int numberOfHeroes = 2;

// bool isGameOver(Hero player1, Hero player2){
//     if(player1.isDead(){
//         cout << player1.getName() << " Won!" << endl;
//         return true;
//     }
//     else if(player2.isDead())(
//         cout << player2.getName() << " Won!" << endl;
//         return true;
//     )

//     return false;

// }

bool isPicked(string heroName){

    bool isPicked = false;

    for (int i = 0; i < pickedHereos.size(); i++) {
        if(pickedHereos.at(i) == heroName){
            isPicked = true;
        }
    }
    return isPicked;
}

bool isValidChoise(int choice){
    if(choice <= 0 || choice > numberOfHeroes){
        return false;
    }
    return true;
}
Hero chooseHero(int playerNumber){

    int choice = 0;

    while(true){

        cout << "1) Stringer" << endl;
        cout << "2) Dart" << endl;
        cout << ">> ";
        cin >> choice;
        if(isValidChoise(choice)){
            pickedHereos.push_back(heroes.at(choice - 1));
        }
        else{
            cout << "Invalid Choice" << endl;
            continue;
        }
        if(isPicked(heroes.at(choice - 1))){
            cout << "The hero is already picked" << endl;
            continue;
        }

        break;

    }
        
    if(choice == 1){
        // Stinger newStringer;
        Hero newHero;
        return newHero;        
    }

}

int main(){


    // while(!isGameOver){



    // }        

    return 0;

}
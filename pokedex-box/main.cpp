//
//  main.cpp
//  pokedex-box
//
//  Created by Alvaro Alvarez on 13/07/23.
//

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>


using namespace std;

//structures
struct pokemon {
//  struct var
    string breed;
    string name;
    float weight;
    char gender;
};

int main() {
//  vector
    vector<pokemon> poke;
//  var
    string continu3 = "q";
//  msg
    string msg1 = "Hello and welcome to this pokedex-box where you can store all the new pokemon you capture in your adventure! \nIf you're here I guess you already have your initial pokemon so give me some small details about them... \n";
    string msg2 = "What breed is your new pokemon?: ";
    
//  start program
    for (char c : msg1) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

//  start loop
    do {
        pokemon newPokemon;
        
        cout << endl;
        for (char c : msg2) {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(100));
        }
        cin >> newPokemon.breed;
    } while (continu3 == "S" || continu3 == "s");

    return 0;
}

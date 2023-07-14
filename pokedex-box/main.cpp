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

//function
void delay (string msg) {
    for (char c : msg) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

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
    string continu3;
    string exit;
    size_t pokemonIndex;
//  msg
    string msgContinu3 = "Your new pokemon has been successfully registered and stored in the box, would you like to add another pokemon? \nYes(Y) or No(N): ";
    string msgExit1 = "Perfect, now I would like to know if you want to get out of this little program or see the pokemon you managed to store in the box? \nExit(E) or Continue(C): ";
    string msgExit2 = "Would you like to see the complete information of any of your Pokemon or would you like to leave the program? \nExit(E) or Continue(C): ";
    string msgExit3 = "Do you want to see another pokemon's information or exit the program? \nExit(E) or Continue(C): ";
    
    string msg1 = "Hello and welcome to this pokedex-box where you can store all the new pokemon you capture in your adventure! \nIf you're here I guess you already have your initial pokemon so give me some small details about them... \n";
    string msg2 = "What breed is your new pokemon?: ";
    string msg3 = "What name have you given your pokemon?: ";
    string msg4 = "What is the weight of your new pokemon?(kg): ";
    string msg5 = "And finally, what is your new friend's gender? Male(M) or Female(F): ";
    string msg6 = "I see you like to see the pokemon you have registered, so here's a list of their names: \n";
    string msg7 = "Perfect, select the Pokemon you would like to see!(Index): ";
    
    string msgInvalid = "Invalid index. The selected pokemon was not found.";
    
    string msgBye = "Very well dear user, a pleasure to have been of help and I hope you have enjoyed this little program, I say goodbye and take care. \n";

    
//  start program
    delay(msg1);

//  start loop
    do {
        pokemon newPokemon;
        
        cout << endl;
        delay(msg2);
        cin >> newPokemon.breed;
        
        delay(msg3);
        cin >> newPokemon.name;
        
        delay(msg4);
        cin >> newPokemon.weight;
        
        delay(msg5);
        cin >> newPokemon.gender;
        
        poke.push_back(newPokemon);
        
        cout << endl;
        delay(msgContinu3);
        cin >> continu3;
    } while (continu3 == "Y" || continu3 == "y");
    
    cout << endl;
    delay(msgExit1);
    cin >> exit;
      
    while (exit != "C" || exit != "c") {
        cout << endl;
        delay(msg6);
        for (size_t i = 0; i < poke.size(); i++) {
            cout << i << ". " << poke[i].name << endl;
        }
            
        cout << endl;
        delay(msgExit2);
        cin >> exit;
        
        delay(msg7);
        cin >> pokemonIndex;
        
        if (pokemonIndex >= 0 && pokemonIndex < poke.size()) {
            cout << "Data of the selected pokemon:: \n";
            cout << "Name: " << poke[pokemonIndex].name << endl;
            cout << "Breed: " << poke[pokemonIndex].breed << endl;
            cout << "Weight: " << poke[pokemonIndex].weight << endl;
            cout << "Gender: " << poke[pokemonIndex].gender << endl;
        } else {
            delay(msgInvalid);
        }
        
        delay(msgExit3);
        cin >> exit;
    }
    
    cout << endl;
    delay(msgBye);

    return 0;
}

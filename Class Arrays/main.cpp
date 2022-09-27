#include <iostream>
#include "Player.h"

using namespace std;

void displayPlayers(Player *, int);

int main() {
    int howmanyplayers;

    cout << "Enter how many players do you want to set.\n"
    << ">> ";
    cin >> howmanyplayers;
    cout << endl;

    Player *Players = new Player[howmanyplayers];
    for (int i = 0; i < howmanyplayers; i++) {
        string tempNames;
        int tempAge;

        cout << "Enter name of player #" << i+1 << ": ";
        getline (cin >> ws, tempNames);
        cout << "Enter age of " << tempNames << ": ";
        cin >> tempAge;
        Players[i] = Player(tempNames, tempAge);
        cout << endl;
    }

    displayPlayers(Players, howmanyplayers);
    return 0;
}

void displayPlayers(Player *players, int size) {
    cout << "\nDisplaying players...\n\n";

    for (int i=0; i<size; i++) {
        cout << "PLayer name: " << players[i].getName() << "\n"
        << "Player age: " << players[i].getAge() << "\n\n";
    }
}

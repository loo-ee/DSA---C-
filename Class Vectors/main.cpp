#include <iostream>
#include <vector>
#include "Human.h"
using namespace std;

void addHuman(vector<Human> &records);
void viewRecords(vector<Human> &records);
void verify(char &);

struct RuntimeError {
public:
    char choice;

    RuntimeError(char &c) {
        choice = c;
    }
}; 

int main() {
    char choice;
    vector<Human> people;

    do {
        bool repeat = true;
        while (repeat) {
            cout << "\nWhat do you want to do?\n"
            << "[1] Add human record\n"
            << "[2] View human records\n"
            << "[3] Exit program\n"
            << ">> ";
            cin >> choice;

            try {
                verify(choice);
                repeat = false;
            }
            catch (RuntimeError C) {
                cout << "\nPlease enter a valid choice\n"
                << "Choice error: " << C.choice << endl;
            }
        }
        switch (choice) {
            case '1':
                cout << "\nAdding human\n";
                addHuman(people);
                break;

            case '2':
                cout << "\nShowing data...\n\n";
                viewRecords(people);
                break;

            case '3':
                cout << "\nProgram Terminated\n";
                break;
        }
    } while (choice != '3');
    return 0;
}

void addHuman(vector<Human> &records) {
    string name;
    int age;

    cout << "Enter a name for a human: ";
    getline(cin >> ws, name);
    cout << "Age for " << name << ": ";
    cin >> age;
    records.push_back(Human(name, age));
}

void viewRecords(vector<Human> &records) {
    for (int i = 0; i < records.size(); i++) {
        cout << "Record #" << i+1 << ":\n";
        records[i].showInfo();
        cout << "\n";
    }
}

void verify(char &n) {
    char choices[] = {'1', '2', '3'}, ver = '0';

    for (int i = 0; i <3; i++) {
        if (n == choices[i]) {
            ver = choices[i];
        }
    }
    if (ver == '0') {
        throw RuntimeError(n);
    }
}
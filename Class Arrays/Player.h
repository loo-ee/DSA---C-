#pragma once
using namespace std;

class Player {
private:
    string name;
    int age;

public:
    Player() {
        name = "";
        age = 0;
    }

    Player(string n, int a) {
        name = n;
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};
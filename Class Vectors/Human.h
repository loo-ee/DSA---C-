#pragma once
using namespace std;

class Human {
private:
    string name;
    int age;

public:
    Human() {};

    Human(string n, int a) {
        name = n;
        age = a;
    }

    string getName() { 
        return name; 
    }
    
     int getAge() {
         return age;
     }

    void showInfo() {
        cout << "Name: " << name << "\n"
        << "Age: " << age << "\n";
    }
};
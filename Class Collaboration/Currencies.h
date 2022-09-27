#pragma once
using namespace std;

class Currency {
private:
    string Name;
    float Value;

public:
    Currency () {
        Set("", 0);
    }
    
    Currency (string name, float value) {
        Set(name, value);
    }

    // Currency (const Currency &CURRENCY) {
    //     Set(CURRENCY.Name,  CURRENCY.Value);
    // }

    void Set (string name, float value) {
        Name = name;
        Value = value;
    }

    string getName () {
        return Name;
    }

    float getValue () {
        return Value;
    }

    void showinfo () {
        cout << "Currency: " << Name
        << "\nValue from dollars: " << Value << endl;
    }
};

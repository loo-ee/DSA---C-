#pragma once
#include "Specs.h"
#include "Unit.h"
using namespace std;

class Phone {
private:
    string Name;
    Unit unit;
    Specs specs;

public:
    Phone (string name, string brandname, float androidversion, string processor,
           int ram, int rom) {
        Name = name;
        unit.Set(brandname, androidversion);
        specs.Set(processor, ram, rom);
    }

    void showinfo () {
        cout << "Name: " << Name
        << "\n[DEVICE INFO]\n";
        unit.showinfo();
        cout << "[DEVICE SPECS]\n";
        specs.showinfo();
    }
};

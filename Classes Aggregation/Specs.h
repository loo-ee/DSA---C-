#pragma once
using namespace std;

class Specs {
private:
    string Processor;
    int Ram, Rom;

public:
    Specs () {
        Set ("", 0, 0);
    }

    Specs (string processor, int ram, int rom) {
        Set(processor, ram, rom);
    }

    void Set (string processor, int ram, int rom) {
        Processor = processor;
        Ram = ram;
        Rom = rom;
    }

    void showinfo () {
        cout << "Processor: " << Processor
        << "\nRam: " << Ram
        << "\nRom: " << Rom << endl;
    }
};

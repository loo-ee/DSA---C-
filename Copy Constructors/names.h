#pragma once
using namespace std;

class Names {
private:
    string *name, *address;

public:
    Names() {
        *name = "";
        *address = "";
    }

    Names(string n, string a) {
        name = &n;
        address = &a;
    }

    Names(const Names &N) {
        name = new string(*N.name);
        address = new string(*N.address);
    }

    void getInfo() {
        cout << "Name: " << *name << "\nAddress: " << *address << "\n";
    }

    void setName(string n) {
        *name = n;
    }
};
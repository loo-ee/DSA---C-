#include <iostream>
#include "names.h"
using namespace std;

int main() {
    string name = "Jann", address = "Mabigo";
    Names name1(name, address);
    name1.getInfo();

    Names name2(name1);
    name2.getInfo();

    name2.setName("Louie");
    cout << endl << endl;

    name1.getInfo();
    name2.getInfo();
}
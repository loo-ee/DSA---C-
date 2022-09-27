#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

Rectangle getVal ();

int main () {
    Rectangle test;
    test = getVal();
    cout << "Area = " << (test.length * test.width);
}

Rectangle getVal () {
    Rectangle temp;

    cout << "Enter width: ";
    cin >> temp.width;
    cout << "Enter length: ";
    cin >> temp.length;
    return temp;
}

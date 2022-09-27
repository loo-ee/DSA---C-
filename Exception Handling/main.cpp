#include <iostream>
using namespace std;

int checkIf(int &);

 template <class T>
    T square(T num) {
        return num*num;
    }

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    try {
        int validated = checkIf(num);
        cout << "\nThe positive number is " << validated << "\n"
        << "The square is " << square(validated) << "\n";
    }
    catch(string message) {
        cout << message << "\n";
    }
}

int checkIf(int &n) {
    if (n <= 0) {
        string message = "Error\n";
        throw message;
    }
    return n;
}
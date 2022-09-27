#include <iostream>
#include "Conversion.h"

using namespace std;

int main()
{
    float howmuch, val;
    string CURR;

    cout << "What currency do you want to convert to?\n"
    << ">> ";
    cin >> CURR;
    cout << "How much is the value from USD to PHP?\n"
    << ">> ";
    cin >> val;
    cout << "\n";

    Currency currency(CURR, val);
    currency.showinfo();

    cout << "\nHow much money do you want to convert?\n"
    << ">> ";
    cin >> howmuch;

    Convert conv(currency, "Philippine", howmuch);
    cout << "\nConverted value to " << conv.getCountry() << " " << currency.getName() << " is " << conv.getConverted();
    return 0;
}

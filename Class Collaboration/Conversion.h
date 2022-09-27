#pragma once
#include "Currencies.h"
using namespace std;

class Convert {
private:
    Currency currency;
    string Country;
    float Amount;
    
public:
    Convert () {
        Country = "";
        Amount = 0;
    }

    Convert (const Currency &curr, string country, float amount) {
        currency  = curr;
        Country = country;
        Amount = amount;
    }

    float getConverted () {
        return Amount * currency.getValue();
    }

    string getCountry () {
        return Country;
    }
};

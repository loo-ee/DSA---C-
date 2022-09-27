#pragma once
using namespace std;

class Unit {
private:
    string BrandName;
    float AndroidVersion;

public:
    Unit () {
        Set ("", 0);
    }

    Unit (string brandname, float androidversion) {
        Set(brandname, androidversion);
    }

    void Set (string brandname, float androidversion) {
        BrandName = brandname;
        AndroidVersion = androidversion;
    }

    void showinfo (){
        cout << "Brand name: " << BrandName
        << "\nAndroid version: " << AndroidVersion << endl;
    }
};

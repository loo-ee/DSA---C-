#include <iostream>

using namespace std;

static int counter = 6;

void test();

class Human {
private:
    string Name;

public:
    Human (string name){
        Name = name;
        cout << "Constructor\n";
    }

    ~Human (){
        cout << "Desctructor\n";
    }

    string getName(){
        return Name;
    }
};

int main()
{
    test();

    return 0;
}

void test (){

    Human hetero = Human ("Louie");

    counter--;

    if (counter > 0){

        cout << hetero.getName() << endl;
        main();
    }


    hetero.getName();
}

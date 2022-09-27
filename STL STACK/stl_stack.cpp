#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

class Human {
private:
    string name;

public:
    Human(string n) {
        this->name = n;
    }

    string getName() {
        return this->name;
    }
};

int main() {
    stack<Human, list<Human> > newStack;

    Human newHuman = Human("joel");
    Human anotherHuman = Human("hehe");

    newStack.push(newHuman);
    cout << newStack.top().getName() << endl;
    newStack.push(anotherHuman);
    cout << newStack.size() << endl;
    newStack.pop();
    cout << newStack.size();
}
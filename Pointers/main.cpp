#include <iostream>
#include <memory>
//returning a pointer
using namespace std;

string *returnPointer (string []);
string *returnPointer (string *, string);

int main(){
    string test[2];
    // cout << test[0] << endl << test[1] << endl;
    string *ptr = nullptr;
    ptr = test;
    returnPointer(ptr);
    cout << test[0] << endl << test[1] << endl;
    // returnPointer(&test[1], "hehe");
    // cout << test[0] << endl << test[1] << endl;
    delete ptr;
    ptr = nullptr;
    unique_ptr<string> HEHE = make_unique<string>("testtt");
    cout << *HEHE;
    return 0;
}

string *returnPointer (string test[]) {
    cout << "Enter a word: ";
    cin >> test[0];
    cout << "Enter another word: ";
    cin >> test[1];
    return test;
}

string *returnPointer (string *hehe, string another) {
    *hehe = "success";
    return hehe;
}

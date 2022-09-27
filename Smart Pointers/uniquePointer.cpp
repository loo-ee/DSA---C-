#include <iostream>
#include <memory>

class TestClass {
public:
    TestClass() {
        std::cout << "Constructor called\n";
    }
    
    ~TestClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    // int number = 15;
    // std::unique_ptr<int> num1 = std::make_unique<int>();
    // *num1 = number;
    // std::cout << *num1 << std::endl;
    // int secondNumber = 20;
    // *num1 = secondNumber;
    // std::cout << *num1 << std::endl;
    TestClass testClass;
    TestClass *testClass1 = nullptr;
    int counter = 0;

    while(true) {
        std::unique_ptr<TestClass> classPtr = std::make_unique<TestClass>(testClass);
        // testClass1 = new TestClass;
        std::cout << counter++ << std::endl;

        if (counter == 500) {
            break;
        }
    }
    system("pause");
    
    return 0;
}
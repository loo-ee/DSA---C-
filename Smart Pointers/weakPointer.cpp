#include <iostream>
#include <memory>

int main() {
    /*
    std::weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by 
    std::shared_ptr. It must be converted to std::shared_ptr in order to access the referenced object.
    */
    std::weak_ptr<int> weakPtr1;
    {
        std::shared_ptr<int> sharedPtr = std::make_shared<int>(10);
        weakPtr1 = sharedPtr;
        std::cout << *sharedPtr << std::endl;
    }

    return 0;
}
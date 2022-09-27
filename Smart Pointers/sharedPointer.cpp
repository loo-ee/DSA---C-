#include <iostream>
#include <memory>

int main() {
    int number = 23;

    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(number);
    std::cout << sharedPtr1.use_count() << std::endl;
    std::shared_ptr<int> sharedPtr2 = sharedPtr1;
    std::cout << sharedPtr1.use_count() << std::endl;
    
    return 0;
}
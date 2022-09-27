#include <iostream>
#include "stack.h"
#include "dynamic_stack.h"

int main() {
    // IntStack stack = IntStack(5);

    // while(true) {
    //     int choice;
    //     std::cout << "\n[1] Push\n[2] Pop\nEnter choice here: ";
    //     std::cin >> choice;

    //     switch(choice) {
    //         int num;

    //         case 1:
    //         std::cout << "Enter number here: ";
    //         std::cin >> num;
    //         stack.push(num);
    //         break;

    //         case 2:
    //         stack.pop(num);
    //         std::cout << "\nPopped " << num << " from stack.\n";
    //         break;
    //     }
    // }

    DynamicStack dynamicStack;

    while (true) {
        int choice;
        std::cout << "\n[1] Push\n[2] Pop\nEnter choice here: ";
        std::cin >> choice;

        switch(choice) {
            int num;

            case 1:
            std::cout << "Enter number here: ";
            std::cin >> num;
            dynamicStack.push(num);
            break;

            case 2:
            dynamicStack.pop(num);
            std::cout << "\nPopped " << num << " from stack.\n";
            break;
        }
    }
    
    return 0;
}
#include <iostream>
#include "queue.h"

int main() {
    Queue<int> queue(5);
    int choice;
    int number;

    for (int i = 0; i < 6; i++) {
        queue.enqueue(i);
    }
    
    for (int i = 0; i < 6; i++) {
        queue.dequeue(number);
        std::cout << "Popped " << number << std::endl;
    }
}

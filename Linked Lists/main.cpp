#include <iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList test;

    test.appendList(1);
    test.appendList(2);
    test.appendList(3);
    test.appendList(6);
    test.insertBeforeHead(5);
    test.insertChronogically(4);

    test.deleteFromList(5);

    test.printForwards();
    std::cout << std::endl;
    test.printBackwards();
}
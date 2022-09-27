#pragma once
#include <iostream>

class DynamicStack {
    class Node {
    public:
        int value;
        Node *next;
    };

    Node *top;

public:
    DynamicStack() {}

    ~DynamicStack() {
        Node *nodePtr = top;
        Node *nextNode = nullptr;

        while(nodePtr != nullptr) {
            nextNode = nodePtr -> next;
            delete nodePtr;
            nodePtr = nextNode;
        }
    }

    bool isEmpty() {
        return !top;
    }

    void push(int num) {
        Node *newNode = new Node;
        newNode -> value = num;

        if (isEmpty()) {
            top = newNode;
            newNode -> next = nullptr;
            return;
        }

        newNode -> next = top;
        top = newNode;
    }

    void pop(int &val) {
        Node *temp = nullptr;

        if (isEmpty()) {
            std::cout << "The stack is empty\n";
            return;
        }

        val = top -> value;
        temp = top -> next;
        delete top;
        top = temp;
    }
};
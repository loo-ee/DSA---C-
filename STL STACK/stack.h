#pragma once
#include <iostream>

class IntStack {
    int *stackArray;
    int stackSize;
    int top;

public:
    IntStack(int size) {
        stackArray = new int[size];
        stackSize = size;
        top = -1;
    }        

    IntStack(const IntStack &stack) {
        if (stack.stackSize <= 0) {
            stackArray = nullptr;
            return;
        }

        stackSize = stack.stackSize;
        for (int i = 0; i < stackSize; i++) {
            stackArray[i] = stack.stackArray[i];
        }

        top = stack.top;

    }

    ~IntStack() {
        delete[] stackArray;
    }

    bool isFull() {
        return top == stackSize -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int val) {
        if (isFull()) {
            std::cout << "The stack is full\n";
            return;
        }

        top++;
        stackArray[top] = val;
    }

    void pop(int &val) {
        if (isEmpty()) {
            std::cout << "The stack is empty\n";
            return;
        }

        val = stackArray[top];
        top--;
    }
};
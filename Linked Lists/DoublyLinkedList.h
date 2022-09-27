#pragma once
#include <iostream>

class DoublyLinkedList {
private:
    struct Node {
        int value;
        Node *next;
        Node *previous;
    };

    Node *head;
    Node *tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr; 
    }

    void appendList(int val) {
        Node *newNode = new Node;
        newNode -> value = val;
        newNode -> next = nullptr;

        if (head == nullptr) {
            newNode -> previous = nullptr;
            head = newNode;
            tail = newNode;
        } else {
            newNode -> previous = tail;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void insertBeforeHead(int val) {
        Node *newNode = new Node;
        newNode -> value = val;
        newNode -> previous = nullptr;

        if (!head) {
            appendList(val);
        } else {
            newNode -> next = head;
            head -> previous = newNode;
            head = newNode;
        }
    }

    void insertChronogically(int val) {
        Node *newNode = new Node;
        Node *nodePtr = head;
        Node *previousNode = nullptr;
        
        newNode -> value = val;
        newNode -> next = nullptr;

        if (!head) {
            appendList(val);
        } else {
            while (nodePtr != nullptr && nodePtr -> value < val) {
                previousNode = nodePtr;
                nodePtr = nodePtr -> next;
            }

            if (previousNode == nullptr) {
                insertBeforeHead(val);
            } else {
                previousNode -> next = newNode;
                newNode -> previous = previousNode;
                newNode -> next = nodePtr;
                nodePtr -> previous = newNode;
            }
        }
    }

    void printForwards() {
        Node *nodePtr = head;

        while (nodePtr != nullptr) {
            std::cout << nodePtr -> value << std::endl;
            nodePtr = nodePtr -> next;
        }
    }

    void printBackwards() {
        Node *nodePtr = tail;

        while (nodePtr != nullptr) {
            std::cout << nodePtr -> value << std::endl;
            nodePtr = nodePtr -> previous;
        }
    }

    void deleteFromList(int val) {
        Node *nodePtr = head;
        Node *previousNode = nullptr;
        Node *nextNode = nullptr;

        if (!nodePtr) {
            return;
        }

        if (head -> value == val) {
            nodePtr = head -> next;
            delete head;
            head = nodePtr;
            head -> previous = nullptr;
        } else {
            while(nodePtr != nullptr && nodePtr -> value != val) {
                previousNode = nodePtr;
                nodePtr = nodePtr -> next;
                nextNode = nodePtr -> next;
            }

            if (nodePtr) {
                previousNode -> next = nextNode;
                nextNode -> previous = previousNode;
                delete nodePtr;
            }
        }
    }

    bool checkIfEmpty() {
        return !head;
    }

    void clearList() {
        Node *nodePtr;
        
        if (!head) {
            return;
        }
        else {
            nodePtr = head;

            while (head != nullptr) {
                
                if (!nodePtr-> next) {
                    delete head;
                    head = nullptr;
                }
                else {
                    nodePtr = head -> next;
                    delete head;
                    head = nodePtr;
                }
            }
        }
    }

    ~DoublyLinkedList() {
        Node *nodePtr;
        
        if (!head) {
            return;
        }
        else {
            nodePtr = head;

            while (head != nullptr) {
                
                if (!nodePtr-> next) {
                    delete head;
                    head = nullptr;
                }
                else {
                    nodePtr = head -> next;
                    delete head;
                    head = nodePtr;
                }
            }
        }
    }
};
#pragma once
using namespace std;

template<class T>
class LinkedList {
private:
    struct NodeList {
        T value;
        NodeList *next;
    };
    NodeList *head;

public:
    LinkedList() {
        head = nullptr;
    }

    void appendList(T val) {
        NodeList *newNode;
        NodeList *nodePtr;

        newNode = new NodeList;
        newNode -> value = val;
        newNode -> next = nullptr;

        if (!head) {
            head = newNode;
        }
        else {
            nodePtr = head;

            while (nodePtr->next) {
                nodePtr = nodePtr->next;
            }
            nodePtr->next = newNode;
        }
    }

    void displayList() {
        NodeList *nodePtr;

        nodePtr = head;

        while (nodePtr) {
            cout << endl << nodePtr->value;
            nodePtr = nodePtr -> next;
        }
    }

    void insertList(T val) {
        NodeList *newNode;
        NodeList *nodePtr;
        NodeList *previousNode;

        newNode = new NodeList;
        newNode -> value = val;

        if (!head) {
            head = newNode;
            newNode -> next = nullptr;
        }
        else {
            nodePtr = head;
            previousNode = nullptr;

            while (nodePtr != nullptr && nodePtr -> value < val.getID()) {
                previousNode = nodePtr;
                nodePtr = nodePtr -> next;
            }

            if (previousNode == nullptr) {
                head = newNode;
                newNode -> next = nodePtr;
            }
            else {
                previousNode -> next = newNode;
                newNode -> next = nodePtr;
            }
        }
    }

    bool checkIfNull() {
        NodeList *nodePtr;

        if (!head) {
            return true;
        }
        return false;
    }

    void deleteFromList(int id) {
        NodeList *nodePtr;
        NodeList *previousNode;

        if (!head) {
            return;
        }

        if (head -> value == id) {
            nodePtr = head -> next;
            delete head;
            head = nodePtr;
        }
        else {
            nodePtr = head;

            while (nodePtr != nullptr && nodePtr -> value != id) {
                previousNode = nodePtr;
                nodePtr = nodePtr -> next;
            }

            if (nodePtr) {
                    previousNode -> next = nodePtr -> next;
                    delete nodePtr;
                }
        }
    } 

    void clearList() {
        NodeList *nodePtr;
        
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

    ~LinkedList() {
        NodeList *nodePtr;
        
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

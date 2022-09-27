#pragma once
using namespace std;

template <class T>
class NodeList {
public:
    T value;
    NodeList<T> *next;

    NodeList(T val) {
        this->value = val;
        this->next = nullptr;
    }
};

template <class T>
class LinkedList {
private:
    NodeList<T> *head;

public:
    LinkedList() {
        head = nullptr;
    }

    void appendList(T val) {
        NodeList<T> *newNode;
        NodeList<T> *nodePtr;

       newNode = new NodeList<T>(val);

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
        NodeList<T> *nodePtr;

        nodePtr = head;

        while (nodePtr) {
            cout << endl << nodePtr->value;
            nodePtr = nodePtr -> next;
        }
    }

    void insertList(T val) {
        NodeList<T> *newNode;
        NodeList<T> *nodePtr;
        NodeList<T> *previousNode;

        newNode = new NodeList<T>(val);

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
        NodeList<T> *nodePtr;

        if (!head) {
            return true;
        }
        return false;
    }

    void deleteFromList(int id) {
        NodeList<T> *nodePtr;
        NodeList<T> *previousNode;

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
        NodeList<T> *nodePtr;
        
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
        NodeList<T> *nodePtr;
        
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
#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node *nextNode;
};

void printNodes (Node *nodes){
    while (nodes != NULL){
        cout << nodes->val << endl;
        nodes = nodes->nextNode;
    }
}

int main()
{
    Node *head = new Node();
    Node *second =  new Node();
    Node *third =  new Node();

    head->val = 1;
    head->nextNode = second;
    second->val = 2;
    second->nextNode = third;
    third->val = 3;
    third->nextNode = NULL;

    printNodes(head);
    return 0;
}

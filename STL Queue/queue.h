#pragma once
#include <iostream>
using namespace std;

template<class T>
class Queue {
private:
    T *queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;

public:
    Queue(int size) {
        this->queueArray = new T[size];
        this->queueSize = size;
        this->front = -1;
        this->rear = -1;
        this->numItems = 0;
    }

    Queue(const Queue &obj) {
        this->queueArray = obj.queueArray;
        this->queueSize = obj.queueSize;
        this->front = obj.front;
        this->rear = obj.rear;
        this->numItems = obj.numItems;

        for (int i=0; i<obj.queueSize; i++) {
            queueArray[i] = obj.queue[i];
        }
    }

    ~Queue() {
        delete [] queueArray;
    }

    bool isEmpty() {
        return !numItems;
    }

    bool isFull() {
        return !(numItems < queueSize);
    } 

    void enqueue(T obj) {
        if (isFull()) {
            cout << "The queue is full.\n";
            return;
        }

        rear = (rear + 1) % queueSize;
        queueArray[rear] = obj;
        numItems++;
    }

    void dequeue(T &obj) {
        if (isEmpty()) {
            cout << "The queue is empty.\n";
            obj = -1;
            return;
        }
        
        front = (front + 1) % queueSize;
        obj = queueArray[front];
        numItems--;
    }

    void clearQueue() {
        front = queueSize--;
        rear = queueSize--;
        numItems = 0;
    }
};
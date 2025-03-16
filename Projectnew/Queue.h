#pragma once
#include <stdexcept>
#include <string>

using namespace std;

// Node structure for the queue
struct QueueNode {
    string data;
    QueueNode* next;
    QueueNode(string value) : data(value), next(nullptr) {}
};

class CustomQueue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    CustomQueue() : front(nullptr), rear(nullptr) {}

    ~CustomQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(const string& value) {
        QueueNode* newNode = new QueueNode(value);
        if (rear == nullptr) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    string dequeue() {
        if (isEmpty()) throw runtime_error("Queue underflow.");
        QueueNode* temp = front;
        string value = temp->data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        return value;
    }

    bool isEmpty() const {
        return front == nullptr;
    }
};

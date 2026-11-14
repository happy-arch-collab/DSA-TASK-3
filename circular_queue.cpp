//Implementation of circular queue using C++
#include <iostream>
using namespace std;

#define SIZE 5

int queueArray[SIZE];
int front = -1;
int rear = -1;

// Check whether queue is full
bool isFull() {
    return (rear+1) % SIZE == front;
}

// Check whether queue is empty
bool isEmpty() {
    return front ==  -1;
}

// Insert an element
void enqueue(int value) {
    if (isFull()) {
        cout<<"Queue Overflow\n";
        return;
    }

    if (isEmpty()) {
        front = 0;
    }

    rear = (rear + 1) % SIZE;
    queueArray[rear] = value;

    cout<<value<<" inserted\n";
}

// Remove an element
void dequeue() {
    if (isEmpty()) {
        cout<<"Queue Underflow\n";
        return;
    }

    cout<<queueArray[front]<<" removed\n";

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Display queue elements
void display() {
    if (isEmpty()) {
        cout<<"Queue is empty\n";
        return;
    }

    int i = front;

    cout<<"Queue: ";

    while (true) {
        cout<<queueArray[i]<<" ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    cout<<endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    enqueue(50);
    enqueue(60);

    display();

    return 0;
}

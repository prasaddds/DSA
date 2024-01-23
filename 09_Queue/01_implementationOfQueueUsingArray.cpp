#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

void enqueue(int arr[], int &front, int &rear, int data, int capacity) {
    if ((rear + 1) % capacity == front) {
        cout << "Queue is full. Cannot enqueue more elements." << endl;
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % capacity;
    }
    arr[rear] = data;
}

void dequeue(int arr[], int &front, int &rear, int capacity) {
    if (front == -1) {
        cout << "Queue is empty. Cannot dequeue from an empty queue." << endl;
        return;
    }
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % capacity;
    }
}

void printElements(int arr[], int front, int rear, int capacity) {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    int i = front;
    while (i != rear) {
        cout << arr[i] << " ";
        i = (i + 1) % capacity;
    }
    cout << arr[rear] << endl;
}

bool isFull(int front, int rear, int capacity) {
    return (rear + 1) % capacity == front;
}

bool isEmpty(int front, int rear) {
    return front == -1;
}

int getFront(int arr[], int front) {
    if (front != -1) {
        return arr[front];
    }
    cout << "Queue is empty. No front element." << endl;
    return -1;
}

int getRear(int arr[], int rear) {
    if (rear != -1) {
        return arr[rear];
    }
    cout << "Queue is empty. No rear element." << endl;
    return -1;
}

int main() {
    int capacity;
    cout << "Enter capacity of the queue: ";
    cin >> capacity;

    int arr[MAX_SIZE];
    int front = -1, rear = -1;

    enqueue(arr, front, rear, 10, capacity);
    enqueue(arr, front, rear, 20, capacity);
    enqueue(arr, front, rear, 30, capacity);

    cout << "Front element: " << getFront(arr, front) << endl;
    cout << "Rear element: " << getRear(arr, rear) << endl;

    dequeue(arr, front, rear, capacity);

    cout << "Front element after dequeue: " << getFront(arr, front) << endl;
    cout << "Rear element after dequeue: " << getRear(arr, rear) << endl;

    cout << "Elements in the queue: ";
    printElements(arr, front, rear, capacity);

    cout << "Is the queue full? " << (isFull(front, rear, capacity) ? "Yes" : "No") << endl;
    cout << "Is the queue empty? " << (isEmpty(front, rear) ? "Yes" : "No") << endl;

    return 0;
}

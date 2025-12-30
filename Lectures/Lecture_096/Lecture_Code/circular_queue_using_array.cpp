#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear;
    int capacity;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = rear = -1;
        capacity = n;
    }

    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue Overflow :)\n";
            return;
        }

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = x;

        cout << "Pushed " << arr[rear] << " into Queue.\n";
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow :)\n";
            return;
        }

        cout << "Popped " << arr[front] << " from the queue.\n";

        if (front == rear)
        {
            front = rear = -1;
        }
        else
            front = (front + 1) % capacity;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }

    int start()
    {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    void printQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty.\n";
            return;
        }

        cout << "Printing Queue: ";

        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % capacity;
        }

        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    cout << "At start: " << q.start() << endl;
    
    q.printQueue();
    
    q.pop();
    q.pop();
    q.pop();
    
    q.printQueue();
    
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    return 0;
}
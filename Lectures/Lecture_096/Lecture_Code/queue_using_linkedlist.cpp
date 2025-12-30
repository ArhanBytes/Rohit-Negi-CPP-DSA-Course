#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;
    int size;

public:
    Queue()
    {
        front = rear = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);

        // which means full as heap will full the temp couldn't able to take a space in memory therefore it will contain NULL value
        if (temp == NULL)
        {
            cout << "Queue Overflow :)\n";
            return;
        }

        cout << "Pushed " << x << " into Queue.\n";

        if (isEmpty())
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = rear->next;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow :)\n";
            return;
        }

        Node *temp = front;

        front = front->next;
        if (front == NULL)
            front = rear = NULL;

        cout << "Popped " << temp->data << " from the queue.\n";
        delete temp;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    int start()
    {
        if (isEmpty())
            return -1;

        return front->data;
    }

    void printQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty.\n";
            return;
        }

        Node *temp = front;

        cout << "Printing Queue: ";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};
int main()
{
    Queue q;

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

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    return 0;
}
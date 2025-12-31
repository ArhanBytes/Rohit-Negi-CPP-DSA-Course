#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

class dequeue
{
    Node *front, *rear;

public:
    dequeue()
    {
        front = rear = NULL;
    }

    void push_front(int x)
    {
        Node *temp = new Node(x);
        if (isEmpty())
            front = rear = temp;
        else
        {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }

    void push_back(int x)
    {
        Node *temp = new Node(x);
        if (isEmpty())
            front = rear = temp;
        else
        {
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
    }

    void pop_front()
    {
        Node *temp = front;
        if (isEmpty())
            return;
        else if (front->next == NULL)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
            front->prev = NULL;
        }

        delete temp;
    }

    void pop_back()
    {
        Node *temp = rear;
        if (isEmpty())
            return;
        else if (front->next == NULL)
            front = rear = NULL;
        else
        {
            rear = rear->prev;
            rear->next = NULL;
        }

        delete temp;
    }

    int start()
    {
        if (isEmpty())
            return -1;

        return front->data;
    }

    int end()
    {
        if (isEmpty())
            return -1;

        return rear->data;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void print()
    {
        if(isEmpty())
        {
            cout << "Dequeue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Dequeue: ";
        while(temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    dequeue dq;

    // PUSH OPERATIONS
    dq.push_front(5);
    dq.push_front(15);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(2);
    dq.push_back(9);
    
    // PRINTING DEQUEUE
    dq.print();
    
    // POP OPERATIONS
    dq.pop_back();
    dq.print();
    dq.pop_front();
    dq.print();
    
    cout << "Start element: " << dq.start() << endl;
    cout << "Back Element: " << dq.end() << endl;
    cout << "is Empty: " << dq.isEmpty();
    return 0;
}
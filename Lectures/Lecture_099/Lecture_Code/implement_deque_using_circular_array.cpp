#include <iostream>
using namespace std;

class dequeue
{
    int *arr;
    int front, rear;
    int capacity;

public:
    dequeue(int n)
    {
        arr = new int[n];
        capacity = n;
        front = rear = -1;
    }

    void push_front(int x)
    {
        if (isFull())
            return;
        else if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else
        {
            front = (front + capacity - 1) % capacity;
            arr[front] = x;
        }
    }

    void push_back(int x)
    {
        if (isFull())
            return;
        else if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else
        {
            rear = (rear + 1) % capacity;
            arr[rear] = x;
        }
    }

    void pop_front()
    {
        if (isEmpty())
            return;
        else if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
    }

    void pop_back()
    {
        if (isEmpty())
            return;
        else if (front == rear)
            front = rear = -1;
        else
            rear = (rear + capacity - 1) % capacity;
    }

    int start()
    {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int end()
    {
        if (isEmpty())
            return -1;
        return arr[rear];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Dequeue is empty.\n";
            return;
        }

        int temp = front;
        cout << "Dequeue: ";
        while (true)
        {
            cout << arr[temp] << " ";

            if (temp == rear)
                break;

            temp = (temp + 1) % capacity;
        }
        cout << endl;
    }
};

int main()
{
    dequeue dq(10);

    // PUSH OPERATIONS
    dq.push_front(5);
    dq.push_front(15);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(2);
    dq.push_back(9);
    dq.push_back(19);
    dq.push_back(119);
    dq.push_back(91);
    dq.push_back(911);
    dq.push_back(0);

    cout << "is Full: " << (dq.isFull() ? "YES" : "NO") << endl;

    // PRINTING DEQUEUE
    dq.print();

    // POP OPERATIONS
    dq.pop_back();
    dq.print();
    dq.pop_front();
    dq.print();

    cout << "Start element: " << dq.start() << endl;
    cout << "Back Element: " << dq.end() << endl;
    cout << "is Empty: " << dq.isEmpty() << endl;
    cout << "is Full: " << dq.isFull() << endl;
    return 0;
}
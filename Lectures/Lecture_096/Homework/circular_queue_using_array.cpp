class myQueue
{
    int *arr;
    int front, rear;
    int capacity;

public:
    myQueue(int n)
    {
        arr = new int[n];
        front = rear = -1;
        capacity = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int x)
    {
        if (isFull())
            return;
        else if (isEmpty())
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear = (rear + 1) % capacity;
            arr[rear] = x;
        }
    }

    void dequeue()
    {
        if (isEmpty())
            return;

        if (front == rear)
            front = rear = -1;
        else
        {
            front = (front + 1) % capacity;
        }
    }

    int getFront()
    {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;

        return arr[rear];
    }
};
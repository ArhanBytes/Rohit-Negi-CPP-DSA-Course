class Node
{
public:
    int data;
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

class myQueue
{
    Node *front, *rear;
    int s;

public:
    myQueue()
    {
        front = rear = NULL;
        s = 0;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        s++;
        if (isEmpty())
        {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = rear->next;
    }

    void dequeue()
    {
        if (isEmpty())
            return;

        Node *temp = front;

        front = front->next;
        if (front == NULL)
            front = rear = NULL;

        delete temp;
        s--;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;

        return front->data;
    }

    int size()
    {
        return s;
    }
};

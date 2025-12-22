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

class myStack
{
private:
    // Define your stack
    Node *top;
    int s;

public:
    myStack()
    {
        top = NULL;
        s = 0;
    }
    void push(int x)
    {
        // insert x into stack
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;

        s++;
    }

    void pop()
    {
        // remove top ele from stack
        if (isEmpty())
            return;

        Node *temp = top;
        top = top->next;
        delete temp;

        s--;
    }

    int peek()
    {
        // return top of stack
        if (isEmpty())
            return -1;

        return top->data;
    }

    int getSize()
    {
        // return current size of stack
        return s;
    }

    bool isEmpty()
    {
        // check whether stack is empty
        return s == 0;
    }
};
/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack
{
    Node *top;
    int s;

public:
    myStack()
    {
        // Initialize your data members
        top = NULL;
        s = 0;
    }

    bool isEmpty()
    {
        // check if the stack is empty
        return s == 0;
    }

    void push(int x)
    {
        // Adds an element x at the top of the stack
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        s++;
    }

    void pop()
    {
        // Removes the top element of the stack
        if (isEmpty())
            return;

        Node *temp = top;
        top = top->next;
        delete temp;

        s--;
    }

    int peek()
    {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if (isEmpty())
            return -1;

        return top->data;
    }

    int size()
    {
        // Returns the current size of the stack.
        return s;
    }
};
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }
    // 1: PUSH
    void push(int n)
    {
        Node *temp = new Node(n);
        if (temp == NULL)
        {
            cout << "Stack Overflow :)\n";
            return;
        }

        temp->next = top;
        top = temp;
        size++;

        cout << "Push Operation: " << n << " is pushed into stack.\n";
    }

    // 2: POP
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow :)\n";
            return;
        }

        Node *temp = top;
        top = top->next;
        size--;

        cout << "POP Operation: " << temp->data << " is Popped from stack.\n";

        delete temp;
    }

    // 3: PEEK
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty.\n";
            return -1;
        }

        return top->data;
    }

    // 4: size
    int isSize()
    {
        return size;
    }

    // 5: EMPTY
    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack s;
    // PUSH OPERATION
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Size of Stack: " << s.isSize() << endl;
    cout << "IsEmpty? " << (s.isEmpty() ? "YES" : "NO") << endl;

    // PEEK
    int v = s.peek();
    if (!(s.isEmpty())) // means stack isn't empty
        cout << "Peek Element: " << v << endl;

    // POP OPERATION
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << "Size of Stack: " << s.isSize() << endl;
    cout << "IsEmpty? " << (s.isEmpty() ? "YES" : "NO") << endl;

    // PEEK
    int value = s.peek();
    if (!(s.isEmpty())) // means stack isn't empty
        cout << "Peek Element: " << value << endl;

    return 0;
}
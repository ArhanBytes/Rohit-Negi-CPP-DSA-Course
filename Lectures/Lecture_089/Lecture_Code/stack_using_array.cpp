#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    bool flag; // it will tell the stack is empty or not
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
        flag = 1;
    }

    // 1: PUSH
    void push(int n)
    {
        if (isFull())
        {
            cout << "Stack Overflow :)\n";
            return;
        }

        top++;
        arr[top] = n;
        cout << "Push Operation: " << n << " is pushed into stack.\n";
        flag = 0;
    }

    // 2: POP
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow :)\n";
            return;
        }

        cout << "POP Operation: " << arr[top] << " is Popped from stack.\n";
        top--;

        if (top == -1)
            flag = 1;
    }

    // 3: PEEK
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty :)\n";
            return -1;
        }

        return arr[top];
    }

    int isSize()
    {
        return top + 1;
    }

    // 4: EMPTY
    bool isEmpty()
    {
        return top == -1;
    }
    // 5: FULL
    bool isFull()
    {
        return top == capacity - 1;
    }
};

int main()
{
    int capacity = 5;
    Stack s(capacity);

    // PUSH OPERATION
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "IsEmpty? " << (s.isEmpty() ? "YES" : "NO") << endl;
    cout << "IsFull? " << (s.isFull() ? "YES" : "NO") << endl;

    // POP OPERATION
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << "Size of Stack: " << s.isSize() << endl;
    
    // PEEK
    int value = s.peek();
    if (s.flag == 0) // means stack isn't empty
        cout << "Peek Element: " << value << endl;

    return 0;
}
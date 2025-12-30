class twoStacks
{
public:
    static const int MAX = 100;
    int *arr;
    int top1, top2;
    int capacity;

    twoStacks()
    {
        int n = MAX;
        arr = new int[n];
        capacity = n;
        top1 = -1;
        top2 = n;
    }

    // Function to push an integer into the stack1.
    void push1(int x)
    {
        if (top1 + 1 == top2)
            return;

        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {
        if (top2 - 1 == top1)
            return;

        top2--;
        arr[top2] = x;
    }

    // Function to remove an element from top of the stack1.

    int pop1()
    {
        if (top1 == -1)
            return -1;

        int num = arr[top1];
        top1--;

        return num;
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 == capacity)
            return -1;

        int num = arr[top2];
        top2++;

        return num;
    }
};
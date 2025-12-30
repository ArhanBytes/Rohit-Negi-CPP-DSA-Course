#include <bits/stdc++.h>

class Node
{
public:
    int index;
    Node *next;
    Node(int x)
    {
        index = x;
        next = NULL;
    }
};

class NStack
{
public:
    // Initialize your data structure
    stack<int> st;
    int *arr;
    Node **Top;

    NStack(int N, int S)
    {
        arr = new int[S];
        Top = new Node *[N];

        // initialize n stack array to NULL
        for (int i = 0; i < N; i++)
            Top[i] = NULL;

        // add the empty positions to stack
        for (int i = 0; i < S; i++)
            st.push(i);
    }

    bool push(int x, int m)
    {
        // array is full
        if (st.empty())
            return 0;

        // array isn't full

        // 1: place the value in an array
        arr[st.top()] = x;

        // 2: record it in stack array
        Node *temp = new Node(st.top());
        temp->next = Top[m - 1];
        Top[m - 1] = temp;

        // pop from the stack as this position is used
        st.pop();

        return 1; // successfully pushed
    }

    int pop(int m)
    {
        // if the that stack is empty
        if (Top[m - 1] == NULL)
            return -1;

        Node *temp = Top[m - 1];
        int element = arr[temp->index];

        // 1: release this position and push into stack
        st.push(temp->index);

        // 2: remove that node from the m stack
        Top[m - 1] = temp->next;

        delete temp;

        return element;
    }
};

// website access denied WHY? 
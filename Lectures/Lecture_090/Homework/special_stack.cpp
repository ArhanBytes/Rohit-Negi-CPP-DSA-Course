int minimum = 10001;

void push(stack<int> &s, int a)
{
    s.push(a);
    minimum = min(minimum, a);
}

bool isFull(stack<int> &s, int n)
{
    return s.size() == n;
}

bool isEmpty(stack<int> &s)
{
    return s.empty();
}

int pop(stack<int> &s)
{
    int peek = s.top();
    s.pop();
    return peek;
}

int getMin(stack<int> &s)
{
    int res = minimum;
    minimum = 10001;
    return res;
}
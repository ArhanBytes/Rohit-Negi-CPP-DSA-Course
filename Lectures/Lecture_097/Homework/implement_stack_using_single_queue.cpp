class MyStack
{
public:
    queue<int> q;
    MyStack() {}

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        if (empty())
            return 0;

        int s = q.size() - 1;

        while (s--)
        {
            q.push(q.front());
            q.pop();
        }

        int element = q.front();
        q.pop();

        return element;
    }

    int top()
    {
        if (empty())
            return 0;

        return q.back();
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
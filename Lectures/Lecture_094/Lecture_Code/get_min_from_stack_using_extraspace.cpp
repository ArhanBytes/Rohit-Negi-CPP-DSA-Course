class SpecialStack
{
public:
    stack<int> st1;
    stack<int> st2;

    SpecialStack()
    {
    }

    void push(int x)
    {
        if (st1.empty())
        {
            st1.push(x);
            st2.push(x);
            return;
        }

        st1.push(x);
        st2.push(min(x, st2.top()));
    }

    void pop()
    {
        if (st1.empty())
            return;

        st1.pop();
        st2.pop();
    }

    int peek()
    {
        if (st1.empty())
            return -1;

        return st1.top();
    }

    bool isEmpty()
    {
        return st1.empty();
    }

    int getMin()
    {
        if (st1.empty())
            return -1;

        return st2.top();
    }
};
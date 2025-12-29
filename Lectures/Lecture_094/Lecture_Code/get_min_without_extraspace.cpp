class SpecialStack
{
public:
    stack<long long> st;
    const long long base = 1000000001LL;
    SpecialStack()
    {
    }

    void push(int x)
    {
        if (st.empty())
        {
            st.push(x * base + x);
            return;
        }

        st.push(x * base + min(getMin(), x));
    }

    void pop()
    {
        if (st.empty())
            return;

        st.pop();
    }

    int peek()
    {
        if (st.empty())
            return -1;

        return (int)(st.top() / base);
    }

    bool isEmpty()
    {
        return st.empty();
    }

    int getMin()
    {
        if (st.empty())
            return -1;

        return (int)(st.top() % base);
    }
};
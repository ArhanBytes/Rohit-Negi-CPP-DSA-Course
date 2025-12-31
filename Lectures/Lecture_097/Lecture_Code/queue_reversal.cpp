class Solution
{
public:
    void reverseQueue(queue<int> &q)
    {
        stack<int> st;

        while (!q.empty())
        {
            st.push(q.front());
            q.pop();
        }

        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
};
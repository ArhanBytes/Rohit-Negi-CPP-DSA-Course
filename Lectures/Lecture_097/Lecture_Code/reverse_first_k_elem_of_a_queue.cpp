class Solution
{
public:
    queue<int> reverseFirstK(queue<int> q, int k)
    {
        stack<int> st;

        // ensures not more than queue size

        if (k > q.size())
            return q;

        // put k elements to stack
        while (k--)
        {
            st.push(q.front());
            q.pop();
        }

        // remainin element size
        int s = q.size();

        // put the stack element back to queue
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }

        // remaining element after popping should be pop from front and add to rear to getthe desired output
        while (s--)
        {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
// User function Template for C++

class Solution
{
public:
    stack<int> insertAtBottom(stack<int> st, int x)
    {
        // insert all the element in temporary stack
        stack<int> temp;

        while (!(st.empty()))
        {
            temp.push(st.top());
            st.pop();
        }

        st.push(x);

        while (!(temp.empty()))
        {
            st.push(temp.top());
            temp.pop();
        }

        return st;
    }
};
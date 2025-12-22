class Solution
{
public:
    void sortStack(stack<int> &st)
    {
        stack<int> helper;
        stack<int> temp;

        temp.push(st.top());
        st.pop();

        while (!st.empty())
        {
            int peek = st.top();
            st.pop();

            // inserting the smaller number to helper stack
            while (!temp.empty() && temp.top() < peek)
            {
                helper.push(temp.top());
                temp.pop();
            }

            // push the number in it's exact position
            temp.push(peek);

            // inserting back to temp stack from helper stack
            while (!helper.empty())
            {
                temp.push(helper.top());
                helper.pop();
            }
        }

        // enter the temp stack value to original stack

        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
};

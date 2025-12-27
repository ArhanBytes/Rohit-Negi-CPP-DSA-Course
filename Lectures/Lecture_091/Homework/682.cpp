class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st;

        for (const string &s : operations)
        {
            // if there is Double
            if (s == "D")
                st.push(st.top() * 2);
            // if there is cut
            else if (s == "C")
                st.pop();
            // if there is addition
            else if (s == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }
            // if there is number
            else
                st.push(stoi(s));
        }

        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
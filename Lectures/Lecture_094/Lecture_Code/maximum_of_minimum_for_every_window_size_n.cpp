class Solution
{
public:
    vector<int> maxOfMins(vector<int> &arr)
    {
        //  code here
        int n = arr.size();
        vector<int> ans(n, 0);

        stack<int> st;

        int index, windowSize;
        for (int i = 0; i < n; i++)
        {
            // finding the next smaller element
            while (!st.empty() && arr[i] < arr[st.top()])
            {
                // take the main element
                index = st.top();
                st.pop();

                // kitni window size ka liiya minimum hai
                if (st.empty())
                    windowSize = i;
                else
                    windowSize = i - st.top() - 1;

                // update just that paricular (windowSize)th element
                ans[windowSize - 1] = max(ans[windowSize - 1], arr[index]);
            }

            st.push(i);
        }
        // jinka next smallest mila hi nhi unka liya yeah case krna parega

        while (!st.empty())
        {
            index = st.top();
            st.pop();

            if (st.empty())
                windowSize = n;
            else
                windowSize = n - st.top() - 1;

            ans[windowSize - 1] = max(ans[windowSize - 1], arr[index]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = max(ans[i], ans[i + 1]);
        }
        return ans;
    }
};
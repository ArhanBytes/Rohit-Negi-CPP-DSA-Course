class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n, -1);

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[i] >= arr[st.top()])
            {
                st.pop();
            }

            if (!st.empty())
            {
                ans[i] = arr[st.top()];
            }

            st.push(i);
        }

        return ans;
        
    }
};
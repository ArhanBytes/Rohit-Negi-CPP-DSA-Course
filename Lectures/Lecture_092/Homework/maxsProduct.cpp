int Solution::maxSpecialProduct(vector<int> &nums)
{
    int n = nums.size();
    const long long MOD = 1e9 + 7;
    vector<long long> NGL(n, 0), NGR(n, 0);
    stack<int> st;

    // NEXT GREATER ON NGL
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && nums[i] >= nums[st.top()])
        {
            st.pop();
        }
        if (!st.empty())
            NGL[i] = st.top();
        st.push(i);
    }

    // clear stack
    while (!st.empty())
        st.pop();

    // NEXT GREATER ON RIGHT
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[i] >= nums[st.top()])
        {
            st.pop();
        }
        if (!st.empty())
            NGR[i] = st.top();
        st.push(i);
    }

    // Compute max product
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long val = NGL[i] * NGR[i];
        ans = max(ans, val);
    }

    return (int)(ans % MOD);
}

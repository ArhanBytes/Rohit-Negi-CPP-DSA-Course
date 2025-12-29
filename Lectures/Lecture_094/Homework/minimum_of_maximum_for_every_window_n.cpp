#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> minOfmaxs(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, INT32_MAX);

    stack<int> st;

    int index, windowSize;
    for (int i = 0; i < n; i++)
    {
        // find the next greater element
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            // take the main element
            index = st.top();
            st.pop();

            // kitni window size ka liya maximum hai
            if (st.empty())
                windowSize = i;
            else
                windowSize = i - st.top() - 1;

            // update just that paricular (windowSize)th element
            ans[windowSize - 1] = min(ans[windowSize - 1], arr[index]);
        }

        st.push(i);
    }

    // jinka next greater mila hi nhi unka liya yeah case krna parega
    while (!st.empty())
    {
        index = st.top();
        st.pop();

        if (st.empty())
            windowSize = n;
        else
            windowSize = n - st.top() - 1;

        ans[windowSize - 1] = min(ans[windowSize - 1], arr[index]);
    }

    // minimum order maintain
    for (int i = n - 2; i >= 0; i--)
        ans[i] = min(ans[i], ans[i + 1]);

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};

    vector<int> ans;

    ans = minOfmaxs(arr);

    // Printing vector
    cout << "Printing the Minimum of Maximum for every Window: \n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << i + 1 << " Window: " << ans[i] << endl;
    }
    return -1;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> minOfmaxs(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, INT32_MAX);

    for (int i = 0; i < n; i++) // har aik window ka liya
    {
        for (int j = 0; j < n - i; j++) // total how many windows
        {
            int maxi = INT32_MIN;
            // we will find the minimum from that particular window
            for (int k = j; k <= j + i; k++) // window ka starting point sa ending point tk
            {
                maxi = max(maxi, arr[k]);
            }

            ans[i] = min(ans[i], maxi);
        }
    }

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
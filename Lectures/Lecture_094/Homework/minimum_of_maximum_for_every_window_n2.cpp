#include <iostream>
#include <vector>
using namespace std;

vector<int> minOfmaxs(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, INT32_MAX);

    for (int i = 0; i < n; i++)
    {
        int maxi = INT32_MIN;
        for (int j = i; j < n; j++)
        {
            maxi = max(maxi, arr[j]);
            // j-i+1 is a window size while storing in answer array the indexed is 0-based there fore j-i corespoinding to (j-i+1)th element
            ans[j - i] = min(ans[j - i], maxi);
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
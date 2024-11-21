#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {9, 5, 8, 12, 2, 2, 3, 7, 4};
    int ans = INT32_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> suffixMax(n);
    suffixMax[n - 1] = arr[n - 1];

    // suffix sum and finding maximum through suffix sum in one loop
    for (int i = n - 2; i >= 0; i--)
    {
        ans = max(ans, suffixMax[i + 1] - arr[i]);
        suffixMax[i] = max(arr[i], suffixMax[i + 1]);
    }

    cout << "Maximum Different between 2 elements: " << ans;

    return 0;
}
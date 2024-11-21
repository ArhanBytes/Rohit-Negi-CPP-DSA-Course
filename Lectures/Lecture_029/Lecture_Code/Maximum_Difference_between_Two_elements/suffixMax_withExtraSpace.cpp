#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {9, 5, 8, 12, 2, 2, 3, 7, 4};
    int ans = INT32_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);

    // suffix max vector
    vector<int> suffixMax(n);
    suffixMax[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suffixMax[i] = max(arr[i], suffixMax[i + 1]);
    }

    // finding maximum through suffix max
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, suffixMax[i + 1] - arr[i]);
    }

    cout << "Maximum Different between 2 elements: " << ans;

    return 0;
}
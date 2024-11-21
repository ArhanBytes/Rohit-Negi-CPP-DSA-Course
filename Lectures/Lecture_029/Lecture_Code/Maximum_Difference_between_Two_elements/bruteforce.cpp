#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {9, 5, 8, 12, 2, 2, 3, 7, 4};
    int ans = INT32_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ans = max(ans, arr[j] - arr[i]);
        }
    }

    cout << "Maximum Different between 2 elements: " << ans;

    return 0;
}
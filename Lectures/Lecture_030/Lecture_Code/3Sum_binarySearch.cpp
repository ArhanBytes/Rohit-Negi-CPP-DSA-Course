#include <iostream>
#include <algorithm>
using namespace std;
bool isTripletSum(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int find = x - arr[j] - arr[i];
            if (binary_search(arr + j + 1, arr + n, find))
                return 1;
        }
    }

    return 0;
}
int main()
{
    // we need sorted array
    int arr[] = {1, 4 , 6, 8, 10 , 45};
    int n = 6, x = 13;

    cout << (isTripletSum(arr, n, x) ? "Yes" : "No");

    return 0;
}
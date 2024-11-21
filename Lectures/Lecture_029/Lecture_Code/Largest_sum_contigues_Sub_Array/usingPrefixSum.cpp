#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, -6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximumSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        int prefixSum = 0;
        for (int j = i; j < n; j++)
        {
            prefixSum += arr[j];

            if (maximumSum < prefixSum)
                maximumSum = prefixSum;
        }
    }

    cout << "Maximum Sum : " << maximumSum;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, -6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximumSum = INT32_MIN;
    // ith loop for position where to start for example [4,] then [-6,] and so on
    for (int i = 0; i < n; i++)
    {
        // jth loop for identify how many subarray possible of size i - n **if** we start at ith position for example if we start from [4] we have 4 sub array 1st is of size 1, 2nd is of size 2, 3rd is of size 3 and 4th is of size 4
        for (int j = i; j < n; j++)
        {
            int subArraySum = 0;

            // kth loop just add the subarray and compare with maximum afterward;
            // [4],[4 -6], [4 -6 2],[4 -6 2 8]
            // [-6],[-6 2],[-6 2 8]
            // [2] [2 8]
            // [8]
            for (int k = i; k <= j; k++)
                subArraySum += arr[k];

            if (maximumSum < subArraySum)
                maximumSum = subArraySum;
        }
    }

    cout << "Maximum Sum : " << maximumSum;

    return 0;
}
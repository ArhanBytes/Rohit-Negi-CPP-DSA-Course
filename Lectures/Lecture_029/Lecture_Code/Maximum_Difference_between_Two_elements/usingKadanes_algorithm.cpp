#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {9, 5, 8, 12, 2, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
    // finding difference and storing in auxilary array
    vector<int> diff(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        diff[i] = arr[i + 1] - arr[i];
    }

    // the difference vector contain difference of adjacent element
    // now this problem has become largest sum so we can use kadanes algorithm in it

    int maxi = INT32_MIN, prefix = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += diff[i];

        maxi = max(maxi, prefix);

        if (prefix < 0)
            prefix = 0;
    }
    */
    
    // you can do without vector Here is the approach: 
    // initialize difference, prefix and maximumSum
        int diff ;
        int prefix = 0;
        int maxi = INT32_MIN;
        for(int i = 0; i < n-1; i++)
        {
            diff = arr[i+1] - arr[i];

            prefix += diff;

            maxi = max(maxi,prefix);

            if(prefix < 0)
                prefix = 0;

        }
    

    cout << "Maximum Different between 2 elements: " << maxi;

    return 0;
}
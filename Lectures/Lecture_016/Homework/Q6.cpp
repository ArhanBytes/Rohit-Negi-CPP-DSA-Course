#include <iostream>
using namespace std;
// it can be optimized better figure out after a while
int main()
{
    int arr[7] = {2, 9, 4, 8, 44, 22, 6};
    int n = 7; // size of array

    int smallest = INT32_MAX;
    int secondSmallest = INT32_MAX;
    int thirdSmallest = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        }
        else if (arr[i] < thirdSmallest)
        {
            thirdSmallest = arr[i];
        }
    }

    cout << "Third Smallest: " << thirdSmallest << endl;

    return 0;
}
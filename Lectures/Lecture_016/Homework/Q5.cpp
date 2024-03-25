#include <iostream>
using namespace std;
// it can be optimized better figure out after a while
int main()
{
    int arr[7] = {2, 9, 4, 8, 44, 22, 6};
    int n = 7; // size of array

    int largest = INT32_MIN;
    int secondLargest = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest: " << secondLargest << endl;

    return 0;
}
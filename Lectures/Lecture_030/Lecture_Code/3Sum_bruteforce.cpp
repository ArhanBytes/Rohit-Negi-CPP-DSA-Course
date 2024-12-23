#include <iostream>
using namespace std;
bool isTripletSum(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                    return 1;
            }
        }
    }

    return 0;
}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6, x = 13;


    cout << (isTripletSum(arr, n, x) ? "Yes" : "No");

    return 0;
}
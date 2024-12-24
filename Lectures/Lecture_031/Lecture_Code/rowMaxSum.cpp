#include <iostream>
using namespace std;

void print2Darray(int arr[][4], int row, int col)
{
    // row wise printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int maxSum(int arr1[][4], int row, int col)
{
    int maxi = INT32_MIN;
    int index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr1[i][j];

        if (total > maxi)
        {
            maxi = total;
            index = i;
        }
    }

    return index;
}

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // printing 2d array
    print2Darray(arr1, 3, 4);
    
    // Index of row max sum
    cout << "Index of Maximum sum of row: " << maxSum(arr1, 3, 4);
}
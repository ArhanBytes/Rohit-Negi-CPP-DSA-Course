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

void colSum(int arr1[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
            sum += arr1[i][j];

        cout << "Sum of " << j + 1 << " coloum: " << sum << endl;
    }
}

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // printing 2d array
    print2Darray(arr1, 3, 4);

    colSum(arr1, 3, 4);

    return 0;
}
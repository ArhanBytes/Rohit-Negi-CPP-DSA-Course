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

void diagonalSum(int arr[][4], int row, int col)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < row; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][col - i - 1];
    }

    cout << "First Diagonal Sum: " << sum1;
    cout << "\nSecond diagonal Sum: " << sum2;
}

int main()
{
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    // printing 2d array
    print2Darray(arr1, 4, 4);

    diagonalSum(arr1, 4, 4);
}
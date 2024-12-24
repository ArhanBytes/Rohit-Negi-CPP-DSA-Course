#include <iostream>
using namespace std;

void print2Darray(int arr[][4], int row, int col)
{
    // row wise printing
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";

    cout << endl;
}

void add_Subtract(int arr1[][4], int arr2[][4], int ans[][4], int row, int col, char op)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (op == '+')
                ans[i][j] = arr1[i][j] + arr2[i][j];
            else
                ans[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    print2Darray(ans, row, col);
}

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int ans[3][4];

    // Addition
    cout << "Addition: ";
    add_Subtract(arr1, arr2, ans, 3, 4, '+');

    // Subtraction
    cout << "Subtraction: ";
    add_Subtract(arr1, arr2, ans, 3, 4, '-');
}
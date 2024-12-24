#include <iostream>
using namespace std;

void print2Darray(int arr[][3], int row, int col)
{
    // row wise printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int diagonalSum(int arr[][3], int n)
{
    int totalSum = 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][n - i - 1];
    }

    totalSum = sum1 + sum2;
    // The diagonal sum repeats value only if the the n is odd
    if (n & 1)
    {
        // we need to get the element that is repeated for that we have to half the n and get the floor of it.
        // e.g: n = 3 ---> n/2 = 1.5 ---> floor = 1 so arr[1][1] is the repeated one

        int ri = n / 2; // ri is repeated Index :)
        totalSum = totalSum - arr[ri][ri];
    }

    return totalSum;
}

int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // printing 2d array
    print2Darray(arr1, 3, 3);

    cout << "The Diagonal Sum is: " << diagonalSum(arr1, 3);

    return 0;
}
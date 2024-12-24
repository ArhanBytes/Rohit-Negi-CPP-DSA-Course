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

int smallestElem(int arr[][3], int row, int col)
{
    int smallest = INT32_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }
        }
    }

    return smallest;
}

int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // printing 2d array
    print2Darray(arr1, 3, 3);

    cout << "Smallest Element is: " << smallestElem(arr1, 3, 3);

    return 0;
}
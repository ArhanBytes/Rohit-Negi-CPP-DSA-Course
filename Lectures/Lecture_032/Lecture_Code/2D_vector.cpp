#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int rows, col;
    cout << "Enter rows and Col: ";
    cin >> rows >> col;

    // 1: creating 2D vector
    vector<vector<int>> matrix(rows, vector<int>(col));

    // 2: getting values in 2d vector
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> matrix[i][j];
    }

    // 3: printing  2d vector
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "No of rows = " << matrix.size();
    cout << "\nNo of col = " << matrix[0].size();

    return 0;
}
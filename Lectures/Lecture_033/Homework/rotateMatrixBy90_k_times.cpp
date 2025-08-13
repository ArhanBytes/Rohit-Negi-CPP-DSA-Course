#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print2Dvector(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }
}

void rotateBy90(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // taking transpose first
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    // taking row reverse

    int s, e;
    for (int i = 0; i < n; i++)
    {
        s = 0, e = n - 1;
        while (s < e)
        {
            swap(matrix[i][s], matrix[i][e]);
            s++;
            e--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int k;
    cout << "How many times to rotate matix by 90? :";
    cin >> k;

    k = k % 4;

    cout << "Before Rotation: \n";
    print2Dvector(matrix);

    while (k)
    {
        rotateBy90(matrix);
        k--;
    }

    cout << "After Rotation: \n";
    print2Dvector(matrix);
    return 0;
}
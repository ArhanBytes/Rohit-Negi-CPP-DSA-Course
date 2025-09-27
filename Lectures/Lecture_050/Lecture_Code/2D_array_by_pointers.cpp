#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows and column: ";
    cin >> n >> m;

    // Creating an array which stores the address
    int **p = new int *[n];

    // creating 2D array;
    for (int i = 0; i < n; i++)
    {
        *(p + i) = new int[m];
    }

    // taking values from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> *(*(p + i) + j);
    }

    // printing values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << *(*(p + i) + j) << " ";
        cout << endl;
    }

    // Releasing the memory
    for (int i = 0; i < n; i++)
        delete[] *(p + i);

    delete[] p;
}
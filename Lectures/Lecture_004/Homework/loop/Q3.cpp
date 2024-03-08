#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Method 1:
    for (int i = 4; i <= n; i = i + 4)
    {
        cout << i << " ";
    }

    cout << endl;

    // Method 2:
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 4 == 0)
            cout << i << " ";
    }
}
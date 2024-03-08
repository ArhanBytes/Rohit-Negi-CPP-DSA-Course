#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Method 1:
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << " ";
    }

    cout << endl;

    // Method 2:
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
}
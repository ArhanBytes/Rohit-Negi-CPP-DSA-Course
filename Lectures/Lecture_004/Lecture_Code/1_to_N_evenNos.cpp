#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // METHOD 1:
    for (int count = 2; count <= n; count = count + 2)
    {
        cout << count << " ";
    }

    cout << endl;

    // METHOD 2:
    for (int count = 1; count <= n; count = count + 1)
    {
        if (count % 2 == 0)
            cout << count << " ";
    }
    return 0;
}
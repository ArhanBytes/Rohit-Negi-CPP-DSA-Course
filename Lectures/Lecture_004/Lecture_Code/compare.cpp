#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first Number: ";
    cin >> a;
    cout << "Enter your second Number: ";
    cin >> b;

    if (a > b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;
    cout << "Enter third Number: ";
    cin >> c;

    if (a > b || a > c)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    // Method 1
    if (n % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    // Method 2
    /*
    if (n % 2 == 1)
        cout << "ODD";
    else
        cout << "EVEN";
    */

    return 0;
}
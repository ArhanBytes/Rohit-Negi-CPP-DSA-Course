#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    // Pow()
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Power: " << n1 << "^" << n2 << "= " << pow(n1, n2) << endl;
    cout << "Square root of " << n2 << ": " << sqrt(n2) << endl;
    cout << "Minimum btw " << n1 << " and " << n2 << " is " << min(n1, n2) << endl;

    cout << "Maximum btw " << n1 << " and " << n2 << " is " << max(n1, n2) << endl;

    cout << "Before Swap: a=" << n1 << " and b=" << n2 << endl;
    swap(n1, n2);
    cout << "Before Swap: a=" << n1 << " and b=" << n2 << endl;

    return 0;
}
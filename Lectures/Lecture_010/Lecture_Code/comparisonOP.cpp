#include <iostream>
using namespace std;

int main()
{
    //------COMPARISON OP -------// retur n 0 or 1

    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // 1: == operator
    /*
    if (a == b)
        cout << "Yes";
    else
        cout << "No";
    */

    // 2: > , < , >= , <= , !=
    if (a >= b)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
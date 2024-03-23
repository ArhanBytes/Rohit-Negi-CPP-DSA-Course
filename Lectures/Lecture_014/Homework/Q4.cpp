#include <iostream>
using namespace std;

int swapNos(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before: a=" << a << ", b=" << b << endl;
    swapNos(a, b);
    cout << "After: a=" << a << ", b=" << b << endl;

    return 0;
}
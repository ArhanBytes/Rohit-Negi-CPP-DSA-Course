#include <iostream>
using namespace std;

int swapNos(int &a, int &b, int &c)
{
    int temp = a;
    a = c;
    c = b;
    b = temp;
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Before: a=" << a << ", b=" << b << ", c=" << c << endl;
    swapNos(a, b, c);
    cout << "After: a=" << a << ", b=" << b << ", c=" << c << endl;

    return 0;
}
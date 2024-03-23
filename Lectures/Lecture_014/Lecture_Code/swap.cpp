#include <iostream>
using namespace std;

void swap(int &a, int &b)
{ // pass by reference
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)
{ // function overloading
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    cout << "int type: " << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    cout << "float type: " << endl;
    float f1 = 4.6, f2 = 6.5;
    swap(f1, f2);
    cout << f1 << " " << f2 << endl;

    return 0;
}
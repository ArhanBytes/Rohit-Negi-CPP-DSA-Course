#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << &a << endl; // printing address of a

    int *ptr = &a;
    cout << "Address of a: " << ptr << endl; // printing address of a through pointer
    cout << "Value of a:" << *ptr << endl;    // printing value of a through pointer

    int b = 20;
    ptr = &b;
    cout << "Address of b: " << ptr << endl; // printing address of b through pointer
    cout << "Value of b:" << *ptr << endl;    // printing value of b through pointer

    *ptr = 15;
    cout << "Updated value print: " << *ptr << endl;

    float m = 2.6;
    float *ptr1 = &m;
    cout << ptr1 << endl;

    // identifying the size
    cout << "Size of ptr:" << sizeof(ptr) << endl;
    cout << "Size of ptr1:" << sizeof(ptr1) << endl;
}
#include <iostream>
using namespace std;

int main()
{
    //-------UNARY OP  ------//
    // POST INREMENT:
    int a = 10;
    int b = a++; // b =10, a = 11;
    cout << b << " " << a;

    // PRE INCREMENT:
    int a = 10;
    int b = ++a; // b = 11, a = 11;
    cout << b << " " << a;

    // POST DECCREMENT:
    int a = 10;
    int b = a--; // b = 10, a = 9;
    cout << b << " " << a;

    // PRE DECCREMENT:
    int a = 10;
    int b = --a; // b = 9, a= 9;
    cout << b << " " << a;

    return 0;
}
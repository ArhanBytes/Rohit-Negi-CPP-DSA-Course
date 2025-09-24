#include <iostream>
using namespace std;

void fun(int **p)
{
    **p = **p + 1;
}

int main()
{
    int n = 10;
    int *p = &n;     // single pointer
    int **p2 = &p;   // double pointer
    int ***p3 = &p2; // triple pointer

    cout << p << endl;
    cout << &p << endl;
    cout << p2 << endl;
    cout << &p2 << endl;
    cout << p3 << endl;

    // Modifying the values which is contained in the n variable

    *p = *p + 5;
    cout << n << endl;

    **p2 = **p2 + 5;
    cout << n << endl;

    ***p3 = ***p3 + 5;
    cout << n << endl;


    // changing value of variable n by function call
    fun(p2);
    cout << n << endl; 


    return 0;
}
#include <iostream>
using namespace std;

void fun(int *&p)
{
    p = p + 1;
}

int main()
{
    int n = 10;
    int *p = &n;

    cout << "Address Before: " << p << endl;
    fun(p);
    cout << "Address After: " << p << endl;
 
    return 0;
}
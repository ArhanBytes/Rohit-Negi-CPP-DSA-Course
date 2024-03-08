#include <iostream>
using namespace std;

int main()
{
    int a = 220; // first term
    int l = 730; // last term
    int d = 7;   // Common difference

    for (int i = a; i <= l; i = i + d)
        cout << i << " ";
    

    return 0;
}
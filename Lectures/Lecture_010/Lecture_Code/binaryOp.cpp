#include <iostream>
using namespace std;

int main()
{
    //------BINARY OP -------//
    cout << 13 / 2;   // int/int = int
    cout << 13.6 / 2; // float / int  = float
    cout << 13.2 * 4; // float * int = float
    cout << 4 * 13.2; // int * float= float
    cout << endl;

    //for my practice
    int a = 10 - 5 + 6 / 10 - 8 * 20;
    // steps followed
    /* 
    = 10 - 5 + 0 - 8 * 20; 
    = 10 - 5 + 0 - 160;
    = 5 + 0 - 160;
    = 5 - 160;
    = -155;
    */
    cout << a;
    return 0;
}
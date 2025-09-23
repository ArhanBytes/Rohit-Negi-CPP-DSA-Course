#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num;

    cout << "value of num Before: " << num << endl;

    // incrementing num variable by 5 with the help of Pointer p
    *p = *p + 5;
    cout << "value of num After: " << num << endl;


    return 0;
}
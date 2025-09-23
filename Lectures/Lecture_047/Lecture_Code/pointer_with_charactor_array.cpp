#include <iostream>
using namespace std;

int main()
{

    // Character Array
    char arr[5] = "1234";
    char *ptr = arr;
    cout << (void *)arr << endl;
    cout << (void *)ptr << endl;

    // Character Variable
    char name = 'a';
    char *ptr1 = &name;
    cout << (void *)&name << endl;
    cout << (void *)ptr1 << endl;
}
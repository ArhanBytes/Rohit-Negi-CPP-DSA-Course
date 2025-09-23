#include <iostream>
using namespace std;

int calculateLength(const char *str)
{
    int length = 0;
    // Calculate the length of string
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    const char *myString = "Hello, World!";
    cout << myString << endl;
    cout << "Length of the string: " << calculateLength(myString) << endl;
    return 0;
}

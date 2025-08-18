#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "arhan";

    int size = 0;
    while (s1[size] != '\0')
        size++;

    cout << "Size of String: " << size;
    return 0;
}
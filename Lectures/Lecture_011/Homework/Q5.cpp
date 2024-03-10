#include <iostream>
using namespace std;

int main()
{
    char alphabet = 'A';

    cout << "Uppercase alphabets: ";
    while (alphabet <= 'Z')
    {
        cout << alphabet << " ";
        alphabet++;
    }

    alphabet = 'a';
    cout << "\nLowercase alphabets: ";
    while (alphabet <= 'z')
    {
        cout << alphabet << " ";
        alphabet++;
    }

    return 0;
}
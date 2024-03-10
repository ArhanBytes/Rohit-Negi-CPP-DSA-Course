#include <iostream>
using namespace std;

int main()
{
    char name;
    cout << "Enter the character: ";
    cin >> name;

    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
        cout << "Vowel";
    else
        cout << "Consonent";

    return 0;
} 
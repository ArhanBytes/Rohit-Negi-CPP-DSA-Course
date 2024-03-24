#include <iostream>
using namespace std;

char convert(char small)
{
    char capital = 'A' + (small - 'a');
    return capital;
}

int main()
{
    char alphabet;
    cout << "Enter a small alphabet: ";
    cin >> alphabet;

    cout << "From : " << alphabet << " - To : " << convert(alphabet) << endl;

    return 0;
}
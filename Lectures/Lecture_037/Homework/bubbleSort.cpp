#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the value of string: ";
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
                isSwap = 1;
            }
        }
        if (!isSwap)
            break;
    }

    cout << "Sorted array: ";
    cout << s;

    return 0;
}
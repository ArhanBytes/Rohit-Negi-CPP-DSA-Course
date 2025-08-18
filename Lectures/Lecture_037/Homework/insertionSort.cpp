#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the value of string: ";
    cin >> s;

    int n = s.size();

    for (int i = 1; i < n; i++)
    {
        int selectedNumber = s[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (selectedNumber < s[j])
                s[j + 1] = s[j];
            else
            {
                break;
            }
        }
        s[j + 1] = selectedNumber;
    }

    cout << "Sorted array: ";
    cout << s;

    return 0;
}
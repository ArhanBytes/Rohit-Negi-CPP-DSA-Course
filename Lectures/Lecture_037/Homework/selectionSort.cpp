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
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] < s[index])
                index = j;
        }
        swap(s[i], s[index]);
    }

    cout << "Sorted array: " << s;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "arhan";

    cout << "Before: " << s1 << endl;

    // Reversing the string
    int s = 0, e = s1.size() - 1;
    while (s < e)
    {
        swap(s1[s], s1[e]);
        s++;
        e--;
    }

    cout << "After: " << s1 << endl;
    return 0;
}
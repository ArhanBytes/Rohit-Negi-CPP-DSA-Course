#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "level";

    int s = 0, e = s1.size() - 1;

    bool isPalindrome = true;
    while (s < e)
    {
        if (s1[s] != s1[e])
        {
            isPalindrome = false;
            break;
        }
        s++;
        e--;
    }

    cout << (isPalindrome ? "Yes! It is." : "No! It isn't.");
    return 0;
}
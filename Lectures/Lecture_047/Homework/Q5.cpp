#include <iostream>
#include <cstring>
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

bool isPalindrome(const char *str)
{
    // Check for palindrome
    int start = 0;
    int end = calculateLength(str)-1;

    while (start < end)
    {
        if(*(str+start) != *(str+end))
            return 0;
        
        start++,end--;
    }
    
    return 1;
}

int main()
{
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";

    cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") << endl;
    cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") << endl;

    return 0;
}

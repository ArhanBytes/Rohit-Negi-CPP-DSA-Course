#include <iostream>
using namespace std;

int main()
{
    // Approach 1: simply initialize letters one by one
    char arr[26];
    int n = 26; // no of alphabets

    // Approach 2: Play with the previous lecture concept of characters
    
    // initialize character with for loop 
    int i = 0;
    for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        arr[i] = alphabet;
        i++;
    }

    // printing the elements in an array
    cout << "Elements in Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
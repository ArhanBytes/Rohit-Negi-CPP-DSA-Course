#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
        // 1: Method 1
        char arr[] = {'a', 'p', 'p', 'l', 'e'};
        int size = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < size; i++)
            cout << arr[i];
        cout << endl;

        // 2: Method 2
        char arr1[10];
        cin >> arr1;
        arr1[2] = '\0';
        cout << arr1 << endl;

        // 3: Method 3
        string s = "Arhan";
        cin >> s;
        cout << s;
    */
    // -------Getline function-------
    string s1;
    getline(cin, s1);
    cout << s1 << endl;
    cout << "Size: " << s1.size() << endl;

    // -------Append Operation-------

    string ss1 = "arhan", s2 = "farhan";
    // string s3 = s1.append(s2);
    string s3 = ss1 + " " + s2;
    cout << s3 << endl;

    // -------Push/Pop back-------
    ss1.push_back('a');
    cout << ss1 << endl;
    // Or
    ss1 = ss1 + 'a';

    //-------Escape Character-------
    string s4 = "Arhan is a fucking \"legend\" person";
    cout << s4 << endl;
    cout << "\\";
    return 0;
}
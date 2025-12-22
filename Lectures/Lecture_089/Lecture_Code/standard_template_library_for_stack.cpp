#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // PUSH OPERATION
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Size of Stack: " << s.size() << endl;
    cout << "IsEmpty? " << (s.empty() ? "YES" : "NO") << endl;

    // PEEK
    int v = s.top();
    if (!(s.empty())) // means stack isn't empty
        cout << "Peek Element: " << v << endl;

    // POP OPERATION
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << "Size of Stack: " << s.size() << endl;
    cout << "IsEmpty? " << (s.empty() ? "YES" : "NO") << endl;

    return 0;
}
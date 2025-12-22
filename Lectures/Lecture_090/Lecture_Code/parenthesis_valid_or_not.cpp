#include <iostream>
#include <stack>
using namespace std;

// Method 1:
bool check(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (s.empty())
                return false;
            else
                s.pop();
        }
    }

    return s.empty();
}

// Method 2
bool check2(string str)
{
    int left = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            left++;
        else
        {
            if (left == 0)
                return false;
            else
                left--;
        }
    }

    return left == 0;
}

int main()
{
    string str = "(((())))()(";
    cout << "String: " << str << (check(str) ? " is Valid." : " is not Valid") << endl;
    return 0;
}
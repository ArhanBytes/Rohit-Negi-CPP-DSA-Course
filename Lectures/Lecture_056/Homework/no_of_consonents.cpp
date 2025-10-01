#include <iostream>
using namespace std;

bool isConsonent(char c)
{
    c = tolower(c);
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int count(string &str, int index)
{
    if (index == -1)
        return 0;

    return isConsonent(str[index]) + count(str, index - 1);
}

int main()
{
    string str = "arhan";
    cout << "No of consonents in " << str << " : " << count(str, str.size() - 1);
    return 0;
}
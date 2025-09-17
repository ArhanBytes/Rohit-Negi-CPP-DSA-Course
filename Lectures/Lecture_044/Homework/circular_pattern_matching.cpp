#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string txt = "ionson";
    string pat = "ono";

    // 1: first find the longest prefix suffix of string pat
    vector<int> lps(pat.size(), 0);

    int prefix = 0, suffix = 1;
    while (suffix < pat.size())
    {
        if (pat[prefix] == pat[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }

    // now since it is circular pattern we can write the same string txt after it.
    txt += txt;

    // now searching if string pat exist in the txt or not
    int first = 0, second = 0;
    while (first < txt.size() && second < pat.size())
    {
        if (txt[first] == pat[second])
        {
            first++, second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }

    if (second == pat.size())
        cout << 1;
    else
        cout << 0;
}
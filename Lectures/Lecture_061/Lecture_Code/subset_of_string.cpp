#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subsequence(string &s, int index, int n, vector<string> &ans, string temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // for NO
    subsequence(s, index + 1, n, ans, temp);
    // for YES
    temp.push_back(s[index]);
    subsequence(s, index + 1, n, ans, temp);
    // temp.pop_back();
}

int main()
{
    string s = "abcd";
    vector<string> ans;
    string temp = "";

    subsequence(s, 0, s.size(), ans, temp);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
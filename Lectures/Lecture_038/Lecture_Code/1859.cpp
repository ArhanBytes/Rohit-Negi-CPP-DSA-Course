class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> v(10, "");
        int count = 0;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            temp += s[i];
            if ((i == s.size() - 1) || (s[i + 1] == ' '))
            {
                int pos = s[i] - '0'; // temp[temp.size() -1]
                temp.pop_back();
                v[pos] = temp;
                temp = "";
                i++;
                count++;
            }
        }

        s = "";
        for (int i = 1; i <= count; i++)
        {
            s = s + (v[i] + ' ');
        }

        s.pop_back();
        return s;
    }
};
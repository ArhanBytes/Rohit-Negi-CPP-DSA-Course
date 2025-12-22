class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        stack<char> temp;
        int i;
        for (i = 0; i < s.size(); i++)
            temp.push(s[i]);

        i = 0;
        while (!(temp.empty()))
        {
            s[i] = temp.top();
            i++;
            temp.pop();
        }
    }
};
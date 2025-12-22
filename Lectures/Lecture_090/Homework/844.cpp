class Solution
{
public:
    void process(string &s, stack<char> &stk)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                if (!stk.empty())
                    stk.pop();
            }
            else
                stk.push(s[i]);
        }
    }
    bool backspaceCompare(string s, string t)
    {
        stack<char> temp1;
        stack<char> temp2;

        // black space process if # appear then remvoe top else push the character
        process(s, temp1);
        process(t, temp2);

        // compare both stack
        while ((!temp1.empty() && !temp2.empty()) && temp1.top() == temp2.top())
        {
            temp1.pop();
            temp2.pop();
        }

        return temp1.empty() && temp2.empty();
    }
};
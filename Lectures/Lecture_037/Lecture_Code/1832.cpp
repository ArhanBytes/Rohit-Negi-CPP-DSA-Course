class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        bool arr[26] = {false};

        for (int i = 0; i < sentence.size(); i++)
            arr[sentence[i] % 'a'] = true;

        for (int i = 0; i < 26; i++)
        {
            if (!arr[i])
                return false;
        }

        return true;
    }
};
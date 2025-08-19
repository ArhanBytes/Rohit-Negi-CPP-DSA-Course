class Solution
{
public:
    string sortVowels(string s)
    {
        int lower[26] = {0};
        int upper[26] = {0};

        // putting vowels to vowel vector
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                lower[s[i] - 'a'] += 1;
                s[i] = '#';
            }

            else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                upper[s[i] - 'A'] += 1;
                s[i] = '#';
            }
        }

        // sorting of vowels
        string sorted_vowels = "";
        for (int i = 0; i < 26; i++)
        {
            while (upper[i])
            {
                sorted_vowels += i + 'A';
                upper[i]--;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            while (lower[i])
            {
                sorted_vowels += i + 'a';
                lower[i]--;
            }
        }

        // ignoring the consonent and putting the vowels line by line as we have sorted vowels now
        int v_index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                s[i] = sorted_vowels[v_index++];
            }
        }
        return s;
    }
};
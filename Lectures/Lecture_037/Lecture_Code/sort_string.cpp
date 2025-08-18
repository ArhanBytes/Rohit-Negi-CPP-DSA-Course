string sort(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
        arr[s[i] - 'a'] += 1;

    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        int count = arr[i];
        while (count)
        {
            s[index] = i + 'a';
            index++;
            count--;
        }
    }

    return s;
}
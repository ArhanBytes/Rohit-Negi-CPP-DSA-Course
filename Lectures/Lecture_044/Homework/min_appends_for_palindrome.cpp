int Solution::solve(string A)
{
    // Manipulating the string
    int originalSize = A.size();
    string rev = A;
    reverse(rev.begin(), rev.end());

    A = rev + '&' + A;

    // Find longest prefix suffix
    vector<int> lps(A.size(), 0);

    int prefix = 0, suffix = 1;
    while (suffix < A.size())
    {
        if (A[prefix] == A[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if (prefix == 0)
                suffix++;
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }

    return originalSize - lps[A.size() - 1];
}

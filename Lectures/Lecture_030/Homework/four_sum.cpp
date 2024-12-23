bool find4Numbers(int A[], int n, int X)
{
    // Sort the Array
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
        }
    }
    // declaring varaible
    int find, s, e;
    for (int i = 0; i < n - 3; i++)
    {
        // applying 3Sum concept
        for (int j = i + 1; j < n - 2; j++)
        {
            find = X - A[i] - A[j];

            // Applying two sum concept
            s = j + 1, e = n - 1;
            while (s < e)
            {
                if (A[s] + A[e] == find)
                    return 1;
                else if (A[s] + A[e] < find)
                    s++;
                else
                    e--;
            }
        }
    }

    return 0;
}
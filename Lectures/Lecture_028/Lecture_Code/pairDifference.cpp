int Solution::solve(vector<int> &A, int B)
{
    sort(A.begin(), A.end());

    int s = 0, e = 1, size = A.size();

    if (B < 0)
        B = B * -1;

    while (e < size)
    {
        // Difference < B
        if (A[e] - A[s] < B)
            e++;
        // Difference > B
        else if (A[e] - A[s] > B)
            s++;
        // Difference == B
        else
        {
            return 1;
        }

        if (s == e)
            e++;
    }

    return 0;
}

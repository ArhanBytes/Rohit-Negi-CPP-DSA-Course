int Solution::solve(int A, int B, int C)
{
    if (A <= B - C + 1)
        return A + C - 1;

    A = A - (B - C + 1);
    if (A % B == 0)
        return B;
    else
        return A % B;
}

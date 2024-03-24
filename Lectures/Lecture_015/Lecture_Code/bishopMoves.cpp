int Solution::solve(int A, int B)
{
    int totalMoves = 0;
    totalMoves += min(8 - A, 8 - B);
    totalMoves += min(8 - A, B - 1);
    totalMoves += min(A - 1, 8 - B);
    totalMoves += min(A - 1, B - 1);

    return totalMoves;
}

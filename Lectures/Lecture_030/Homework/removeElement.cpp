int Solution::removeElement(vector<int> &A, int B)
{
    // slow points on the value to remove
    // while traverse till the end if he found value that should not be deleted swap with slow

    int slow = 0, n = A.size();
    for (int fast = 0; fast < n; fast++)
    {
        if (A[fast] != B)
        {
            swap(A[fast], A[slow]);
            slow++;
        }
    }

    return slow;
}

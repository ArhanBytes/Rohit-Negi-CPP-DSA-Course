int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
 
   int diff = INT_MAX;  // Initialize min diff
   int p = A.size(), q = B.size(), r = C.size();
 
    // Initialize result
    int res_i =0, res_j = 0, res_k = 0;
 
    // Traverse arrays
    int i=0,j=0,k=0;
    while (i < p && j < q && k < r)
    {
        // Find minimum and maximum of current three elements
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
 
        // Update result if current diff is less than the min
        // diff so far
        if (maximum-minimum < diff)
        {
             res_i = i, res_j = j, res_k = k;
             diff = maximum - minimum;
        }
 
        // We can't get less than 0 as values are absolute
        if (diff == 0) break;
 
        // Increment index of array with smallest value
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
    }
    
    
    
    return diff;
}

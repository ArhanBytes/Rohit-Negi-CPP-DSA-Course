class Solution {
    
  public:
  
    int no_of_subset_divisible_by_k(string& s, int index, int n, long long value, int K)
    {
        // base case
        if(index == n)
        {
            return value % K == 0;
        }
        // include + exclude
        // since this can be long long
        long long sum  = no_of_subset_divisible_by_k(s,index+1,n,(value*10) + (s[index] - '0'),K);
        sum += no_of_subset_divisible_by_k(s,index + 1, n, value, K);
        sum %= 1000000007;
    
        return sum;
    }
    int countDivisibleSubseq(string s, int N) {
        return no_of_subset_divisible_by_k(s,0,s.size(),0,N) - 1;
    }
};

// TLE
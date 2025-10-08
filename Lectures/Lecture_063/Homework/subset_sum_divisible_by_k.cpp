class Solution {
  public:
    
    bool subset_divisible_by_k(vector<int>& arr, int index, int n, int currentSum, int k)
    {
        // base case
        if(currentSum != 0 && currentSum % k == 0) return 1;
        if(index == n) return 0;
        // include || exclude
        return subset_divisible_by_k(arr,index+1,n,currentSum+arr[index],k) || subset_divisible_by_k(arr,index+1,n,currentSum,k);
    }   
  
    int DivisibleByM(vector<int>& arr, int k) {
        return subset_divisible_by_k(arr,0, arr.size() ,0,k);
    }
};

// TLE
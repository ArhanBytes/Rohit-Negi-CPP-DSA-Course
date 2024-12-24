int Solution::maxArea(vector<int> &A) {
    
    int n = A.size(), maxWater = 0, width, height, area;
    int left = 0, right = n -1;
    
    
    // --------- bruteforce Approach --------- 
    /*
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            // calculate the area/Water Capacity of container from i to j
            width = j - i;
            height = min(A[i], A[j]);
            area = width * height;
            
            // updating in maximum Water
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
    
    */
    
    // --------- 2 Pointer Approach ---------
    while(left < right)
    {
        // calculate the area/Water Capacity of container from left to right Pointer
        width = right - left;
        height = min(A[left], A[right]);
        area = width * height;
        
        // updating the maxWater
        maxWater = max(maxWater, area);
        
        // updating the pointer which height is minimum
        if(height == A[left]) left++;
        else right--;
    }
    
    return maxWater;
}

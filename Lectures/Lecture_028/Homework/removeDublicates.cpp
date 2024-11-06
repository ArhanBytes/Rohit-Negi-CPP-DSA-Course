int Solution::removeDuplicates(vector<int> &v) {
    
    // How we can manage health and productivity together. I need help :)
    int n = v.size();
    int slow = 0, fast = 1;
    
    while(fast < n)
    {
        // if slow not equal to fast then slow move to next index and put the element that is not equal and increase fast as well
        if(v[slow] != v[fast])
        {
            slow++;
            v[slow] = v[fast];
            fast++;
        }
        // if v[slow] == v[fast] then we just check the next element of fast
        else
            fast++;
    }
    // at the end we get slow index after removing dublicates
    // but we have to return the length therefore we return slow + 1;
    return slow + 1;
}

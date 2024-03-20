class Solution {
public:
    int mySqrt(int x) {
        long long int i = 1;
        int ans = 0;
        while(i*i <= x){
            ans = i;
            i++;
        }
        return ans;
    }
};
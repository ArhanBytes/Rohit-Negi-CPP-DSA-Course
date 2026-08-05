class Solution {
public:
    bool isPowerOfFour(int n) {
        // Base cases
        if (n <= 0) return false;
        if (n == 1) return true;
        
        // If not divisible by 4, it's not a power of 4
        if (n % 4 != 0)
            return false;
        else
            return isPowerOfFour(n / 4);
    }
};
class Solution
{
public:
    int gcd(int a, int b)
    {

        // Method 1: Modern Euclidean Algorithm
        // base case
        if (b == 0)
            return a;

        // recursive functiono
        return gcd(b, a % b);

        /*
       // Method 2: Ancient Euclidean Algorithm
       // this will give time limit exceed but this one the original version that euclidean used
       // base case
       if(b == 0) return a;

       int diff = a - b;
       return gcd(max(diff,b), min(diff,b));
       */
    }
};

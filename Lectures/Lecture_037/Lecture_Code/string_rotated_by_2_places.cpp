class Solution
{
public:
    bool isRotated(string &s1, string &s2)
    {
        int k = 2;
        int n = s1.size();
        string clockwise = s1, antiClockwise = s1;
        
        // Clockwise rotation
        for (int i = 0; i < n; i++)
            clockwise[i] = s1[(n - k + i) % n];

        if (clockwise == s2)
            return 1;

        // AnticlockWise rotation
        for (int i = 0; i < n; i++)
            antiClockwise[i] = s1[(k + i) % n];

        if (antiClockwise == s2)
            return 1;

        return 0;
    }
};

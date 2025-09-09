class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m =  needle.size(), first, second;
        for(int i = 0; i < n-m+1; i++)
        {
            first = i, second = 0;
            while(second <  m)
            {
                if(haystack[first] == needle[second])
                    first++,second++;
                else
                    break;
            }

            if(second == m)
                return i;
        }

        return -1;
    }
};
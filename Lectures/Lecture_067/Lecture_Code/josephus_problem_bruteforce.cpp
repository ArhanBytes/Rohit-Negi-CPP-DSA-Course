class Solution {
public:
    int findTheWinner(int n, int k) {
        // Method 1: Bruteforce
        vector<bool> is_eleminate(n, false);

        // loop jab tk aik element na rahe
        int i = 0;
        int eleminated_left = n;
        while(eleminated_left > 1)
        {
            // to reacch to the eliminate position
            int count = 0;
            while(count != k)
            {
                if(is_eleminate[i] == 0)
                {
                    count++;
                }

                i++;

                if(i == n)
                {
                    i = 0;
                }
            }
             

            // eliminate the position
            if(i == 0)
            {
                is_eleminate[n-1] = 1;
                eleminated_left--;
            }else
            {
                is_eleminate[i-1] = 1;
                eleminated_left--;
            }
            

            // let's take i to first not eliminate position
            while(is_eleminate[i] != 0)
            {
                i++;
                if(i == n)
                    i = 0;
            }
        }

        int ans;
        for(int i = 0; i < n; i++)
        {
            if(is_eleminate[i] == 0)
            {
                ans = i + 1;
                break;
            }
        }

        return ans;
    }
};
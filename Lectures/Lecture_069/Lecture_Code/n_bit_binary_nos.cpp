// User function template for C++
class Solution
{
public:
    int zero[2] = {1, 0};
    int one[2] = {0, 1};
    string bit = "01";
    void generate_binary_nos(int zero_count, int one_count, string &bits, vector<string> &ans, int n)
    {
        // base case
        if (n == 0)
        {
            ans.push_back(bits);
            return;
        }

        // recursive approach
        for (int i = 0; i < 2; i++)
        {
            if (zero_count + zero[i] <= one_count + one[i])
            {
                bits.push_back(bit[i]);
                generate_binary_nos(zero_count + zero[i], one_count + one[i], bits, ans, n - 1);
                bits.pop_back();
            }
        }
    }

    vector<string> NBitBinary(int n)
    {
        vector<string> ans;
        string bits;

        generate_binary_nos(0, 0, bits, ans, n);

        sort(ans.begin(), ans.end(), greater<string>());
        return ans;
    }
};
// homework Question
// User function template for C++
class Solution
{
public:
    void generate_binary_nos(int zero_count, string &bits, vector<string> &ans, int n, int size)
    {
        // base case
        if (n == 0)
        {
            ans.push_back(bits);
            return;
        }

        // call for zero
        if (zero_count < size / 2)
        {
            bits.push_back('0');
            generate_binary_nos(zero_count + 1, bits, ans, n - 1, size);
            bits.pop_back();
        }
        // call for one
        bits.push_back('1');
        generate_binary_nos(zero_count, bits, ans, n - 1, size);
        bits.pop_back();
    }

    vector<string> NBitBinary(int n)
    {
        vector<string> ans;
        string bits = "1";

        generate_binary_nos(0, bits, ans, n - 1, n);
        return ans;
    }
};
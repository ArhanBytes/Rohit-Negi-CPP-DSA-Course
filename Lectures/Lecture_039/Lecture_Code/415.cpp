class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.size() - 1, j = num2.size() - 1;
        int n = max(i + 1, j + 1);
        string ans(n, '0');
        int ans_index = n - 1;
        int carry = 0;

        while (i >= 0 && j >= 0)
        {
            // conclude the number
            int first = num1[i] - '0';
            int second = num2[j] - '0';

            // add together
            int sum = first + second + carry;
            // put last element to end
            ans[ans_index] = (sum % 10) + '0';
            // safe the carry value
            carry = sum / 10;

            ans_index--;
            i--;
            j--;
        }

        while (i >= 0)
        {
            int sum = (num1[i] - '0') + carry;
            ans[ans_index] = (sum % 10) + '0';
            carry = sum / 10;

            ans_index--;
            i--;
        }

        while (j >= 0)
        {
            int sum = (num2[j] - '0') + carry;
            ans[ans_index] = (sum % 10) + '0';
            carry = sum / 10;

            ans_index--;
            j--;
        }

        if (carry > 0)
        {
            return string(1, carry + '0') + ans;
        }
        return ans;
    }
};
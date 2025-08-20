class Solution
{
public:
    string intToRoman(int num)
    {
        string ones[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundreds[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[4] = {"", "M", "MM", "MMM"};

        return thousands[num / 1000] + hundreds[(num / 100) % 10] + tens[(num / 10) % 10] + ones[num % 10];
    }
};
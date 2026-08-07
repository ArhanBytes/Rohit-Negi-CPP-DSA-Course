class Solution {
public:
    int LR(int &n, int &head, int &step, bool &left)
    {
        // base case
        if (n == 1) return head;

        // head changes if start from left or we have odd elements in array
        if(left || n & 1) 
            head = head + step;

        n /= 2;
        step *= 2;
        left = !left;

        return LR(n, head, step, left);
    }

    int lastRemaining(int n) {
        int head = 1, step = 1;
        bool left = true;
        return LR(n, head, step, left);
    }
};
class Solution
{
public:
    int winner(vector<bool> &is_eliminate, int n, int index, int person_left, int k)
    {
        // base case
        if (person_left == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (is_eliminate[i] == 0)
                    return i + 1;
            }
        }

        // reach the position to eliminate
        int kill = (k - 1) % person_left;
        while (kill)
        {
            index = (index + 1) % n;
            while (is_eliminate[index] == 1)
                index = (index + 1) % n;

            kill--;
        }

        // kil the person
        is_eliminate[index] = 1;

        // reach the next position to start with
        while (is_eliminate[index] == 1)
            index = (index + 1) % n;

        // now for the next round
        return winner(is_eliminate, n, index, person_left - 1, k);
    }

    int findTheWinner(int n, int k)
    {
        vector<bool> is_eliminate(n, false);
        return winner(is_eliminate, n, 0, n, k);
    }
};
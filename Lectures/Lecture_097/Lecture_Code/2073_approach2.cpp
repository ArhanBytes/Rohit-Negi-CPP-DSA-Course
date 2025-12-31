class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        // first calculating the time for 0 to k
        int time = 0;
        for (int i = 0; i <= k; i++)
            time += min(tickets[k], tickets[i]);

        // calcualting the time for k+1 to n-1. As they got 1 less
        for (int i = k + 1; i < tickets.size(); i++)
            time += min(tickets[k] - 1, tickets[i]);

        return time;
    }
};
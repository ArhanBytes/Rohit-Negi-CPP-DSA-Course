class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        queue<int> q;
        int timer = 0;
        for (int i = 0; i < tickets.size(); i++)
            q.push(i);

        while (tickets[k] != 0)
        {
            timer++;
            tickets[q.front()]--;
            if (tickets[q.front()])
                q.push(q.front());
            q.pop();
        }

        return timer;
    }
};
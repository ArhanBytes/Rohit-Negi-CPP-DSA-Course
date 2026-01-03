// User function Template for C++

class Solution
{
public:
    vector<int> largestValues(Node *root)
    {
        queue<Node *> q;
        vector<int> ans;
        int times, maxi;
        Node *temp;

        q.push(root);

        // LEVEL ORDER TRAVERSAL (BFS)

        while (!q.empty())
        {
            times = q.size();
            maxi = INT_MIN;

            while (times--)
            {
                temp = q.front();
                q.pop();

                // find maximum for each level
                maxi = max(maxi, temp->data);

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }

            ans.push_back(maxi);
        }

        return ans;
    }
};
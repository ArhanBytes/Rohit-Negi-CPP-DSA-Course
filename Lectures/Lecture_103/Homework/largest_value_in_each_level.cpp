// User function Template for C++
// -----------------------MEHTOD 01: BFS---------------------------------
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
// -----------------------MEHTOD 01: DFS---------------------------------
class Solution {
  public:
    int height_of_tree(Node* root)
    {
        if(!root)
            return -1;

        return 1 + max(height_of_tree(root->left), height_of_tree(root->right));
    }

    void LV(Node* root, int level, vector<int>&ans)
    {
        if(!root)
            return;

        ans[level] = max(ans[level], root->data);
        LV(root->left, level +1, ans);
        LV(root->right, level +1, ans);        
    }

    vector<int> largestValues(Node* root) {
        int levels = height_of_tree(root);
        vector<int> ans(levels+1, INT_MIN);
        
        LV(root, 0, ans);
        return ans;

    }
};
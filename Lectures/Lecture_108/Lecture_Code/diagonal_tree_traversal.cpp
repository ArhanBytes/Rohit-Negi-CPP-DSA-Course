/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution
{
public:
    void find_leftmost(Node *root, int curr, int &l)
    {
        if (root == NULL)
            return;

        l = max(curr, l);

        find_leftmost(root->left, curr + 1, l);
        find_leftmost(root->right, curr, l);
    }

    void diagonal_traversal_dfs(Node *root, int left_position, vector<vector<int>> &temp)
    {
        if (root == NULL)
            return;

        temp[left_position].push_back(root->data);

        diagonal_traversal_dfs(root->left, left_position + 1, temp);
        diagonal_traversal_dfs(root->right, left_position, temp);
    }

    vector<int> diagonal(Node *root)
    {
        // find the left most position
        int l = 0;
        find_leftmost(root, 0, l);

        vector<vector<int>> temp(l + 1);

        diagonal_traversal_dfs(root, 0, temp);

        vector<int> ans;
        for (int i = 0; i < temp.size(); i++)
        {
            for (int j = 0; j < temp[i].size(); j++)
                ans.push_back(temp[i][j]);
        }

        return ans;
    }
};
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution
{
public:
    void right_view_dfs(Node *root, int level, vector<int> &ans)
    {
        // BASE CASE
        if (root == NULL)
            return;

        if (level == ans.size())
            ans.push_back(root->data);

        // recursive functions
        right_view_dfs(root->right, level + 1, ans);
        right_view_dfs(root->left, level + 1, ans);
    }

    vector<int> rightView(Node *root)
    {
        vector<int> ans;

        right_view_dfs(root, 0, ans);

        return ans;
    }
};
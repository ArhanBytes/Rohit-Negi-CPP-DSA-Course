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
    void left_view_dfs(Node *root, int level, vector<int> &ans)
    {
        if (root == NULL)
            return;

        if (level == ans.size())
            ans.push_back(root->data);

        left_view_dfs(root->left, level + 1, ans);
        left_view_dfs(root->right, level + 1, ans);
    }
    vector<int> leftView(Node *root)
    {
        vector<int> ans;

        left_view_dfs(root, 0, ans);

        return ans;
    }
};
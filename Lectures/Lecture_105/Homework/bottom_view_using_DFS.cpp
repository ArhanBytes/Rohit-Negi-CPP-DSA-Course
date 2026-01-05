/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    void bottom_view_by_dfs(Node *root, int index, int curr_level, vector<int> &ans, vector<int> &level)
    {
        if (root == NULL)
            return;

        if (curr_level >= level[index])
        {
            level[index] = curr_level;
            ans[index] = root->data;
        }

        bottom_view_by_dfs(root->left, index - 1, curr_level + 1, ans, level);
        bottom_view_by_dfs(root->right, index + 1, curr_level + 1, ans, level);
    }

    void find_pos(Node *root, int pos, int &l, int &r)
    {
        if (root == NULL)
            return;

        l = min(pos, l);
        r = max(pos, r);

        find_pos(root->left, pos - 1, l, r);
        find_pos(root->right, pos + 1, l, r);
    }

    vector<int> bottomView(Node *root)
    {
        int l = 0, r = 0;
        find_pos(root, 0, l, r);

        vector<int> ans(r - l + 1);
        vector<int> level(r - l + 1, -1);

        bottom_view_by_dfs(root, abs(l), 0, ans, level);

        return ans;
    }
};

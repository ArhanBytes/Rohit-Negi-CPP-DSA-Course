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
    void find_pos(Node *root, int pos, int &l, int &r)
    {
        if (root == NULL)
            return;

        l = min(pos, l);
        r = max(pos, r);

        find_pos(root->left, pos - 1, l, r);
        find_pos(root->right, pos + 1, l, r);
    }

    void top_view_by_dfs(Node *root, int index, int pos, vector<int> &ans, vector<int> &level)
    {
        if (root == NULL)
            return;

        if (pos < level[index])
        {
            level[index] = pos;
            ans[index] = root->data;
        }

        top_view_by_dfs(root->left, index - 1, pos + 1, ans, level);
        top_view_by_dfs(root->right, index + 1, pos + 1, ans, level);
    }

    vector<int> topView(Node *root)
    {
        // find the left most position and right most position
        int l = 0, r = 0;

        find_pos(root, 0, l, r);

        vector<int> ans(r - l + 1);            // jisma answer jayinga
        vector<int> level(r - l + 1, INT_MAX); // IS KI MADAD SA HAM CHOTA LEVEL WALA ELEMENT UPDATE KRSAKTA HAIN

        top_view_by_dfs(root, abs(l), 0, ans, level);

        return ans;
    }
};
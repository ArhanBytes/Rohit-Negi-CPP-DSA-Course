/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    void add_left(Node *root, vector<int> &ans)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;

        ans.push_back(root->data);

        // go to left
        add_left(root->left, ans);
        // go to right
        if (root->left == NULL) // if left doesn't exist we will move to right
            add_left(root->right, ans);
    }

    void add_leaf(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
            ans.push_back(root->data);

        // go to left
        add_leaf(root->left, ans);
        // go to right
        add_leaf(root->right, ans);
    }

    void add_right(Node *root, vector<int> &ans)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;

        ans.push_back(root->data);

        // go to right
        add_right(root->right, ans);
        // go to left
        if (root->right == NULL) // if right doesn't exist we will move to left
            add_right(root->left, ans);
    }
    
    vector<int> boundaryTraversal(Node *root)
    {
        // edge case
        if (root->left == NULL && root->right == NULL)
            return {root->data};

        vector<int> ans;
        ans.push_back(root->data); // add the root node at first

        // left part
        add_left(root->left, ans);

        // leaf node
        add_leaf(root, ans);

        // right part
        int s = ans.size(); // note the size
        add_right(root->right, ans);
        int e = ans.size() - 1;

        // reverse the right part we just add in answer vector
        while (s < e)
        {
            swap(ans[s++], ans[e--]);
        }

        return ans;
    }
};
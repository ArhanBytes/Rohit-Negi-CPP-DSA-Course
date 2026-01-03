/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

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
    void inOrderTraversal(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;

        inOrderTraversal(root->left, ans);
        ans.push_back(root->data);
        inOrderTraversal(root->right, ans);
    }
    vector<int> inOrder(Node *root)
    {
        vector<int> ans;

        inOrderTraversal(root, ans);

        return ans;
    }
};
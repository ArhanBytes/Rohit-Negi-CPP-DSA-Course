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
    void postOrderTraversal(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;

        postOrderTraversal(root->left, ans);
        postOrderTraversal(root->right, ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node *root)
    {
        vector<int> ans;

        postOrderTraversal(root, ans);

        return ans;
    }
};
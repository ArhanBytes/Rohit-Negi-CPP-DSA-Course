/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    void preOrderTraversal(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;

        ans.push_back(root->data);
        preOrderTraversal(root->left, ans);
        preOrderTraversal(root->right, ans);
    }

    vector<int> preOrder(Node *root)
    {
        vector<int> ans;
        preOrderTraversal(root, ans);
        return ans;
    }
};
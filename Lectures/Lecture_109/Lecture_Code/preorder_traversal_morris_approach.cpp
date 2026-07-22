/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    vector<int> preOrder(Node *root)
    {
        vector<int> ans;

        while (root)
        {

            if (root->left == NULL) // left part exist hi nhi krtna
            {
                ans.push_back(root->data);
                root = root->right;
            }
            else // left part exist krta hai
            {
                // kiya left part per jana chaiya yeah nhi
                Node *curr = root->left;
                while (curr->right != NULL && curr->right != root)
                    curr = curr->right;

                // left part univisted hai
                if (curr->right == NULL)
                {
                    curr->right = root;
                    ans.push_back(root->data);
                    root = root->left;
                }
                else // left part visited hai alread
                {
                    curr->right = NULL;
                    root = root->right;
                }
            }
        }

        return ans;
    }
};
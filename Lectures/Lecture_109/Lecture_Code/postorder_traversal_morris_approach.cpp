// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution
{
public:
    vector<int> postOrder(Node *root)
    {
        vector<int> ans;

        while (root)
        {
            // agar right exist hi nhi krta
            if (root->right == NULL)
            {
                ans.push_back(root->data);
                root = root->left;
            }
            else // right exist krta hai
            {
                // kiya right tree traverse kiya hai yeayh nhi
                Node *curr = root->right;
                while (curr->left != NULL && curr->left != root)
                    curr = curr->left;

                if (curr->left == NULL) // right tree is not traversed
                {
                    curr->left = root;
                    ans.push_back(root->data);
                    root = root->right;
                }
                else // right treee has traversed already
                {
                    curr->left = NULL;
                    root = root->left;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
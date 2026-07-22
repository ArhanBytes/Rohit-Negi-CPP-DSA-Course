// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;

        while(root)
        {
            if(root->left == NULL) // left part exist hi nhi krta
            {
                ans.push_back(root->data);
                root = root->right;
            }
            else{ // left part exist krta hai
                Node* curr = root->left;
                // check karainga kiya left per jana chaiya yeah nhi
                while(curr->right != NULL && curr->right != root)
                    curr = curr->right;
                
                if(curr->right == NULL) // left part visit krsakta hai
                {
                    curr->right = root;
                    root = root->left;
                }
                else // left part visit nhi krsakta
                {
                    curr->right = NULL; // link ko torainga pahla
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        return ans;
    }
};
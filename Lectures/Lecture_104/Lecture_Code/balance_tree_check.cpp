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
    int checkHeight(Node *root, bool &valid)
    {
        if (root == NULL)
            return 0;

        int L = checkHeight(root->left, valid);
        int R = checkHeight(root->right, valid);

        if (abs(L - R) > 1)
            valid = 0;

        return 1 + max(L, R);
    }
    bool isBalanced(Node *root)
    {
        bool valid = 1;

        checkHeight(root, valid);

        return valid;
    }
};

// ------------------------METHOD 2---------------------
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

class Solution {
  public:
    int checkHeight(Node* root, bool &valid)
    {
        if(root == NULL)
            return 0;
        
        int L = checkHeight(root->left, valid);
        if(valid)
        {
            int R = checkHeight(root->right, valid);
            
            if(abs(L-R) > 1)
                valid = 0;
            
            return 1 + max(L, R);
        }
        
        return -1;
    }
    bool isBalanced(Node* root) {
        bool valid = 1;
        
        checkHeight(root,valid);
        
        return valid;
        
    }
};
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

// -------------METHOD 01-------------

class Solution {
  public:
    int height(Node* root) {
        if(root == NULL)
            return -1;
        
        return 1 + max(height(root->left) , height(root->right));
        
    }
};

// -------------METHOD 02-------------

class Solution
{
public:
    int height(Node *root)
    {
        queue<Node *> q;
        int times;
        q.push(root);

        int level = -1;
        Node *temp;

        while (!q.empty())
        {
            times = q.size();
            level++;

            while (times--)
            {
                temp = q.front();
                q.pop();

                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
        }

        return level;
    }
};
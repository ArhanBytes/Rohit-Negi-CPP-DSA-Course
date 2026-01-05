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
        stack<Node *> s;
        vector<int> ans;
        Node *temp;

        s.push(root);
        while (!s.empty())
        {
            temp = s.top();
            s.pop();

            ans.push_back(temp->data);

            // put its right
            if (temp->right)
                s.push(temp->right);
            // put its left
            if (temp->left)
                s.push(temp->left);
        }

        return ans;
    }
};
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution
{
public:
    vector<int> rightView(Node *root)
    {
        // LEVEL ORDER TRAVERESAL
        // SHOWS ONLY LAST ELEMENT OF EACH LEVEL

        vector<int> ans;
        queue<Node *> q;
        int size;
        Node *temp;

        q.push(root);
        while (!q.empty())
        {
            size = q.size();
            while (size--)
            {
                temp = q.front();
                q.pop();

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }

            ans.push_back(temp->data);
        }

        return ans;
    }
};
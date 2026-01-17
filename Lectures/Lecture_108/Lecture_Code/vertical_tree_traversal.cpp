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
    void find_pos(Node *root, int pos, int &l, int &r)
    {
        if (root == NULL)
            return;

        l = min(pos, l);
        r = max(pos, r);

        find_pos(root->left, pos - 1, l, r);
        find_pos(root->right, pos + 1, l, r);
    }
    vector<vector<int>> verticalOrder(Node *root)
    {
        int l = 0, r = 0;
        find_pos(root, 0, l, r);

        vector<vector<int>> ans(r - l + 1);

        // LEVEL ORDER TRAVERSAL CHALAINGA
        queue<Node *> q1; // for origianl node
        queue<int> q2;    // for postions
        int position;
        Node *temp;

        q1.push(root);
        q2.push(abs(l));

        while (!q1.empty())
        {
            temp = q1.front();
            position = q2.front();
            q1.pop();
            q2.pop();

            ans[position].push_back(temp->data);

            // left part
            if (temp->left)
            {
                q1.push(temp->left);
                q2.push(position - 1);
            }
            // right part
            if (temp->right)
            {
                q1.push(temp->right);
                q2.push(position + 1);
            }
        }

        return ans;
    }
};
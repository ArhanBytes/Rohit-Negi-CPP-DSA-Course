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
    vector<int> leftView(Node *root)
    {
        // LEVEL ORDER TRAVERSAL
        vector<int> ans;
        queue<Node *> q;
        int size;
        Node *temp;

        q.push(root);

        while (!q.empty())
        {
            size = q.size();
            ans.push_back(q.front()->data);

            while (size--)
            {
                temp = q.front();
                q.pop();

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }

        return ans;
    }
};
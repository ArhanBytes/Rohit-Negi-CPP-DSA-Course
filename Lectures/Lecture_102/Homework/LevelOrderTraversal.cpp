/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
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
    vector<vector<int>> levelOrder(Node *root)
    {
        queue<Node *> q;
        vector<vector<int>> ans;

        q.push(root);

        int times;
        while (!q.empty())
        {
            // level order search
            times = q.size();
            vector<int> temp;

            while (times--)
            {
                if (q.front()->left)
                    q.push(q.front()->left);
                if (q.front()->right)
                    q.push(q.front()->right);

                temp.push_back(q.front()->data);
                q.pop();
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
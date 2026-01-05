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
    void find_pos(Node *root, int pos, int &l, int &r)
    {
        if (root == NULL)
            return;

        l = min(pos, l);
        r = max(pos, r);

        find_pos(root->left, pos - 1, l, r);
        find_pos(root->right, pos + 1, l, r);
    }

    vector<int> topView(Node *root)
    {
        // find the left most position and right most position
        int l = 0, r = 0;

        find_pos(root, 0, l, r);

        vector<int> ans(r - l + 1);       // jisma answer jayinga
        vector<int> filled(r - l + 1, 0); // yeah batayega ka element pahla aya hai yea nhi

        // 2 queue banegi
        queue<Node *> q1; // for element;
        queue<int> q2;    // for index;

        q1.push(root);
        q2.push(abs(l));

        // level order traversal
        while (!q1.empty())
        {
            Node *temp = q1.front();
            int index = q2.front();
            q1.pop();
            q2.pop();

            // check karainga kiya yeah element pahla level per aya hai yeah nhi
            if (filled[index] == false)
            {
                filled[index] = true;
                ans[index] = temp->data;
            }

            // push left
            if (temp->left)
            {
                q1.push(temp->left); // node ka left node
                q2.push(index - 1);  // uski position
            }
            // push right
            if (temp->right)
            {
                q1.push(temp->right);
                q2.push(index + 1);
            }
        }

        return ans;
    }
};
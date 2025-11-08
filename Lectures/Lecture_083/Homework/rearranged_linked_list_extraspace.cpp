/* Node structure

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    void rearrangeEvenOdd(Node *head)
    {
        // Your Code here
        Node *curr = head;

        vector<int> odd;
        vector<int> even;

        // rearrange odd and even in vector
        int count = 0;
        while (curr)
        {
            count++;
            if (count & 1) // odd
                odd.push_back(curr->data);
            else // even
                even.push_back(curr->data);

            curr = curr->next;
        }

        curr = head;
        for (int i = 0; i < odd.size(); i++)
        {
            curr->data = odd[i];
            curr = curr->next;
        }

        for (int i = 0; i < even.size(); i++)
        {
            curr->data = even[i];
            curr = curr->next;
        }
    }
};
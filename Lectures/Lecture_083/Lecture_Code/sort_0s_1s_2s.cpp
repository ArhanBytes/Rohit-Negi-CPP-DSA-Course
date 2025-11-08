/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution
{
public:
    Node *segregate(Node *head)
    {
        // code here
        Node *curr = head;

        // take a count of 0's, 1's and 2's
        int count0 = 0, count1 = 0, count2 = 0;

        while (curr)
        {
            if (curr->data == 0)
                count0++;
            else if (curr->data == 1)
                count1++;
            else
                count2++;

            curr = curr->next;
        }

        // put 0's
        curr = head;
        while (count0--)
        {
            curr->data = 0;
            curr = curr->next;
        }

        while (count1--)
        {
            curr->data = 1;
            curr = curr->next;
        }

        while (count2--)
        {
            curr->data = 2;
            curr = curr->next;
        }

        return head;
    }
};
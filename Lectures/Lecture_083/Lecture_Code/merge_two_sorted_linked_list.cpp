/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node *sortedMerge(Node *head1, Node *head2)
    {
        // code here
        Node *head, *tail = NULL;

        if (head1->data < head2->data)
        {
            head = tail = head1;
            head1 = head1->next;
        }
        else
        {
            head = tail = head2;
            head2 = head2->next;
        }

        while (head1 && head2)
        {
            if (head1->data < head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
            }

            tail = tail->next;
        }

        if (head1)
        {
            tail->next = head1;
        }
        else
        {
            tail->next = head2;
        }

        return head;
    }
};
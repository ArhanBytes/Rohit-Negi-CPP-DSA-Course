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
        Node *head0 = NULL, *tail0 = NULL, *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;

        Node *curr = head;
        while (curr)
        {
            // FOR ZERO
            if (curr->data == 0)
            {
                if (head0 == NULL)
                    head0 = tail0 = curr;
                else
                {
                    tail0->next = curr;
                    tail0 = curr;
                }

                curr = curr->next;
                tail0->next = NULL;
            }
            // FOR ONE
            else if (curr->data == 1)
            {
                if (head1 == NULL)
                    head1 = tail1 = curr;
                else
                {
                    tail1->next = curr;
                    tail1 = curr;
                }

                curr = curr->next;
                tail1->next = NULL;
            }
            // FOR TWO
            else
            {
                if (head2 == NULL)
                    head2 = tail2 = curr;
                else
                {
                    tail2->next = curr;
                    tail2 = curr;
                }
                curr = curr->next;
                tail2->next = NULL;
            }
        }

        // IF ZERO EXIST
        head = NULL;
        Node *tail = NULL;
        if (head0)
        {
            head = head0;
            tail = tail0;
        }

        if (head1)
        {
            if (head == NULL)
            {
                head = head1;
                tail = tail1;
            }
            else
            {
                tail->next = head1;
                tail = tail1;
            }
        }

        if (head2)
        {
            if (head == NULL)
            {
                head = head2;
                tail = tail2;
            }
            else
            {
                tail->next = head2;
                tail = tail2;
            }
        }

        return head;
    }
};
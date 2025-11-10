/* Structure of the node of the list is as
class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution
{
public:
    DLLNode *find_mid(DLLNode *head)
    {
        DLLNode *slow = head;
        DLLNode *fast = head;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }

    // merge two sorted doubly linkedList
    DLLNode *merge(DLLNode *head1, DLLNode *head2)
    {
        DLLNode *head = new DLLNode(0);
        DLLNode *tail = head;

        while (head1 && head2)
        {
            if (head1->data < head2->data)
            {
                tail->next = head1;
                head1->prev = tail;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else
            {
                tail->next = head2;
                head2->prev = tail;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }

        if (head1)
        {
            tail->next = head1;
            head1->prev = tail;
        }
        else
        {
            tail->next = head2;
            head2->prev = tail;
        }

        DLLNode *temp = head;
        head = head->next;
        head->prev = NULL;

        delete temp;

        return head;
    }

    DLLNode *sortDoubly(DLLNode *left)
    {
        // base case
        if (left->next == NULL)
            return left;

        DLLNode *middle = find_mid(left);
        DLLNode *right = middle->next;
        middle->next = NULL;
        right->prev = NULL;

        left = sortDoubly(left);
        right = sortDoubly(right);

        return merge(left, right);
    }
};
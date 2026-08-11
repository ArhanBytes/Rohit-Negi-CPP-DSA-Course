/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution
{
public:
    Node *rev(Node *curr, Node *prev)
    {
        if (curr == NULL)
            return prev;

        Node *front = curr->next;
        curr->next = prev;

        return rev(front, curr);
    }

    void reorderList(Node *head)
    {
        // 1: find mid
        Node *slow = head, *fast = head;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node *L2 = slow->next;
        // 2: split into two halves
        slow->next = NULL;

        // 3: reverse the second half
        L2 = rev(L2, NULL);
        Node *L1 = head;
        // 4: Alternately merge both halves

        while (L1 && L2)
        {
            Node *temp1 = L1->next;
            L1->next = L2;

            Node *temp2 = L2->next;
            L2->next = temp1;

            L1 = temp1;
            L2 = temp2;
        }
    }
};
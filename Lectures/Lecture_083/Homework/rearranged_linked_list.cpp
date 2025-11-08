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
        Node *L1 = head;
        Node *L2 = head->next;
        Node *temp = head->next; // to connect that part
        while (L1 != NULL && L2 != NULL && L2->next != NULL)
        {
            L1->next = L2->next;
            L1 = L1->next;

            L2->next = L1->next;
            L2 = L2->next;
        }

        L1->next = temp;
    }
};
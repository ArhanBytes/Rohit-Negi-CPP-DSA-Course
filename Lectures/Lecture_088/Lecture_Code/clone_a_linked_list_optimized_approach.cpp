/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *cloneLinkedList(Node *head)
    {
        // 1: first creating the another linked list and
        // attached the corresponding nodes to its next
        Node *traverse1 = head;
        while (traverse1 != NULL)
        {
            Node *temp = new Node(traverse1->data);
            temp->next = traverse1->next;
            traverse1->next = temp;

            traverse1 = traverse1->next->next;
        }

        // 2: Assign the random pointer to doublicate list
        traverse1 = head;
        Node *traverse2 = traverse1->next;

        while (traverse1 != NULL)
        {
            if (traverse1->random != NULL)
                traverse2->random = traverse1->random->next;

            traverse1 = traverse1->next->next;
            if (traverse2->next != NULL)
                traverse2 = traverse2->next->next;
        }

        // 3: split the original list from copied list and vise versa
        traverse1 = head;
        traverse2 = head->next;
        Node *doublicate_head = traverse2; // to return that head

        while (traverse1 != NULL)
        {
            traverse1->next = traverse2->next;
            traverse1 = traverse1->next;

            if (traverse1 != NULL)
            {
                traverse2->next = traverse1->next;
                traverse2 = traverse2->next;
            }
        }

        return doublicate_head;
    }
};
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
        // 1: first creating the another linked list
        Node *main_head = new Node(head->data);
        Node *traverse1 = head->next;
        Node *traverse2 = main_head;
        while (traverse1 != NULL)
        {
            traverse2->next = new Node(traverse1->data);
            traverse2 = traverse2->next;
            traverse1 = traverse1->next;
        }

        // 2: fill the corresponding nodes address to map
        unordered_map<Node *, Node *> m;
        traverse1 = head;
        traverse2 = main_head;
        while (traverse1 != NULL)
        {
            m[traverse1] = traverse2;
            traverse1 = traverse1->next;
            traverse2 = traverse2->next;
        }

        // 3: Now add the random pointer
        traverse1 = head;
        traverse2 = main_head;
        while (traverse1 != NULL)
        {
            traverse2->random = m[traverse1->random];

            traverse1 = traverse1->next;
            traverse2 = traverse2->next;
        }

        return main_head;
    }
};
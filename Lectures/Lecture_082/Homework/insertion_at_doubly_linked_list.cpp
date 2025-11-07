/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution
{
public:
    Node *insertAtPos(Node *head, int p, int x)
    {
        // if it is first position
        Node *curr = head;
        while (p--)
            curr = curr->next;

        Node *temp = new Node(x);
        temp->prev = curr;
        temp->next = curr->next;
        if (curr->next != NULL) // inserted node is somewhere between
            (temp->next)->prev = temp;
        curr->next = temp;

        return head;
    }
};
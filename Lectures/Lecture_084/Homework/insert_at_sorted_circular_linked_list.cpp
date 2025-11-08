/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {
        // create the node
        Node *temp = new Node(data);

        // insert at first
        if (head->data > data)
        {
            Node *tail = head;
            while (tail->next != head)
                tail = tail->next;

            temp->next = head;
            head = temp;
            tail->next = head;

            return head;
        }

        // insert of middle or last position

        // get the position to insert after
        Node *curr = head;
        while (curr->next != head && curr->next->data < data)
            curr = curr->next;

        // insert at last
        if (curr->next == head)
        {
            curr->next = temp;
            temp->next = head;
        }
        // insert at somewhere between
        else
        {
            temp->next = curr->next;
            curr->next = temp;
        }

        return head;
    }
};
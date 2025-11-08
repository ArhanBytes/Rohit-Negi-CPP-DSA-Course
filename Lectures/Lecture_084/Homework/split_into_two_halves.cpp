/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution
{
public:
    pair<Node *, Node *> splitList(struct Node *head)
    {
        // code here
        Node *slow = head, *fast = head;

        // Move slow by 1 and fast by 2
        while (fast->next != head && fast->next->next != head)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // If even number of nodes, move fast one more step
        if (fast->next->next == head)
            fast = fast->next;

        Node *head1 = head;
        Node *head2 = slow->next;

        // Make the first half circular
        slow->next = head1;

        // Make the second half circular
        fast->next = head2;

        return {head1, head2};
    }
};
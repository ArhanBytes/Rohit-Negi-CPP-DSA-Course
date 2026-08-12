/* Structure of linked list Node
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
class Solution {
  public:
    Node* partition(Node* head, int x) {
        Node *h_less = NULL, *h_equal = NULL, *h_greater = NULL, *t_less = NULL, *t_equal = NULL, *t_greater = NULL;
        
        Node *curr = head;
        while(curr != NULL)
        {
            // LESSER
            if(curr->data < x)
            {
                if(h_less == NULL)
                    h_less = t_less = curr;
                else
                {
                    t_less->next = curr;
                    t_less = curr;
                }
                curr = curr->next;
                t_less->next = NULL;
            }
            // EQUAL
            else if(curr->data == x)
            {
                if(h_equal == NULL)
                    h_equal = t_equal = curr;
                else
                {
                    t_equal->next = curr;
                    t_equal = curr;
                }
                
                curr = curr->next;
                t_equal->next = NULL;
            }
            // GREATER
            else
            {
                if(h_greater == NULL)
                    h_greater = t_greater = curr;
                else
                {
                    t_greater->next = curr;
                    t_greater = curr;
                }
                curr = curr->next;
                t_greater->next = NULL;
            }
        }
        
        head = NULL;
        Node *tail = NULL;
        
        if(h_less)
        {
            head = h_less;
            tail = t_less;
        }
        
        if(h_equal)
        {
            if(head == NULL)
            {
                head = h_equal;
                tail = t_equal;
            }
            else
            {
                tail->next = h_equal;
                tail = t_equal;
            }
        }
        
        if(h_greater)
        {
            if(head == NULL)
            {
                head = h_greater;
                tail = t_greater;
            }
            else
            {
                tail->next = h_greater;
                tail = t_greater;
            }
        }
        
        return head;
    }
};
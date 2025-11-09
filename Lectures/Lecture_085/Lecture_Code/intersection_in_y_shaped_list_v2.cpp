/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        // reach to the end node
        Node* curr1 = head1;
        while(curr1->next != NULL)
            curr1 = curr1->next;
        
        // make a loop with head1
        curr1->next = head1;
        
        // PREVIOUS ALGORITHM FIND THE LOOP AND WHERE THE LOOP BEGINS
        // find the loop
        Node* slow = head2;
        Node* fast = head2;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                break;
        }
        
        // slow ponits to head2
        slow = head2;
        // increase both by 1 till they are equal
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
        
    }
};
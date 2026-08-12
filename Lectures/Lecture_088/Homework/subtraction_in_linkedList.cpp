class Solution {
  public:
    // Function to find greater
    Node* greater(Node* h1, Node *h2)
    {
        Node *L1 = h1, *L2 = h2;
        Node *ans = NULL;
        
        while(L1 && L2)
        {
            if(L1->data > L2->data)
            {
                if(ans == NULL)
                    ans = h1;
            }
            else if(L1->data < L2->data )
            {
                if(ans == NULL)
                    ans = h2;
            }
            
            L1 = L1->next;
            L2 = L2->next;
        }
        
        if(L1)
            ans = h1;
        
        if(L2)
            ans = h2;
        
        return ans;
    }
    
    // Function to reverse
    Node* rev(Node* curr, Node* prev)
    {
        if(curr == NULL)
            return prev;
        
        Node* front = curr->next;
        curr->next = prev;
        
        return rev(front,curr);
    }
    
    Node* subLinkedList(Node* head1, Node* head2) {
       // 1: identify which one is greater 
       Node *temp = greater(head1, head2);
       if(temp == NULL)
       {
           Node *result = new Node(0);
           return result;
       }
       
       // 2: Swap greater to Head1 if Not
       if(temp ==  head2)
            swap(head1, head2);
            
        // 3: reverse both List
        Node* L1 = rev(head1, NULL);
        Node* L2 = rev(head2, NULL);
        
        // 4: SUBTRACTION
        Node* L3 = NULL; 
        int borrow = 0, diff;
        
        while(L1 && L2)
        {
            diff = L1->data - L2->data - borrow;
            if(diff < 0)
            {
                diff += 10;
                borrow = 1;
            }
            else 
                borrow = 0;
            
            // insert at head
            Node* temp = new Node(diff);
            temp->next = L3;
            L3 = temp;
            
            L1 = L1->next;
            L2 = L2->next;
        }
        
        while(L1)
        {
            diff = L1->data - borrow;
            if(diff < 0)
            {
                diff += 10;
                borrow = 1;
            }
            else 
                borrow = 0;
                
            // insert at head
            Node* temp = new Node(diff);
            temp->next = L3;
            L3 = temp;
            
            L1 = L1->next;
        }
        
        while(L2)
        {
            diff = L2->data - borrow;
            if(diff < 0)
            {
                diff += 10;
                borrow = 1;
            }
            else
                borrow = 0;
                
            // insert at head
            Node* temp = new Node(diff);
            temp->next = L3;
            L3 = temp;

            L2 = L2->next;
        }
        
        // 5: removing leading zeros
        while(L3 && L3->data == 0)
        {
            Node* temp = L3;
            L3 = L3->next;
            delete temp;
        }
        
        return L3;
    }
    
        
};
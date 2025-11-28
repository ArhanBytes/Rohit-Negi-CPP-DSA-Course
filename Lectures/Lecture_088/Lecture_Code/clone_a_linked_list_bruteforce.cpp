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

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        // 1: first creating the another linked list
        Node* main_head = new Node(head->data);
        Node* traverse1 = head->next;
        Node* tail = main_head;
        while(traverse1 != NULL)
        {
            tail->next = new Node(traverse1->data);
            tail = tail->next;
            traverse1 = traverse1->next;
        }
        
        // 2: Now add the random pointer 
        Node *temp1 = head;
        Node *temp2 = main_head;
        Node *traverse2;
        while(temp1 && temp2)
        {
            Node* points = temp1->random;
            traverse1 = head;
            traverse2 = main_head;
            while(traverse1 != points)
            {
                traverse1 = traverse1->next;
                traverse2 = traverse2->next;
            }
            
            temp2->random = traverse2;
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return main_head;
    }
};
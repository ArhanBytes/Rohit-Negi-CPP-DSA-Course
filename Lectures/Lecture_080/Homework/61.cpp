/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // basic approach
        if(head == NULL || head->next == NULL) return head; 
        // count the number of nodes
        ListNode *tail = head;
        int count = 0;
        while(tail->next != NULL)
        {
            count++,
            tail = tail->next;
        }

        count++;

        // if there is multiple rotations of linkedlist
        k = k % count;
        if(k)
        {
            // woh pointer jahan tk sa rotation krni hai
            int location = count - k;
            ListNode* curr = head;
            ListNode* prev = NULL;
            while(location--)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = NULL;
            // join the tail of linked list to front
            tail->next = head;
            // update the head
            head = curr;
        }

        return head;
    }
};
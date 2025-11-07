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
        if(head == NULL || head->next == NULL) return head;

        vector<int> elem;
        int count = 0;
        ListNode* temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        // jump to the position where we have to actually start
        k = k % count;
        int location = count - k; 

        temp = head;
        for(int i = 0; i < count; i++)
        {
            temp->val = elem[(location+i) % count];
            temp = temp->next;
        }

        return head;
    }
};

// this code isn't working as in leetcode it is expected that you have to actually rotate the linkedlist :)
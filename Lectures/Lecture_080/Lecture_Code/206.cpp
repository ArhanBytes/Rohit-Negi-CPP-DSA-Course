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
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;

        // store data to vector
        while(temp)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }   

        // updating the linkedlist
        temp = head;
        for(int i = ans.size() -1; i >= 0; i--)
        {
            temp->val = ans[i];
            temp = temp->next;
        }

        return head;
    }
};
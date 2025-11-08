/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution
{
public:
    // Function to remove duplicates from sorted linked list.
    Node *removeDuplicates(Node *head)
    {
        // Method 1:
        /*
        vector<int>ans;
        ans.push_back(head->data);

        Node* curr = head;

        while(curr)
        {
            if(ans[ans.size()-1] != curr->data)
                ans.push_back(curr->data);
            curr = curr->next;
        }
        `
        curr = head;
        Node* prev = NULL
        int index = 0;
        while(index < ans.size())
        {
            curr->data = ans[index++];
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        return head;
        */

        // Method 2:
        /*
        Node* prev = head;
        Node* curr = head->next;

        while(curr != NULL)
        {
            if(prev->data == curr->data)
            {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else
            {
                prev = prev->next;
                curr = curr->next;
            }
        }

        return head;
        */

        // Method 3:
        Node *fast = head->next;
        Node *slow = head;

        while (fast != NULL)
        {
            if (slow->data != fast->data)
            {
                slow = slow->next;
                slow->data = fast->data;
            }
            fast = fast->next;
        }

        slow->next = NULL;
        return head;
    }
};
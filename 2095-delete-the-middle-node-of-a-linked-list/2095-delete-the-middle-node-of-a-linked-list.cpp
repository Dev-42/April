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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head->next == NULL)
        {
            delete(head);
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        while(fast != NULL && fast->next != NULL)
        {
            if(slow != head)
            {
                prev = prev -> next;
            }
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* ptr = slow -> next;
        prev -> next = ptr;
        delete(slow);
        return head;
    }
};
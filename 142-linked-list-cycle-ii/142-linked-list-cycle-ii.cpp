/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *slow = head,*fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
                break;
        }
        if(fast == NULL || fast ->next == NULL)
            return NULL;
        ListNode *ptr = head,*ptr1 = slow;
        while(ptr != ptr1)
        {
            ptr1 = ptr1 -> next;
            ptr = ptr -> next;
        }
        return ptr; 
    }
};
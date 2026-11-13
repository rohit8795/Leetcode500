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
    ListNode *detectCycle(ListNode *head) {
        //if(head->next == NULL) return NULL;
        bool flag = false;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                flag = true;
                break;
            }
        }
        if(flag == false) return NULL;
        else{
            while(slow!=temp)
            {
                slow = slow->next;
                temp = temp->next;
            }
        }
        return slow;
    }
};
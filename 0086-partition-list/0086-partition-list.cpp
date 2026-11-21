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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a = new ListNode(100);
        ListNode* b = new ListNode(200);
        ListNode* tempa = a;
        ListNode* tempb = b;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(temp->val < x)
            {
                tempa->next = temp;
                tempa = tempa->next;
            }
            else{
                tempb->next = temp;
                tempb = tempb->next;
            }
            temp = temp->next;
        }
        tempa->next = NULL;
        tempb->next = NULL;
        tempa->next = b->next;
        return a->next;
    }
};
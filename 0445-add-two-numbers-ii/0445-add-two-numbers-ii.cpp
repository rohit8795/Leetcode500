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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        while(curr!=NULL)
        {
            Next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        int sum = 0 ;
        int carry = 0;
        ListNode* ans = new ListNode(0);
        ListNode* tempans = ans;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1!=NULL)
            {
                sum = sum+l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }
            ListNode* a = new ListNode(sum%10);
            tempans->next = a;
            tempans = tempans->next;
            carry = sum/10;
            sum = carry;
        }
        if(carry>0)
        {
            ListNode* b = new ListNode(carry);
            tempans->next = b;
            tempans = tempans->next;
        }
        ListNode* c = ans->next;
        c = reverse(c);
        return c;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //<------ METHOD 1 -------->

        // ListNode* temp = head;
        // int s = 0 ; 
        // while(temp!=NULL)
        // {
        //     s++;
        //     temp= temp->next;
        // }
        // if(s==1) return NULL;
        // if(s==n) return head->next;
        // temp = head;
        // for(int i = 1 ; i < s-n ;i++)
        // {
        //     temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;

        //<------ METHOD 1 -------->

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int s =0;
        while(temp!=NULL)
        {
            s++;
            temp= temp->next;
        }
        if(s==1) return NULL;
        if(s==n) return head->next;
        temp = head;
        for(int i = 1 ; i <= n ; i++)
        {
            fast = fast->next;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
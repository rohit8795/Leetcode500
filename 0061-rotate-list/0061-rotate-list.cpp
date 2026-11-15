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
        if(head==NULL || head->next == NULL) return head;
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            n++;
        }
        temp = head;
        int actual_k = k%n;
        if(actual_k==0) return head;
        for(int i = 1 ; i<n-actual_k ;i++)
        {
            temp = temp->next;
        }
        ListNode* a = temp->next;
        ListNode* b = head;
        while(b->next!=NULL)
        {
            b = b->next;
        }
        b->next = head;
        temp->next = NULL;
        return a;
    }
};
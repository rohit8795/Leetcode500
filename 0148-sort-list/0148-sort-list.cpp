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
    ListNode* merge(ListNode* list1 , ListNode* list2)
    {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1!=NULL && list2== NULL) return list1;
        if(list1==NULL && list2!= NULL) return list2;

        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* c = new ListNode(100);
        ListNode* tempc = c;

        while(a!=NULL && b!=NULL)
        {
            if(a->val<=b->val)
            {
                tempc->next = a;
                tempc = tempc->next;
                a = a->next;
            }
            else{
                tempc->next = b;
                tempc = tempc->next;
                b = b->next;
            }
        }
        if(a==NULL) tempc->next = b;
        else tempc->next = a;

        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* p = slow->next;
        slow->next=NULL;
        ListNode* q = head;
        ListNode* left = sortList(p);
        ListNode* right = sortList(q);
        ListNode* ans = merge(left,right);
        return ans;
    }
};
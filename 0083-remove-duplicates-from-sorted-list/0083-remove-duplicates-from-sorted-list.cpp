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
    ListNode* deleteDuplicates(ListNode* head) {

        //<-------- METHOD NO - 1 ----------->

        // if(head==NULL && head->next==NULL) return head;
        // set<int>st;
        // ListNode* temp = head;
        // while(temp!=NULL)
        // {
        //     st.insert(temp->val);
        //     temp = temp->next;
        // }
        // for(auto x : st)
        // {
        //     cout<<x<<" ";
        // }
        // ListNode* c = new ListNode(100);
        // ListNode* tempc = c;
        // for(auto x : st)
        // {
        //     ListNode* a = new ListNode(x);
        //     tempc->next = a;
        //     tempc = tempc->next;
        // }
        // return c->next;

        //<-------- METHOD NO - 2 ----------->

        // if(head==NULL || head->next==NULL) return head;
        // ListNode* c = new ListNode(100);
        // ListNode* tempc = head;
        // ListNode* temp = head->next;
        // c->next = head;
        // while(temp!=NULL)
        // {
        //     if(temp->val!=tempc->val)
        //     {
        //         tempc->next = temp;
        //         tempc = temp;
        //     }
        //     temp = temp->next;
        // }
        // tempc->next=nullptr;
        // return c->next;

        //<-------- METHOD NO - 3 ----------->

        if(head==NULL || head->next==NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=NULL)
        {
            while(b!=NULL && a->val==b->val) b = b->next;
            a->next = b;
            a=b;
            if(b!=NULL) b = b->next;
        }
        return head;
    }
};
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
        if(head==NULL || head->next==NULL) return head;
        if(head==NULL && head->next==NULL) return head;
        set<int>st;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            st.insert(temp->val);
            temp = temp->next;
        }
        for(auto x : st)
        {
            cout<<x<<" ";
        }
        ListNode* c = new ListNode(100);
        ListNode* tempc = c;
        for(auto x : st)
        {
            ListNode* a = new ListNode(x);
            tempc->next = a;
            tempc = tempc->next;
        }
        return c->next;
    }
};
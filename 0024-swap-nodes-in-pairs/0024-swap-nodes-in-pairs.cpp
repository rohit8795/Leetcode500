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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        vector<ListNode*> v;
        while(temp!=NULL)
        {
            v.push_back(temp);
            temp = temp->next;
        }
        for(auto x : v)
        {
            cout<<x->val<<"->";
        }
        ListNode* dummy = new ListNode(100);
        ListNode* tempd = dummy;
        while(v.size()>1)
        {
            ListNode* a = v[0];
            v.erase(v.begin());
            ListNode* b = v[0];
            v.erase(v.begin());
            a->next = NULL;
            b->next = a;

            tempd->next = b;

            tempd = a;
        }
        if(v.size()==1)
        {
            tempd->next = v[0];
        }
        else{
            tempd->next = NULL;
        }
        return dummy->next;
    }
};
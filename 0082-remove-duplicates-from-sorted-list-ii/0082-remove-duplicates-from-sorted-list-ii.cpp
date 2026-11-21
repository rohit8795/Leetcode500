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
        map<int,int>mp;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode* c = new ListNode(500);
        ListNode* tempc = c;
        for(auto x : mp)
        {
            if(x.second==1)
            {
                ListNode* a = new ListNode(x.first);
                tempc->next = a;
                tempc = tempc->next;
            }
        }
        return c->next;
    }
};
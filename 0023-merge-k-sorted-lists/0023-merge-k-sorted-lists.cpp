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
    ListNode* merge(ListNode* a , ListNode* b)
    {
        if(a==NULL && b==NULL) return a;
        if(a!=NULL && b==NULL) return a;
        if(a==NULL && b!=NULL) return b;
        ListNode* c = new ListNode(100);
        ListNode* tempa = a;
        ListNode* tempb = b;
        ListNode* tempc = c;
        while(tempa!=NULL && tempb!=NULL)
        {
            if(tempa->val<=tempb->val)
            {
                tempc->next = tempa;
                tempc = tempc->next;
                tempa = tempa->next;
            }
            else{
                tempc->next = tempb;
                tempc = tempc->next;
                tempb = tempb->next;
            }
        }
        if(tempb==NULL){
            tempc->next = tempa;
        }
        else{
            tempc->next = tempb;
        }
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1)
        {
            ListNode* a = lists[0];
            lists.erase(lists.begin());
            ListNode* b = lists[0];
            lists.erase(lists.begin());

            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};
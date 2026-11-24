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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode*>v;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            v.push_back(temp);
            temp = temp->next;
        }
        ListNode* tempd = NULL;
        ListNode* a = NULL;
        ListNode* tempa = NULL;
        ListNode* b = NULL;
        ListNode* tempb = NULL;
        ListNode* c = NULL;
        ListNode* ans = new ListNode(100);
        ListNode* tempans = ans;
        while(v.size()>=k)
        {
            tempd =NULL;
            int x = k;
            c = v[0];
            while(x!=0)
            {
                a = v[0];
                v.erase(v.begin()); 
                a->next = tempd;
                tempd = a; 
                x--;
            }
            tempans->next = tempd;
            tempans = c;
        }
        if(v.size()>0)
        {
            while(v.size()>0)
            {
                tempans->next = v[0];
                tempans = tempans->next;
                v.erase(v.begin());
            }
        }
        return ans->next;
    }
};
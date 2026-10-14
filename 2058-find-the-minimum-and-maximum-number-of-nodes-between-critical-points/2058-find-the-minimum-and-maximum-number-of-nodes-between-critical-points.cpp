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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* a = head;
        int fidx = -1;
        int sidx = -1;
        int mind = INT_MAX;
        int f = -1;
        int s = -1;
        int idx = 1;
        if(temp->next == NULL)
        {
            return {-1,-1};
        }
        while(temp->next!=NULL)
        {
            if((temp->val>a->val && temp->val>temp->next->val) || (temp->val<a->val && temp->val<temp->next->val))
            {
                if(fidx ==-1) fidx = idx;
                else sidx = idx;

                f = s;
                s = idx;
                if(f!=-1)
                {
                    mind = min(mind , s-f);
                } 
            }
            idx++;
            temp = temp->next;
            a = a->next;
        }
        if(fidx == -1 || sidx == -1) return {-1,-1};
        int maxd = sidx - fidx;
        return {mind , maxd};
        //return {(ans[ans.size()-1]-ans[ans.size()-2]),(ans[ans.size()-1]-ans[0])};
    }
};
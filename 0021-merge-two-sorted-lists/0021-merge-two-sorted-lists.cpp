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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return list1;
        if(list1==NULL && list2!=NULL) return list2;
        if(list1!=NULL && list2==NULL) return list1;
        ListNode* dummy = new ListNode(100);
        ListNode* tempd = dummy;
        ListNode* templ1 = list1;
        ListNode* templ2 = list2;
        while(templ1!=NULL && templ2!=NULL)
        {
            if(templ1->val<=templ2->val)
            {
                tempd->next = templ1;
                tempd = tempd->next;
                templ1 = templ1->next;
                
            }
            else
            {
                tempd->next = templ2;
                tempd = tempd->next;
                templ2 = templ2->next;
            }
        }
        if(templ2==NULL)
        {
            tempd->next = templ1;
        }
        else{
            tempd->next = templ2;
        }
        tempd = dummy;
        return dummy->next;
    }
};
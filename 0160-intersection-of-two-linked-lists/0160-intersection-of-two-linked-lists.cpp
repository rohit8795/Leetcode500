/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int n1= 0;
        int n2 = 0;
        while(tempA!=NULL)
        {
            n1++;
            tempA= tempA->next;
        }
        while(tempB!=NULL)
        {
            n2++;
            tempB = tempB->next;
        }
        int x = abs(n1-n2);
        tempA = headA;
        tempB = headB;
        if(n1>n2)
        {
            while(x!=0)
            {
                tempA = tempA->next;
                x--;
            }
            while(tempA!=NULL && tempB!=NULL)
            {
                if(tempA==tempB) return tempA;
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        else{
            while(x!=0)
            {
                tempB = tempB->next;
                x--;
            }
            while(tempA!=NULL && tempB!=NULL)
            {
                if(tempA==tempB) return tempA;
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return NULL;
    }
};
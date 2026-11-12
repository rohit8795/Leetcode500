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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* temp = head;
        ListNode* tempD1 = dummy1;
        ListNode* tempD2 = dummy2;
        while(temp!=NULL)
        {
            tempD1->next = temp;
            temp = temp->next;
            tempD1 = tempD1->next;

            tempD2->next = temp;
            if(temp)temp = temp->next;
            tempD2 = tempD2->next;
        }
        tempD1->next = NULL;
        if(tempD2)tempD2->next = NULL;
        ListNode* a = dummy1->next;
        ListNode* b = dummy2->next;
        temp = a;
        while(temp!=NULL && temp->next!=NULL)
        {
            temp = temp->next;
        }
        if(temp)temp->next = b;
        return a;


        
    }
};
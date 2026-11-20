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
    ListNode* reverse(ListNode* head)
    {
        if(head == NULL || head->next==NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = NULL;
        while(curr!=NULL)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head; 
        ListNode* temp = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* c = slow->next;
        slow->next = NULL;
        ListNode* rev = reverse(c);
        ListNode* dummy = new ListNode(200);
        ListNode* tempD = dummy;
        while(temp!=NULL && rev!=NULL)
        {
            tempD->next = temp;
            temp = temp->next;
            tempD = tempD->next;

            tempD->next = rev;
            rev = rev->next;
            tempD = tempD->next;
        }
        if(rev==NULL)
        {
            tempD->next = temp;
        }
        else{
            tempD->next = rev;
        }
        head = tempD->next;
    }
};
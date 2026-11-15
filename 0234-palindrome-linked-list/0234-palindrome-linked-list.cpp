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
    ListNode* reverseList(ListNode* head)
    {
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
    bool isPalindrome(ListNode* head) {

        // <-------- METHOD-1 ---------->

        // ListNode* temp = head;
        // ListNode* dummy = new ListNode(100);
        // ListNode* start = dummy;
        // while(temp!=NULL)
        // {
        //     ListNode* tempNode = new ListNode(temp->val);
        //     dummy->next = tempNode;
        //     dummy=dummy->next;
        //     temp = temp->next;
        // }
        // ListNode* duplicate = start->next;
        // ListNode* NewNode = reverseList(duplicate);
        // ListNode* tempNew = NewNode;
        // temp = head;
        // while(temp!=NULL && tempNew!=NULL)
        // {
        //     if(temp->val!=tempNew->val) return false;
        //     temp = temp->next;
        //     tempNew = tempNew->next;
        // }
        // return true;

        // <-------- METHOD - 2 --------->

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast = fast->next->next;
        }
        ListNode* second_half1 = slow->next;
        slow->next = NULL;
        ListNode* second_half = reverseList(second_half1);
        ListNode* temp = head;
        while(temp!=NULL && second_half!=NULL)
        {
            if(temp->val!=second_half->val) return false;
            temp = temp->next;
            second_half = second_half->next;
        }
        return true;
         
    }
};
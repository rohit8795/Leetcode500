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
        ListNode* temp = head;
        ListNode* dummy = new ListNode(100);
        ListNode* start = dummy;
        while(temp!=NULL)
        {
            ListNode* tempNode = new ListNode(temp->val);
            dummy->next = tempNode;
            dummy=dummy->next;
            temp = temp->next;
        }
        ListNode* duplicate = start->next;
        ListNode* NewNode = reverseList(duplicate);
        ListNode* tempNew = NewNode;
        temp = head;
        while(temp!=NULL && tempNew!=NULL)
        {
            if(temp->val!=tempNew->val) return false;
            temp = temp->next;
            tempNew = tempNew->next;
        }
        return true;
    }
};
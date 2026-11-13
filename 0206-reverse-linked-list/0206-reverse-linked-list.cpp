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
    ListNode* reverseList(ListNode* head) {

        // <------- Method - 1 ---------->

        // if(head == NULL) return NULL;
        // if(head->next == NULL) return head;
        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* Next = NULL;
        // while(curr!=NULL)
        // {
        //     Next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = Next;
        // }
        // return prev;

        // <------- Method - 2 (Recursive solution) ---------->
        if(head == NULL || head->next==NULL) return head;
        ListNode* newhead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
};
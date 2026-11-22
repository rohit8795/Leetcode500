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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head->next;
        stack<ListNode*>st;
        st.push(head);
        while(temp!=NULL)
        {
            while(st.size()>0 && st.top()->val < temp->val) st.pop();
            st.push(temp);
            temp = temp->next;
        }
        stack<ListNode*>helper_st;
        while(!st.empty())
        {
            helper_st.push(st.top());
            st.pop();
        }
        ListNode* c = new ListNode(100);
        ListNode* tempc = c;
        while(helper_st.size()!=0)
        {
            ListNode* a = helper_st.top();
            tempc->next = a;
            tempc = tempc->next;
            helper_st.pop();
        }
        return c->next;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;

        // Step 1: Create deep copy
        Node* temp = head;
        Node* dummy = new Node(0);
        Node* tail = dummy;

        while(temp != NULL)
        {
            tail->next = new Node(temp->val);

            tail = tail->next;
            temp = temp->next;
        }

        Node* duplicate = dummy->next;
        Node* a = head;
        Node* b = duplicate;
        unordered_map<Node* , Node*> mp;
        Node* tempa = a;
        Node* tempb = b;
        while(tempa!=NULL)
        {
            mp[tempa] = tempb;
            tempa = tempa->next;
            tempb = tempb->next;
        }
        for(auto x : mp)
        {
            Node* o = x.first;
            Node* d = x.second;
            if(o->random!=NULL) 
            {
                d->random = mp[o->random];
            }
        }
        return b;
    }
};
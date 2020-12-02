// Given a singly linked list, return a random node's value from the linked list. Each node must have the same probability of being chosen.

// Follow up:
// What if the linked list is extremely large and its length is unknown to you? Could you solve this efficiently without using extra space?



class Solution {
public:
    // @param head The linked lists head.
        //Note that the head is guaranteed to be not null, so it contains at least one node. 
        ListNode* head =NULL;

    Solution(ListNode* h) {
         head = h;
    }
    
    // Returns a random node's value. 
    int getRandom() {
        ListNode* curr= head;
        ListNode* res;
        int n=1;
        while(curr) {
            if (rand()% n == 0)
            res = curr;
            curr = curr->next;
            n++;
        }
   return res->val;
    }
    
};
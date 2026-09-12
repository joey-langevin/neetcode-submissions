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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* node = head;
        int len = 0;
        while (node) {
            node = node->next;
            ++len;
        }
        int indexToRemove = len - n;
        int idx = 0;
        ListNode* dummy = new ListNode();
        ListNode* ret = dummy;
        dummy->next = head;
        for (int i = 0; i < indexToRemove; ++i) {
            dummy = dummy->next;
        }
        dummy->next = dummy->next->next;
        return ret->next;
        
    }
};

// remove nth from end
// N = 4
// index = 4 - 2 = 2

// at i -1 set i->next = i_next->next
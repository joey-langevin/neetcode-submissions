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

        int size = 0;
        ListNode* cur = head;

        while (cur) {
            ++size;
            cur = cur->next;
        }
        ListNode* dummy = new ListNode(0, head);
        cur = dummy;
        int pos = 0;
        while (cur) {
            if (size - n == pos) {
                cur->next = cur->next->next;
            }
            cur = cur->next;
            ++pos;
        }
        return dummy->next;

        
    }
};
